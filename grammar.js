const PREC = {
  // this resolves a conflict between the usage of ':' in a lambda vs in a
  // typed parameter. In the case of a lambda, we don't allow typed parameters.
  lambda: -2,
  typed_parameter: -1,
  conditional: -1,

  parenthesized_expression: 1,
  or: 10,
  and: 11,
  not: 12,
  compare: 13,
  bitwise_or: 14,
  bitwise_and: 15,
  xor: 16,
  shift: 17,
  plus: 18,
  times: 19,
  unary: 20,
  power: 21,
  call: 22,
};

const SEMICOLON = ";";

module.exports = grammar({
  name: "pacos",

  extras: ($) => [
    $.comment,
    /[\s\f\uFEFF\u2060\u200B]|\r?\n/,
    $.line_continuation,
  ],

  conflicts: ($) => [
    [$.primary_expression, $.pattern],
    [$.named_expression, $.as_pattern],
    [$.type_alias_statement, $.primary_expression],
  ],

  supertypes: ($) => [
    $._simple_statement,
    $._compound_statement,
    $.expression,
    $.primary_expression,
    $.pattern,
    $.parameter,
  ],

  externals: ($) => [
    $._newline,
    $._indent,
    $._dedent,
    $.string_start,
    $._string_content,
    $.escape_interpolation,
    $.string_end,

    // Mark comments as external tokens so that the external scanner is always
    // invoked, even if no external token is expected. This allows for better
    // error recovery, because the external scanner can maintain the overall
    // structure by returning dedent tokens whenever a dedent occurs, even
    // if no dedent is expected.
    $.comment,

    // Allow the external scanner to check for the validity of closing brackets
    // so that it can avoid returning dedent tokens between brackets.
    "]",
    ")",
    "}",
    "except",
  ],

  inline: ($) => [
    $._simple_statement,
    $._compound_statement,
    $._suite,
    $._expressions,
    $._left_hand_side,
  ],

  word: ($) => $.identifier,

  rules: {
    source: ($) =>
      seq(
        optional(seq("module", $.module)),
        repeat($.import),
        repeat($.const),
        repeat(choice($.record, $.trait, $.enum, $.fn, $.test))
      ),

    module: ($) => $.identifier,

    import: ($) => seq("import", $.url),
    url: ($) => sep1(/[a-zA-Z_][a-zA-Z_0-9]*/, "/"),

    const: ($) =>
      seq(
        field("name", $.const_identifier),
        "=",
        field("value", $.primary_expression)
      ),

    generic_list: ($) => seq("[", commaSep1($.generic_type2), "]"),
    generic_type2: ($) =>
      seq($.identifier, optional(seq(":", sep1($.identifier, "&")))),
    type2: ($) => seq($.identifier, optional("?")),

    record: ($) =>
      seq(
        "record",
        field("name", $.identifier),
        field("generics", optional($.generic_list)),
        field("fields", seq("(", commaSep1($.record_field), ")"))
      ),

    record_field: ($) =>
      seq(field("name", $.identifier), ":", field("type", $.type2)),

    trait: ($) =>
      seq(
        "trait",
        field("name", $.identifier),
        field("generics", optional($.generic_list)),
        field("fields", seq("(", repeat($.trait_field), ")"))
      ),

    trait_field: ($) =>
      seq(
        "fn",
        field("name", $.identifier),
        field("params", seq("(", optional(commaSep1($.param)), ")")),
        ":",
        field("returns", optional(commaSep1($.type2)))
      ),

    param: ($) => seq(field("name", $.identifier), ":", field("type", $.type2)),

    enum: ($) =>
      seq(
        "enum",
        field("name", $.identifier),
        "=",
        field("fields", repeat($.enum_field))
      ),

    enum_field: ($) =>
      seq("|", field("name", $.identifier), "(", commaSep1($.identifier), ")"),

    fn: ($) =>
      seq(
        optional($.decorator),
        "fn",
        field("name", choice($.identifier, $._extension)),
        field("params", seq("(", optional(commaSep1($.param)), ")")),
        ":",
        field("returns", optional(commaSep1($.type2))),
        "=",
        $.body
      ),

    decorator: ($) => seq("#", "[", $.expression, "]", $._newline),

    body: ($) =>
      seq($._indent, optional($.doc_comment), repeat($._statement), $._dedent),

    test: ($) => seq("test", "(", $.string, ")", $.lambda),

    _statement: ($) =>
      choice($.pass_statement, $.assignment_statement, $.for_statement),

    assignment_statement: ($) =>
      seq(
        field("left", commaSep1($.identifier)),
        seq(":=", field("right", $.primary_expression))
      ),

    _simple_statement: ($) =>
      choice(
        $.assert_statement,
        // $.expression_statement,
        $.return_statement,
        $.raise_statement,
        $.pass_statement,
        $.break_statement,
        $.continue_statement
      ),

    assert_statement: ($) => seq("assert", commaSep1($.expression)),

    expression_statement: ($) =>
      choice(
        $.expression,
        seq(commaSep1($.expression), optional(",")),
        $.assignment,
        $.augmented_assignment
      ),

    named_expression: ($) =>
      seq(
        field("name", $._named_expression_lhs),
        "=",
        field("value", $.expression)
      ),

    _named_expression_lhs: ($) => $.identifier,

    return_statement: ($) => seq("return", optional($._expressions)),

    _expressions: ($) => choice($.expression, $.expression_list),

    raise_statement: ($) =>
      seq(
        "raise",
        optional($._expressions),
        optional(seq("from", field("cause", $.expression)))
      ),

    pass_statement: (_) => prec.left("pass"),
    break_statement: (_) => prec.left("break"),
    continue_statement: (_) => prec.left("continue"),

    // Compound statements
    _compound_statement: ($) =>
      choice(
        $.for_statement,
        $.while_statement
        // $.if_statement,
        // $.try_statement,
        // $.match_statement
      ),

    if_statement: ($) =>
      seq(
        "if",
        field("condition", $.expression),
        ":",
        field("consequence", $._suite),
        repeat(field("alternative", $.elif_clause)),
        optional(field("alternative", $.else_clause))
      ),

    elif_clause: ($) =>
      seq(
        "elif",
        field("condition", $.expression),
        ":",
        field("consequence", $._suite)
      ),

    else_clause: ($) => seq("else", ":", field("body", $._suite)),

    match_statement: ($) =>
      seq(
        "match",
        commaSep1(field("subject", $.expression)),
        optional(","),
        ":",
        field("body", alias($._match_block, $.block))
      ),

    _match_block: ($) =>
      choice(
        seq($._indent, repeat(field("alternative", $.case_clause)), $._dedent),
        $._newline
      ),

    case_clause: ($) =>
      seq(
        "case",
        commaSep1($.case_pattern),
        optional(","),
        optional(field("guard", $.if_clause)),
        ":",
        field("consequence", $._suite)
      ),

    reference: ($) =>
      prec(PREC.call, seq($.identifier, optional(seq(".", $.identifier)))),
    range_value: ($) => choice($.integer, $.reference, $.call),

    for_statement: ($) =>
      seq(
        "for",
        field("left", commaSep1($.identifier)),
        ":=",
        "range",
        field("right", $.range_value),
        field("body", $.body)
      ),

    while_statement: ($) =>
      seq(
        "while",
        field("condition", $.expression),
        ":",
        field("body", $._suite),
        optional(field("alternative", $.else_clause))
      ),

    try_statement: ($) =>
      seq(
        "try",
        ":",
        field("body", $._suite),
        choice(
          seq(
            repeat1($.except_clause),
            optional($.else_clause),
            optional($.finally_clause)
          ),
          seq(
            repeat1($.except_group_clause),
            optional($.else_clause),
            optional($.finally_clause)
          ),
          $.finally_clause
        )
      ),

    except_clause: ($) =>
      seq(
        "except",
        optional(
          seq($.expression, optional(seq(choice("as", ","), $.expression)))
        ),
        ":",
        $._suite
      ),

    except_group_clause: ($) =>
      seq(
        "except*",
        seq($.expression, optional(seq("as", $.expression))),
        ":",
        $._suite
      ),

    finally_clause: ($) => seq("finally", ":", $._suite),

    parameters: ($) => seq("(", optional($._parameters), ")"),

    global_statement: ($) => seq("global", commaSep1($.identifier)),

    nonlocal_statement: ($) => seq("nonlocal", commaSep1($.identifier)),

    type_alias_statement: ($) =>
      prec.dynamic(1, seq("type", $.type, "=", $.type)),

    type_parameter: ($) => seq("[", commaSep1($.type), "]"),

    argument_list: ($) =>
      seq(
        "(",
        optional(
          commaSep1(choice($.expression, $.keyword_argument, $.pair_argument))
        ),
        optional(","),
        ")"
      ),

    keyword_argument: ($) =>
      seq(field("name", $.identifier), ":", field("value", $.expression)),

    pair_argument: ($) =>
      seq(field("name", $.string), "=>", field("value", $.expression)),

    _suite: ($) => choice(seq($._indent, $.block), alias($._newline, $.block)),

    block: ($) => seq(repeat($._statement), $._dedent),

    expression_list: ($) =>
      prec.right(
        seq(
          $.expression,
          choice(",", seq(repeat1(seq(",", $.expression)), optional(",")))
        )
      ),

    dotted_name: ($) => prec(1, sep1($.identifier, ".")),

    // Match cases

    case_pattern: ($) =>
      prec(
        1,
        choice(
          alias($._as_pattern, $.as_pattern),
          $.keyword_pattern,
          $._simple_pattern
        )
      ),

    _simple_pattern: ($) =>
      prec(
        1,
        choice(
          $.class_pattern,
          $.string,
          $.true,
          $.false,
          $.nil,
          seq(optional("-"), choice($.integer, $.float)),
          $.complex_pattern,
          $.dotted_name,
          "_"
        )
      ),

    _as_pattern: ($) => seq($.case_pattern, "as", $.identifier),

    _key_value_pattern: ($) =>
      seq(field("key", $._simple_pattern), ":", field("value", $.case_pattern)),

    keyword_pattern: ($) => seq($.identifier, "=", $._simple_pattern),

    class_pattern: ($) =>
      seq(
        $.dotted_name,
        "(",
        optional(seq(commaSep1($.case_pattern), optional(","))),
        ")"
      ),

    complex_pattern: ($) =>
      prec(
        1,
        seq(
          optional("-"),
          choice($.integer, $.float),
          choice("+", "-"),
          choice($.integer, $.float)
        )
      ),

    // Patterns

    _parameters: ($) => seq(commaSep1($.parameter), optional(",")),

    _patterns: ($) => seq(commaSep1($.pattern), optional(",")),

    parameter: ($) =>
      choice(
        $.identifier,
        $.typed_parameter,
        $.default_parameter,
        $.typed_default_parameter,
        $.keyword_separator,
        $.positional_separator
      ),

    pattern: ($) => choice($.identifier, $.subscript, $.attribute),

    default_parameter: ($) =>
      seq(field("name", $.identifier), "=", field("value", $.expression)),

    typed_default_parameter: ($) =>
      prec(
        PREC.typed_parameter,
        seq(
          field("name", $.identifier),
          ":",
          field("type", $.type),
          "=",
          field("value", $.expression)
        )
      ),

    // Extended patterns (patterns allowed in match statement are far more flexible than simple patterns though still a subset of "expression")

    as_pattern: ($) =>
      prec.left(
        seq(
          $.expression,
          "as",
          field("alias", alias($.expression, $.as_pattern_target))
        )
      ),

    // Expressions

    expression: ($) =>
      choice(
        $.comparison_operator,
        $.not_operator,
        $.boolean_operator,
        $.lambda,
        $.primary_expression,
        $.conditional_expression,
        $.named_expression,
        $.as_pattern
      ),

    primary_expression: ($) =>
      choice(
        $.binary_operator,
        $.identifier,
        $.string,
        $.integer,
        $.float,
        $.true,
        $.false,
        $.nil,
        $.unary_operator,
        $.attribute,
        $.call
        // $.parenthesized_expression
      ),

    not_operator: ($) =>
      prec(PREC.not, seq("!", field("argument", $.expression))),

    boolean_operator: ($) =>
      choice(
        prec.left(
          PREC.and,
          seq(
            field("left", $.expression),
            field("operator", "&&"),
            field("right", $.expression)
          )
        ),
        prec.left(
          PREC.or,
          seq(
            field("left", $.expression),
            field("operator", "||"),
            field("right", $.expression)
          )
        )
      ),

    binary_operator: ($) => {
      const table = [
        [prec.left, "+", PREC.plus],
        [prec.left, "-", PREC.plus],
        [prec.left, "*", PREC.times],
        [prec.left, "@", PREC.times],
        [prec.left, "/", PREC.times],
        [prec.left, "%", PREC.times],
        [prec.left, "//", PREC.times],
        [prec.right, "**", PREC.power],
        [prec.left, "|", PREC.bitwise_or],
        [prec.left, "&", PREC.bitwise_and],
        [prec.left, "^", PREC.xor],
        [prec.left, "<<", PREC.shift],
        [prec.left, ">>", PREC.shift],
      ];

      // @ts-ignore
      return choice(
        ...table.map(([fn, operator, precedence]) =>
          fn(
            precedence,
            seq(
              field("left", $.primary_expression),
              // @ts-ignore
              field("operator", operator),
              field("right", $.primary_expression)
            )
          )
        )
      );
    },

    unary_operator: ($) =>
      prec(
        PREC.unary,
        seq(
          field("operator", choice("+", "-")),
          field("argument", $.primary_expression)
        )
      ),

    comparison_operator: ($) =>
      prec.left(
        PREC.compare,
        seq(
          $.primary_expression,
          repeat1(
            seq(
              field(
                "operators",
                choice("<", "<=", "==", "!=", ">=", ">", "<>")
              ),
              $.primary_expression
            )
          )
        )
      ),

    lambda: ($) =>
      prec(
        PREC.lambda,
        seq(
          "|",
          field("parameters", optional(commaSep1($.identifier))),
          "|",
          field("body", $.body)
        )
      ),

    assignment: ($) =>
      seq(
        field("left", $._left_hand_side),
        seq("=", field("right", $._right_hand_side))
      ),

    augmented_assignment: ($) =>
      seq(
        field("left", $._left_hand_side),
        field(
          "operator",
          choice(
            "+=",
            "-=",
            "*=",
            "/=",
            "@=",
            "//=",
            "%=",
            "**=",
            ">>=",
            "<<=",
            "&=",
            "^=",
            "|="
          )
        ),
        field("right", $._right_hand_side)
      ),

    _left_hand_side: ($) => $.pattern,

    _right_hand_side: ($) =>
      choice(
        $.expression,
        $.expression_list,
        $.assignment,
        $.augmented_assignment
      ),

    attribute: ($) =>
      prec(
        PREC.call,
        seq(
          field("object", $.primary_expression),
          ".",
          field("attribute", $.identifier)
        )
      ),

    subscript: ($) =>
      prec(
        PREC.call,
        seq(
          field("value", $.primary_expression),
          "[",
          commaSep1(field("subscript", choice($.expression, $.slice))),
          optional(","),
          "]"
        )
      ),

    slice: ($) =>
      seq(
        optional($.expression),
        ":",
        optional($.expression),
        optional(seq(":", optional($.expression)))
      ),

    call: ($) =>
      prec(
        PREC.call,
        seq(field("function", $.reference), field("arguments", $.argument_list))
      ),

    typed_parameter: ($) =>
      prec(
        PREC.typed_parameter,
        seq(choice($.identifier), ":", field("type", $.type))
      ),

    type: ($) =>
      choice(
        $.expression,
        $.splat_type,
        $.generic_type,
        $.constrained_type,
        $.member_type
      ),
    splat_type: ($) => prec(1, seq(choice("*", "**"), $.identifier)),
    generic_type: ($) => prec(1, seq($.identifier, $.type_parameter)),
    constrained_type: ($) => prec.right(seq($.type, ":", $.type)),
    member_type: ($) => seq($.type, ".", $.identifier),
    if_clause: ($) => seq("if", $.expression),

    conditional_expression: ($) =>
      prec.right(
        PREC.conditional,
        seq($.expression, "if", $.expression, "else", $.expression)
      ),

    // string: ($) =>
    //   seq(
    //     '"',
    //     repeat(choice($.escape_sequence, $.quoted_content)),
    //     token.immediate('"')
    //   ),
    // escape_sequence: ($) =>
    //   choice(
    //     token.immediate(/\\[efnrt\"\\]/),
    //     token.immediate(/\\u\{[0-9a-fA-F]{1,6}\}/)
    //   ),

    string: ($) => seq($.string_start, repeat($._string_content), $.string_end),

    string_content: ($) =>
      prec.right(
        repeat1(
          choice(
            $.escape_interpolation,
            $.escape_sequence,
            $._not_escape_sequence,
            $._string_content
          )
        )
      ),

    interpolation: ($) =>
      seq(
        "{",
        field("expression", $._f_expression),
        optional("="),
        optional(field("type_conversion", $.type_conversion)),
        optional(field("format_specifier", $.format_specifier)),
        "}"
      ),

    _f_expression: ($) => choice($.expression, $.expression_list),

    escape_sequence: (_) =>
      token.immediate(
        prec(
          1,
          seq(
            "\\",
            choice(
              /u[a-fA-F\d]{4}/,
              /U[a-fA-F\d]{8}/,
              /x[a-fA-F\d]{2}/,
              /\d{3}/,
              /\r?\n/,
              /['"abfrntv\\]/,
              /N\{[^}]+\}/
            )
          )
        )
      ),

    _not_escape_sequence: (_) => token.immediate("\\"),

    format_specifier: ($) =>
      seq(
        ":",
        repeat(
          choice(
            token(prec(1, /[^{}\n]+/)),
            alias($.interpolation, $.format_expression)
          )
        )
      ),

    type_conversion: (_) => /![a-z]/,

    _hex: ($) => /0[xX][0-9a-fA-F_]+/,
    _binary: ($) => /0[bB][0-1_]+/,

    integer: (_) =>
      token(
        choice(
          seq("0x", repeat1(/_?[A-Fa-f0-9]+/)),
          seq("0b", repeat1(/_?[0-1]+/)),
          seq(repeat1(/[0-9]+_?/), optional("l"))
        )
      ),

    float: (_) => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(
        seq(
          choice(
            seq(digits, ".", optional(digits), optional(exponent)),
            seq(optional(digits), ".", digits, optional(exponent)),
            seq(digits, exponent)
          )
        )
      );
    },

    identifier: (_) => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    _interpolation: ($) => choice(seq("{", $.identifier, "}")),

    const_identifier: (_) => /[A-Z]+(?:_[A-Z]+)*/, // capitalized snake case
    _extension: ($) => seq($.identifier, ".", $.identifier),

    keyword_identifier: ($) =>
      choice(
        prec(-3, alias(choice("print", "exec", "match"), $.identifier)),
        alias("type", $.identifier)
      ),

    true: (_) => "true",
    false: (_) => "false",
    nil: (_) => "nil",

    comment: (_) => token(seq("//", /.*/)),
    doc_comment: (_) => token(seq("`", /.*/)),

    line_continuation: (_) =>
      token(seq("\\", choice(seq(optional("\r"), "\n"), "\0"))),

    positional_separator: (_) => "/",
    keyword_separator: (_) => "*",
  },
});

module.exports.PREC = PREC;

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return sep1(rule, ",");
}

/**
 * Creates a rule to match one or more occurrences of `rule` separated by `sep`
 *
 * @param {RuleOrLiteral} rule
 *
 * @param {RuleOrLiteral} separator
 *
 * @return {SeqRule}
 *
 */
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function arithmeticExpression(exprType) {
  return choice(
    binaryExpr(prec.left, 1, "||", exprType),
    binaryExpr(prec.left, 2, "&&", exprType),
    binaryExpr(prec.left, 3, "==", exprType),
    binaryExpr(prec.left, 3, "!=", exprType),
    binaryExpr(prec.left, 4, "<", exprType),
    binaryExpr(prec.left, 4, "<=", exprType),
    binaryExpr(prec.left, 4, ">", exprType),
    binaryExpr(prec.left, 4, ">=", exprType),
    binaryExpr(prec.left, 5, "|>", exprType),
    binaryExpr(prec.left, 6, "+", exprType),
    binaryExpr(prec.left, 6, "-", exprType),
    binaryExpr(prec.left, 7, "*", exprType),
    binaryExpr(prec.left, 7, "/", exprType),
    binaryExpr(prec.left, 7, "%", exprType),
    binaryExpr(prec.left, 7, "<>", exprType)
  );
}

function binaryExpr(assoc, precedence, operator, expr) {
  return assoc(
    precedence,
    seq(field("left", expr), field("operator", operator), field("right", expr))
  );
}

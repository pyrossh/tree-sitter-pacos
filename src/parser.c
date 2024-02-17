#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 571
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 1
#define TOKEN_COUNT 102
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 45

enum {
  sym_identifier = 1,
  anon_sym_module = 2,
  anon_sym_import = 3,
  aux_sym_url_token1 = 4,
  anon_sym_SLASH = 5,
  anon_sym_EQ = 6,
  anon_sym_LBRACK = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACK = 9,
  anon_sym_COLON = 10,
  anon_sym_AMP = 11,
  anon_sym_QMARK = 12,
  anon_sym_record = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_trait = 16,
  anon_sym_fn = 17,
  anon_sym_enum = 18,
  anon_sym_PIPE = 19,
  anon_sym_POUND = 20,
  anon_sym_test = 21,
  anon_sym_COLON_EQ = 22,
  anon_sym_assert = 23,
  anon_sym_return = 24,
  anon_sym_raise = 25,
  anon_sym_from = 26,
  anon_sym_pass = 27,
  anon_sym_break = 28,
  anon_sym_continue = 29,
  anon_sym_if = 30,
  anon_sym_elif = 31,
  anon_sym_else = 32,
  anon_sym_match = 33,
  anon_sym_case = 34,
  anon_sym_DOT = 35,
  anon_sym_for = 36,
  anon_sym_range = 37,
  anon_sym_while = 38,
  anon_sym_try = 39,
  anon_sym_except = 40,
  anon_sym_as = 41,
  anon_sym_except_STAR = 42,
  anon_sym_finally = 43,
  anon_sym_global = 44,
  anon_sym_nonlocal = 45,
  anon_sym_type = 46,
  anon_sym_EQ_GT = 47,
  anon_sym_DASH = 48,
  anon_sym__ = 49,
  anon_sym_PLUS = 50,
  anon_sym_BANG = 51,
  anon_sym_AMP_AMP = 52,
  anon_sym_PIPE_PIPE = 53,
  anon_sym_STAR = 54,
  anon_sym_AT = 55,
  anon_sym_PERCENT = 56,
  anon_sym_SLASH_SLASH = 57,
  anon_sym_STAR_STAR = 58,
  anon_sym_CARET = 59,
  anon_sym_LT_LT = 60,
  anon_sym_GT_GT = 61,
  anon_sym_LT = 62,
  anon_sym_LT_EQ = 63,
  anon_sym_EQ_EQ = 64,
  anon_sym_BANG_EQ = 65,
  anon_sym_GT_EQ = 66,
  anon_sym_GT = 67,
  anon_sym_LT_GT = 68,
  anon_sym_PLUS_EQ = 69,
  anon_sym_DASH_EQ = 70,
  anon_sym_STAR_EQ = 71,
  anon_sym_SLASH_EQ = 72,
  anon_sym_AT_EQ = 73,
  anon_sym_PERCENT_EQ = 74,
  anon_sym_STAR_STAR_EQ = 75,
  anon_sym_GT_GT_EQ = 76,
  anon_sym_LT_LT_EQ = 77,
  anon_sym_AMP_EQ = 78,
  anon_sym_CARET_EQ = 79,
  anon_sym_PIPE_EQ = 80,
  anon_sym_LBRACE = 81,
  anon_sym_RBRACE = 82,
  sym__not_escape_sequence = 83,
  sym_integer = 84,
  sym_float = 85,
  sym_const_identifier = 86,
  anon_sym_print = 87,
  anon_sym_exec = 88,
  sym_true = 89,
  sym_false = 90,
  sym_nil = 91,
  sym_comment = 92,
  sym_doc_comment = 93,
  sym_line_continuation = 94,
  sym__newline = 95,
  sym__indent = 96,
  sym__dedent = 97,
  sym_string_start = 98,
  sym__string_content = 99,
  sym_escape_interpolation = 100,
  sym_string_end = 101,
  sym_source = 102,
  sym_module = 103,
  sym_import = 104,
  sym_url = 105,
  sym_const = 106,
  sym_generic_list = 107,
  sym_generic_type2 = 108,
  sym_type2 = 109,
  sym_record = 110,
  sym_record_field = 111,
  sym_trait = 112,
  sym_trait_field = 113,
  sym_param = 114,
  sym_enum = 115,
  sym_enum_field = 116,
  sym_fn = 117,
  sym_decorator = 118,
  sym_body = 119,
  sym_test = 120,
  sym__statement = 121,
  sym_assignment_statement = 122,
  sym_named_expression = 123,
  sym__named_expression_lhs = 124,
  sym_pass_statement = 125,
  sym_reference = 126,
  sym_range_value = 127,
  sym_for_statement = 128,
  sym_argument_list = 129,
  sym_keyword_argument = 130,
  sym_pair_argument = 131,
  sym_as_pattern = 132,
  sym_expression = 133,
  sym_primary_expression = 134,
  sym_not_operator = 135,
  sym_boolean_operator = 136,
  sym_binary_operator = 137,
  sym_unary_operator = 138,
  sym_comparison_operator = 139,
  sym_lambda = 140,
  sym_attribute = 141,
  sym_call = 142,
  sym_conditional_expression = 143,
  sym_string = 144,
  sym__extension = 145,
  aux_sym_source_repeat1 = 146,
  aux_sym_source_repeat2 = 147,
  aux_sym_source_repeat3 = 148,
  aux_sym_url_repeat1 = 149,
  aux_sym_generic_list_repeat1 = 150,
  aux_sym_generic_type2_repeat1 = 151,
  aux_sym_record_repeat1 = 152,
  aux_sym_trait_repeat1 = 153,
  aux_sym_trait_field_repeat1 = 154,
  aux_sym_trait_field_repeat2 = 155,
  aux_sym_enum_repeat1 = 156,
  aux_sym_enum_field_repeat1 = 157,
  aux_sym_body_repeat1 = 158,
  aux_sym_argument_list_repeat1 = 159,
  aux_sym_comparison_operator_repeat1 = 160,
  aux_sym_string_repeat1 = 161,
  alias_sym_as_pattern_target = 162,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_module] = "module",
  [anon_sym_import] = "import",
  [aux_sym_url_token1] = "url_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_AMP] = "&",
  [anon_sym_QMARK] = "\?",
  [anon_sym_record] = "record",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_trait] = "trait",
  [anon_sym_fn] = "fn",
  [anon_sym_enum] = "enum",
  [anon_sym_PIPE] = "|",
  [anon_sym_POUND] = "#",
  [anon_sym_test] = "test",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_assert] = "assert",
  [anon_sym_return] = "return",
  [anon_sym_raise] = "raise",
  [anon_sym_from] = "from",
  [anon_sym_pass] = "pass",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_match] = "match",
  [anon_sym_case] = "case",
  [anon_sym_DOT] = ".",
  [anon_sym_for] = "for",
  [anon_sym_range] = "range",
  [anon_sym_while] = "while",
  [anon_sym_try] = "try",
  [anon_sym_except] = "except",
  [anon_sym_as] = "as",
  [anon_sym_except_STAR] = "except*",
  [anon_sym_finally] = "finally",
  [anon_sym_global] = "global",
  [anon_sym_nonlocal] = "nonlocal",
  [anon_sym_type] = "type",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DASH] = "-",
  [anon_sym__] = "_",
  [anon_sym_PLUS] = "+",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_STAR] = "*",
  [anon_sym_AT] = "@",
  [anon_sym_PERCENT] = "%",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_CARET] = "^",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_AT_EQ] = "@=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_STAR_STAR_EQ] = "**=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__not_escape_sequence] = "_not_escape_sequence",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_const_identifier] = "const_identifier",
  [anon_sym_print] = "identifier",
  [anon_sym_exec] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_nil] = "nil",
  [sym_comment] = "comment",
  [sym_doc_comment] = "doc_comment",
  [sym_line_continuation] = "line_continuation",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_string_start] = "string_start",
  [sym__string_content] = "_string_content",
  [sym_escape_interpolation] = "escape_interpolation",
  [sym_string_end] = "string_end",
  [sym_source] = "source",
  [sym_module] = "module",
  [sym_import] = "import",
  [sym_url] = "url",
  [sym_const] = "const",
  [sym_generic_list] = "generic_list",
  [sym_generic_type2] = "generic_type2",
  [sym_type2] = "type2",
  [sym_record] = "record",
  [sym_record_field] = "record_field",
  [sym_trait] = "trait",
  [sym_trait_field] = "trait_field",
  [sym_param] = "param",
  [sym_enum] = "enum",
  [sym_enum_field] = "enum_field",
  [sym_fn] = "fn",
  [sym_decorator] = "decorator",
  [sym_body] = "body",
  [sym_test] = "test",
  [sym__statement] = "_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_named_expression] = "named_expression",
  [sym__named_expression_lhs] = "_named_expression_lhs",
  [sym_pass_statement] = "pass_statement",
  [sym_reference] = "reference",
  [sym_range_value] = "range_value",
  [sym_for_statement] = "for_statement",
  [sym_argument_list] = "argument_list",
  [sym_keyword_argument] = "keyword_argument",
  [sym_pair_argument] = "pair_argument",
  [sym_as_pattern] = "as_pattern",
  [sym_expression] = "expression",
  [sym_primary_expression] = "primary_expression",
  [sym_not_operator] = "not_operator",
  [sym_boolean_operator] = "boolean_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_lambda] = "lambda",
  [sym_attribute] = "attribute",
  [sym_call] = "call",
  [sym_conditional_expression] = "conditional_expression",
  [sym_string] = "string",
  [sym__extension] = "_extension",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
  [aux_sym_source_repeat3] = "source_repeat3",
  [aux_sym_url_repeat1] = "url_repeat1",
  [aux_sym_generic_list_repeat1] = "generic_list_repeat1",
  [aux_sym_generic_type2_repeat1] = "generic_type2_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
  [aux_sym_trait_repeat1] = "trait_repeat1",
  [aux_sym_trait_field_repeat1] = "trait_field_repeat1",
  [aux_sym_trait_field_repeat2] = "trait_field_repeat2",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_enum_field_repeat1] = "enum_field_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_comparison_operator_repeat1] = "comparison_operator_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_as_pattern_target] = "as_pattern_target",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_import] = anon_sym_import,
  [aux_sym_url_token1] = aux_sym_url_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_trait] = anon_sym_trait,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_raise] = anon_sym_raise,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_pass] = anon_sym_pass,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_except_STAR] = anon_sym_except_STAR,
  [anon_sym_finally] = anon_sym_finally,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_nonlocal] = anon_sym_nonlocal,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_AT_EQ] = anon_sym_AT_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_STAR_STAR_EQ] = anon_sym_STAR_STAR_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__not_escape_sequence] = sym__not_escape_sequence,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_const_identifier] = sym_const_identifier,
  [anon_sym_print] = sym_identifier,
  [anon_sym_exec] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_nil] = sym_nil,
  [sym_comment] = sym_comment,
  [sym_doc_comment] = sym_doc_comment,
  [sym_line_continuation] = sym_line_continuation,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_string_start] = sym_string_start,
  [sym__string_content] = sym__string_content,
  [sym_escape_interpolation] = sym_escape_interpolation,
  [sym_string_end] = sym_string_end,
  [sym_source] = sym_source,
  [sym_module] = sym_module,
  [sym_import] = sym_import,
  [sym_url] = sym_url,
  [sym_const] = sym_const,
  [sym_generic_list] = sym_generic_list,
  [sym_generic_type2] = sym_generic_type2,
  [sym_type2] = sym_type2,
  [sym_record] = sym_record,
  [sym_record_field] = sym_record_field,
  [sym_trait] = sym_trait,
  [sym_trait_field] = sym_trait_field,
  [sym_param] = sym_param,
  [sym_enum] = sym_enum,
  [sym_enum_field] = sym_enum_field,
  [sym_fn] = sym_fn,
  [sym_decorator] = sym_decorator,
  [sym_body] = sym_body,
  [sym_test] = sym_test,
  [sym__statement] = sym__statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_named_expression] = sym_named_expression,
  [sym__named_expression_lhs] = sym__named_expression_lhs,
  [sym_pass_statement] = sym_pass_statement,
  [sym_reference] = sym_reference,
  [sym_range_value] = sym_range_value,
  [sym_for_statement] = sym_for_statement,
  [sym_argument_list] = sym_argument_list,
  [sym_keyword_argument] = sym_keyword_argument,
  [sym_pair_argument] = sym_pair_argument,
  [sym_as_pattern] = sym_as_pattern,
  [sym_expression] = sym_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_not_operator] = sym_not_operator,
  [sym_boolean_operator] = sym_boolean_operator,
  [sym_binary_operator] = sym_binary_operator,
  [sym_unary_operator] = sym_unary_operator,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_lambda] = sym_lambda,
  [sym_attribute] = sym_attribute,
  [sym_call] = sym_call,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_string] = sym_string,
  [sym__extension] = sym__extension,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
  [aux_sym_source_repeat3] = aux_sym_source_repeat3,
  [aux_sym_url_repeat1] = aux_sym_url_repeat1,
  [aux_sym_generic_list_repeat1] = aux_sym_generic_list_repeat1,
  [aux_sym_generic_type2_repeat1] = aux_sym_generic_type2_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
  [aux_sym_trait_repeat1] = aux_sym_trait_repeat1,
  [aux_sym_trait_field_repeat1] = aux_sym_trait_field_repeat1,
  [aux_sym_trait_field_repeat2] = aux_sym_trait_field_repeat2,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_enum_field_repeat1] = aux_sym_enum_field_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_comparison_operator_repeat1] = aux_sym_comparison_operator_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_as_pattern_target] = alias_sym_as_pattern_target,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_url_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonlocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__not_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_const_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_string_start] = {
    .visible = true,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_string_end] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_list] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_type2] = {
    .visible = true,
    .named = true,
  },
  [sym_type2] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_record_field] = {
    .visible = true,
    .named = true,
  },
  [sym_trait] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_field] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_named_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__named_expression_lhs] = {
    .visible = false,
    .named = true,
  },
  [sym_pass_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_range_value] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_pair_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_as_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_primary_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_not_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__extension] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_type2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trait_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trait_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trait_field_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comparison_operator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_as_pattern_target] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alias = 1,
  field_argument = 2,
  field_arguments = 3,
  field_attribute = 4,
  field_body = 5,
  field_fields = 6,
  field_function = 7,
  field_generics = 8,
  field_left = 9,
  field_name = 10,
  field_object = 11,
  field_operator = 12,
  field_operators = 13,
  field_parameters = 14,
  field_params = 15,
  field_returns = 16,
  field_right = 17,
  field_type = 18,
  field_value = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_attribute] = "attribute",
  [field_body] = "body",
  [field_fields] = "fields",
  [field_function] = "function",
  [field_generics] = "generics",
  [field_left] = "left",
  [field_name] = "name",
  [field_object] = "object",
  [field_operator] = "operator",
  [field_operators] = "operators",
  [field_parameters] = "parameters",
  [field_params] = "params",
  [field_returns] = "returns",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 4},
  [10] = {.index = 18, .length = 4},
  [11] = {.index = 22, .length = 1},
  [12] = {.index = 23, .length = 1},
  [13] = {.index = 24, .length = 3},
  [14] = {.index = 27, .length = 2},
  [15] = {.index = 29, .length = 1},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 2},
  [18] = {.index = 34, .length = 5},
  [19] = {.index = 39, .length = 5},
  [20] = {.index = 44, .length = 2},
  [21] = {.index = 46, .length = 6},
  [22] = {.index = 52, .length = 3},
  [23] = {.index = 55, .length = 3},
  [24] = {.index = 58, .length = 4},
  [25] = {.index = 62, .length = 4},
  [26] = {.index = 66, .length = 2},
  [27] = {.index = 68, .length = 3},
  [28] = {.index = 71, .length = 5},
  [29] = {.index = 76, .length = 5},
  [30] = {.index = 81, .length = 5},
  [31] = {.index = 86, .length = 3},
  [32] = {.index = 89, .length = 4},
  [33] = {.index = 93, .length = 4},
  [34] = {.index = 97, .length = 6},
  [35] = {.index = 103, .length = 6},
  [36] = {.index = 109, .length = 5},
  [37] = {.index = 114, .length = 5},
  [38] = {.index = 119, .length = 5},
  [39] = {.index = 124, .length = 7},
  [40] = {.index = 131, .length = 3},
  [41] = {.index = 134, .length = 6},
  [42] = {.index = 140, .length = 6},
  [43] = {.index = 146, .length = 4},
  [44] = {.index = 150, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
    {field_value, 2},
  [3] =
    {field_fields, 2},
    {field_fields, 3},
    {field_name, 1},
  [6] =
    {field_fields, 3},
    {field_name, 1},
  [8] =
    {field_argument, 1},
    {field_operator, 0},
  [10] =
    {field_argument, 1},
  [11] =
    {field_arguments, 1},
    {field_function, 0},
  [13] =
    {field_operators, 1, .inherited = true},
  [14] =
    {field_fields, 2},
    {field_fields, 3},
    {field_fields, 4},
    {field_name, 1},
  [18] =
    {field_fields, 3},
    {field_fields, 4},
    {field_generics, 2},
    {field_name, 1},
  [22] =
    {field_body, 2},
  [23] =
    {field_alias, 2},
  [24] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [27] =
    {field_attribute, 2},
    {field_object, 0},
  [29] =
    {field_operators, 0},
  [30] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [32] =
    {field_name, 0},
    {field_type, 2},
  [34] =
    {field_fields, 2},
    {field_fields, 3},
    {field_fields, 4},
    {field_fields, 5},
    {field_name, 1},
  [39] =
    {field_fields, 3},
    {field_fields, 4},
    {field_fields, 5},
    {field_generics, 2},
    {field_name, 1},
  [44] =
    {field_body, 3},
    {field_parameters, 1},
  [46] =
    {field_fields, 3},
    {field_fields, 4},
    {field_fields, 5},
    {field_fields, 6},
    {field_generics, 2},
    {field_name, 1},
  [52] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
  [55] =
    {field_body, 4},
    {field_parameters, 1},
    {field_parameters, 2},
  [58] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_returns, 5},
  [62] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
  [66] =
    {field_left, 0},
    {field_right, 2},
  [68] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
  [71] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_returns, 5},
    {field_returns, 6},
  [76] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_returns, 6},
  [81] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
  [86] =
    {field_left, 0},
    {field_left, 1},
    {field_right, 3},
  [89] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_returns, 6},
  [93] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
  [97] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_returns, 6},
    {field_returns, 7},
  [103] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_returns, 7},
  [109] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_returns, 6},
    {field_returns, 7},
  [114] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_returns, 7},
  [119] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_params, 6},
  [124] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_returns, 7},
    {field_returns, 8},
  [131] =
    {field_body, 5},
    {field_left, 1},
    {field_right, 4},
  [134] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_returns, 7},
    {field_returns, 8},
  [140] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_params, 6},
    {field_returns, 8},
  [146] =
    {field_body, 6},
    {field_left, 1},
    {field_left, 2},
    {field_right, 5},
  [150] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_params, 6},
    {field_returns, 8},
    {field_returns, 9},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [12] = {
    [2] = alias_sym_as_pattern_target,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_expression, 2,
    sym_expression,
    alias_sym_as_pattern_target,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 2,
  [6] = 2,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 8,
  [12] = 10,
  [13] = 8,
  [14] = 10,
  [15] = 8,
  [16] = 8,
  [17] = 10,
  [18] = 8,
  [19] = 10,
  [20] = 10,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 21,
  [26] = 26,
  [27] = 21,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 37,
  [41] = 29,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 32,
  [48] = 26,
  [49] = 32,
  [50] = 46,
  [51] = 37,
  [52] = 45,
  [53] = 39,
  [54] = 54,
  [55] = 43,
  [56] = 56,
  [57] = 29,
  [58] = 58,
  [59] = 59,
  [60] = 43,
  [61] = 61,
  [62] = 62,
  [63] = 45,
  [64] = 46,
  [65] = 65,
  [66] = 66,
  [67] = 39,
  [68] = 31,
  [69] = 69,
  [70] = 31,
  [71] = 26,
  [72] = 72,
  [73] = 73,
  [74] = 42,
  [75] = 66,
  [76] = 59,
  [77] = 58,
  [78] = 34,
  [79] = 44,
  [80] = 54,
  [81] = 56,
  [82] = 28,
  [83] = 58,
  [84] = 59,
  [85] = 61,
  [86] = 42,
  [87] = 56,
  [88] = 62,
  [89] = 30,
  [90] = 61,
  [91] = 44,
  [92] = 65,
  [93] = 38,
  [94] = 69,
  [95] = 38,
  [96] = 73,
  [97] = 72,
  [98] = 28,
  [99] = 23,
  [100] = 23,
  [101] = 72,
  [102] = 65,
  [103] = 62,
  [104] = 66,
  [105] = 34,
  [106] = 54,
  [107] = 73,
  [108] = 69,
  [109] = 30,
  [110] = 26,
  [111] = 62,
  [112] = 54,
  [113] = 28,
  [114] = 66,
  [115] = 65,
  [116] = 30,
  [117] = 72,
  [118] = 61,
  [119] = 59,
  [120] = 58,
  [121] = 56,
  [122] = 38,
  [123] = 73,
  [124] = 23,
  [125] = 69,
  [126] = 44,
  [127] = 127,
  [128] = 42,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 26,
  [133] = 133,
  [134] = 69,
  [135] = 44,
  [136] = 54,
  [137] = 56,
  [138] = 58,
  [139] = 59,
  [140] = 61,
  [141] = 62,
  [142] = 38,
  [143] = 143,
  [144] = 23,
  [145] = 30,
  [146] = 65,
  [147] = 66,
  [148] = 28,
  [149] = 42,
  [150] = 73,
  [151] = 72,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 156,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 156,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 164,
  [168] = 165,
  [169] = 162,
  [170] = 160,
  [171] = 171,
  [172] = 159,
  [173] = 158,
  [174] = 160,
  [175] = 166,
  [176] = 165,
  [177] = 164,
  [178] = 163,
  [179] = 162,
  [180] = 160,
  [181] = 156,
  [182] = 166,
  [183] = 158,
  [184] = 159,
  [185] = 163,
  [186] = 162,
  [187] = 163,
  [188] = 164,
  [189] = 160,
  [190] = 190,
  [191] = 165,
  [192] = 192,
  [193] = 158,
  [194] = 159,
  [195] = 156,
  [196] = 159,
  [197] = 158,
  [198] = 162,
  [199] = 165,
  [200] = 164,
  [201] = 163,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 207,
  [211] = 208,
  [212] = 208,
  [213] = 207,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 225,
  [229] = 225,
  [230] = 230,
  [231] = 231,
  [232] = 225,
  [233] = 233,
  [234] = 233,
  [235] = 235,
  [236] = 236,
  [237] = 236,
  [238] = 236,
  [239] = 239,
  [240] = 235,
  [241] = 235,
  [242] = 233,
  [243] = 233,
  [244] = 235,
  [245] = 245,
  [246] = 246,
  [247] = 236,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 259,
  [262] = 262,
  [263] = 259,
  [264] = 259,
  [265] = 265,
  [266] = 259,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 259,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 217,
  [284] = 284,
  [285] = 216,
  [286] = 214,
  [287] = 215,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 218,
  [293] = 293,
  [294] = 219,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 298,
  [300] = 297,
  [301] = 298,
  [302] = 295,
  [303] = 303,
  [304] = 295,
  [305] = 297,
  [306] = 306,
  [307] = 293,
  [308] = 216,
  [309] = 219,
  [310] = 291,
  [311] = 215,
  [312] = 306,
  [313] = 284,
  [314] = 291,
  [315] = 315,
  [316] = 296,
  [317] = 317,
  [318] = 296,
  [319] = 293,
  [320] = 284,
  [321] = 214,
  [322] = 218,
  [323] = 306,
  [324] = 217,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 216,
  [348] = 214,
  [349] = 215,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 350,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 331,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 351,
  [365] = 365,
  [366] = 366,
  [367] = 365,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 330,
  [376] = 376,
  [377] = 353,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 361,
  [383] = 371,
  [384] = 384,
  [385] = 351,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 351,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 365,
  [396] = 361,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 353,
  [402] = 390,
  [403] = 403,
  [404] = 361,
  [405] = 405,
  [406] = 371,
  [407] = 407,
  [408] = 351,
  [409] = 353,
  [410] = 410,
  [411] = 411,
  [412] = 361,
  [413] = 353,
  [414] = 414,
  [415] = 371,
  [416] = 416,
  [417] = 371,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 351,
  [428] = 428,
  [429] = 429,
  [430] = 361,
  [431] = 431,
  [432] = 432,
  [433] = 353,
  [434] = 371,
  [435] = 435,
  [436] = 390,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 444,
  [448] = 448,
  [449] = 449,
  [450] = 444,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 441,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 441,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 457,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 403,
  [483] = 441,
  [484] = 473,
  [485] = 466,
  [486] = 486,
  [487] = 466,
  [488] = 435,
  [489] = 441,
  [490] = 448,
  [491] = 473,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 429,
  [496] = 496,
  [497] = 497,
  [498] = 457,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 508,
  [510] = 510,
  [511] = 511,
  [512] = 508,
  [513] = 513,
  [514] = 514,
  [515] = 504,
  [516] = 507,
  [517] = 517,
  [518] = 518,
  [519] = 72,
  [520] = 520,
  [521] = 73,
  [522] = 522,
  [523] = 523,
  [524] = 69,
  [525] = 54,
  [526] = 23,
  [527] = 44,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 508,
  [532] = 513,
  [533] = 504,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 28,
  [540] = 540,
  [541] = 541,
  [542] = 507,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 508,
  [548] = 504,
  [549] = 549,
  [550] = 504,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 504,
  [558] = 506,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 475,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43520
    ? (c < 4197
      ? (c < 2730
        ? (c < 2036
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= '_' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1749
              ? (c < 1488
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2602
              ? (c < 2544
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2654
                ? (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3253
          ? (c < 2969
            ? (c < 2866
              ? (c < 2809
                ? (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || (c < 2784
                    ? c == 2768
                    : c <= 2785)))
                : (c <= 2809 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))
              : (c <= 2867 || (c < 2929
                ? (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))))
            : (c <= 2970 || (c < 3114
              ? (c < 2990
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3200
                ? (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))))))
          : (c <= 3257 || (c < 3713
            ? (c < 3423
              ? (c < 3342
                ? (c < 3296
                  ? (c < 3293
                    ? c == 3261
                    : c <= 3294)
                  : (c <= 3297 || (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))))
              : (c <= 3425 || (c < 3517
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))))))
            : (c <= 3714 || (c < 3804
              ? (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))
              : (c <= 3807 || (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))))))))))
      : (c <= 4198 || (c < 8144
        ? (c < 6272
          ? (c < 4824
            ? (c < 4696
              ? (c < 4301
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4786
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))
            : (c <= 4880 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))))))))
          : (c <= 6312 || (c < 7357
            ? (c < 6917
              ? (c < 6528
                ? (c < 6400
                  ? (c < 6320
                    ? c == 6314
                    : c <= 6389)
                  : (c <= 6430 || (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)))
                : (c <= 6571 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))))
              : (c <= 6963 || (c < 7168
                ? (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))
            : (c <= 7359 || (c < 8016
              ? (c < 7424
                ? (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))))))
        : (c <= 8147 || (c < 12344
          ? (c < 11264
            ? (c < 8469
              ? (c < 8319
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))
                : (c <= 8319 || (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))
              : (c <= 8469 || (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))))
            : (c <= 11492 || (c < 11688
              ? (c < 11565
                ? (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))
              : (c <= 11694 || (c < 11728
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))))))
          : (c <= 12348 || (c < 42960
            ? (c < 42192
              ? (c < 12593
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43015
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))))
              : (c <= 43259 || (c < 43396
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))))))
    : (c <= 43560 || (c < 70751
      ? (c < 66964
        ? (c < 65008
          ? (c < 43888
            ? (c < 43739
              ? (c < 43697
                ? (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))
            : (c <= 44002 || (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))))))
          : (c <= 65017 || (c < 65616
            ? (c < 65440
              ? (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65437)))))
              : (c <= 65470 || (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))))
            : (c <= 65629 || (c < 66504
              ? (c < 66304
                ? (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69248
          ? (c < 67840
            ? (c < 67584
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))
              : (c <= 67589 || (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))))
            : (c <= 67861 || (c < 68288
              ? (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))
              : (c <= 68295 || (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))))))
          : (c <= 69289 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43642
    ? (c < 3792
      ? (c < 2763
        ? (c < 2112
          ? (c < 1162
            ? (c < 748
              ? (c < 186
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= '0' && c <= '9')
                    : c <= 'z')
                  : (c <= 170 || (c < 183
                    ? c == 181
                    : c <= 183)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)))))
              : (c <= 748 || (c < 902
                ? (c < 886
                  ? (c < 768
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)))
                : (c <= 906 || (c < 931
                  ? (c < 910
                    ? c == 908
                    : c <= 929)
                  : (c <= 1013 || (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)))))))
            : (c <= 1327 || (c < 1568
              ? (c < 1473
                ? (c < 1376
                  ? (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)
                  : (c <= 1416 || (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)))
                : (c <= 1474 || (c < 1488
                  ? (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)
                  : (c <= 1514 || (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)))))
              : (c <= 1641 || (c < 1808
                ? (c < 1759
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)
                  : (c <= 1768 || (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)))
                : (c <= 1866 || (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))))))))
          : (c <= 2139 || (c < 2565
            ? (c < 2482
              ? (c < 2406
                ? (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)))
                : (c <= 2415 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)))
                : (c <= 2525 || (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2561
                    ? c == 2558
                    : c <= 2563)))))))
            : (c <= 2570 || (c < 2649
              ? (c < 2616
                ? (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))
                : (c <= 2617 || (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)))))
              : (c <= 2652 || (c < 2707
                ? (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)))
                : (c <= 2728 || (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)))))))))))
        : (c <= 2765 || (c < 3200
          ? (c < 2969
            ? (c < 2876
              ? (c < 2821
                ? (c < 2790
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2799 || (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)))
                : (c <= 2828 || (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)))))
              : (c <= 2884 || (c < 2918
                ? (c < 2901
                  ? (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)
                  : (c <= 2903 || (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)))
                : (c <= 2927 || (c < 2949
                  ? (c < 2946
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))))))
            : (c <= 2970 || (c < 3072
              ? (c < 3006
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || (c < 3046
                    ? c == 3031
                    : c <= 3055)))))
              : (c <= 3084 || (c < 3146
                ? (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)))
                : (c <= 3149 || (c < 3165
                  ? (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)
                  : (c <= 3165 || (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)))))))))
          : (c <= 3203 || (c < 3461
            ? (c < 3302
              ? (c < 3260
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3268 || (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)))))
              : (c <= 3311 || (c < 3402
                ? (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)))
                : (c <= 3406 || (c < 3430
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)
                  : (c <= 3439 || (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)))))))
            : (c <= 3478 || (c < 3648
              ? (c < 3535
                ? (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)))
                : (c <= 3540 || (c < 3558
                  ? (c < 3544
                    ? c == 3542
                    : c <= 3551)
                  : (c <= 3567 || (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)))))
              : (c <= 3662 || (c < 3749
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)
                  : (c <= 3716 || (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)))
                : (c <= 3749 || (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))))))))))))
      : (c <= 3801 || (c < 8027
        ? (c < 5952
          ? (c < 4698
            ? (c < 3993
              ? (c < 3895
                ? (c < 3864
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3865 || (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)))
                : (c <= 3895 || (c < 3913
                  ? (c < 3902
                    ? c == 3897
                    : c <= 3911)
                  : (c <= 3948 || (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)))))
              : (c <= 4028 || (c < 4301
                ? (c < 4176
                  ? (c < 4096
                    ? c == 4038
                    : c <= 4169)
                  : (c <= 4253 || (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)))))))
            : (c <= 4701 || (c < 4957
              ? (c < 4800
                ? (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)))
                : (c <= 4800 || (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)))))
              : (c <= 4959 || (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)))))))))
          : (c <= 5971 || (c < 6783
            ? (c < 6320
              ? (c < 6108
                ? (c < 6002
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6003 || (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)))
                : (c <= 6109 || (c < 6159
                  ? (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)
                  : (c <= 6169 || (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)))))
              : (c <= 6389 || (c < 6528
                ? (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6459 || (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)))
                : (c <= 6571 || (c < 6656
                  ? (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)
                  : (c <= 6683 || (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)))))))
            : (c <= 6793 || (c < 7296
              ? (c < 6992
                ? (c < 6832
                  ? (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)
                  : (c <= 6845 || (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)))
                : (c <= 7001 || (c < 7168
                  ? (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)
                  : (c <= 7223 || (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)))))
              : (c <= 7304 || (c < 7960
                ? (c < 7376
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7378 || (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)))
                : (c <= 7965 || (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))))))))))
        : (c <= 8027 || (c < 11728
          ? (c < 8469
            ? (c < 8182
              ? (c < 8130
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))))
              : (c <= 8188 || (c < 8400
                ? (c < 8305
                  ? (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)
                  : (c <= 8305 || (c < 8336
                    ? c == 8319
                    : c <= 8348)))
                : (c <= 8412 || (c < 8450
                  ? (c < 8421
                    ? c == 8417
                    : c <= 8432)
                  : (c <= 8450 || (c < 8458
                    ? c == 8455
                    : c <= 8467)))))))
            : (c <= 8469 || (c < 11520
              ? (c < 8508
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || (c < 8490
                    ? c == 8488
                    : c <= 8505)))
                : (c <= 8511 || (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)))))
              : (c <= 11557 || (c < 11680
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || (c < 11647
                    ? c == 11631
                    : c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)))))))))
          : (c <= 11734 || (c < 42775
            ? (c < 12549
              ? (c < 12344
                ? (c < 12293
                  ? (c < 11744
                    ? (c >= 11736 && c <= 11742)
                    : c <= 11775)
                  : (c <= 12295 || (c < 12337
                    ? (c >= 12321 && c <= 12335)
                    : c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c < 12441
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12442)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))))
              : (c <= 12591 || (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42560
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)
                  : (c <= 42607 || (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)))))))
            : (c <= 42783 || (c < 43259
              ? (c < 42994
                ? (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || (c < 42965
                    ? c == 42963
                    : c <= 42969)))
                : (c <= 43047 || (c < 43136
                  ? (c < 43072
                    ? c == 43052
                    : c <= 43123)
                  : (c <= 43205 || (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)))))
              : (c <= 43259 || (c < 43488
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)
                  : (c <= 43388 || (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)))
                : (c <= 43518 || (c < 43600
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43574)
                    : c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43638)))))))))))))))
    : (c <= 43714 || (c < 71472
      ? (c < 67644
        ? (c < 65382
          ? (c < 64318
            ? (c < 44012
              ? (c < 43793
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)
                  : (c <= 43766 || (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)))))
              : (c <= 44013 || (c < 64112
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)
                  : (c <= 55238 || (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64296 || (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)))))))
            : (c <= 64318 || (c < 65101
              ? (c < 64848
                ? (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)))
                : (c <= 64911 || (c < 65024
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65017)
                  : (c <= 65039 || (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)))))
              : (c <= 65103 || (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65313
                  ? (c < 65296
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65305)
                  : (c <= 65338 || (c < 65345
                    ? c == 65343
                    : c <= 65370)))))))))
          : (c <= 65470 || (c < 66560
            ? (c < 65856
              ? (c < 65549
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)))
                : (c <= 65574 || (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)))))
              : (c <= 65908 || (c < 66349
                ? (c < 66208
                  ? (c < 66176
                    ? c == 66045
                    : c <= 66204)
                  : (c <= 66256 || (c < 66304
                    ? c == 66272
                    : c <= 66335)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))))))
            : (c <= 66717 || (c < 66995
              ? (c < 66928
                ? (c < 66776
                  ? (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)
                  : (c <= 66811 || (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))))
              : (c <= 67001 || (c < 67463
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)))
                : (c <= 67504 || (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))))))))))
        : (c <= 67644 || (c < 69968
          ? (c < 68480
            ? (c < 68108
              ? (c < 67840
                ? (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))))
              : (c <= 68115 || (c < 68224
                ? (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || (c < 68192
                    ? c == 68159
                    : c <= 68220)))
                : (c <= 68252 || (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68326)
                  : (c <= 68405 || (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)))))))
            : (c <= 68497 || (c < 69488
              ? (c < 69248
                ? (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c < 68912
                    ? (c >= 68864 && c <= 68903)
                    : c <= 68921)))
                : (c <= 69289 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69291 && c <= 69292)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69456)))))
              : (c <= 69509 || (c < 69826
                ? (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c < 69759
                    ? (c >= 69734 && c <= 69749)
                    : c <= 69818)))
                : (c <= 69826 || (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))))))))
          : (c <= 70003 || (c < 70471
            ? (c < 70287
              ? (c < 70144
                ? (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))
                : (c <= 70161 || (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))))
              : (c <= 70301 || (c < 70415
                ? (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)))
                : (c <= 70416 || (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c < 70459
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)))))))
            : (c <= 70472 || (c < 70864
              ? (c < 70512
                ? (c < 70487
                  ? (c < 70480
                    ? (c >= 70475 && c <= 70477)
                    : c <= 70480)
                  : (c <= 70487 || (c < 70502
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70508)))
                : (c <= 70516 || (c < 70750
                  ? (c < 70736
                    ? (c >= 70656 && c <= 70730)
                    : c <= 70745)
                  : (c <= 70753 || (c < 70855
                    ? (c >= 70784 && c <= 70853)
                    : c <= 70855)))))
              : (c <= 70873 || (c < 71248
                ? (c < 71128
                  ? (c < 71096
                    ? (c >= 71040 && c <= 71093)
                    : c <= 71104)
                  : (c <= 71133 || (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)))
                : (c <= 71257 || (c < 71424
                  ? (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)
                  : (c <= 71450 || (c >= 71453 && c <= 71467)))))))))))))
      : (c <= 71481 || (c < 119973
        ? (c < 82944
          ? (c < 72784
            ? (c < 72096
              ? (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71738)
                  : (c <= 71913 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 72016
                    ? (c >= 71995 && c <= 72003)
                    : c <= 72025)))))
              : (c <= 72103 || (c < 72272
                ? (c < 72163
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72161)
                  : (c <= 72164 || (c < 72263
                    ? (c >= 72192 && c <= 72254)
                    : c <= 72263)))
                : (c <= 72345 || (c < 72704
                  ? (c < 72368
                    ? c == 72349
                    : c <= 72440)
                  : (c <= 72712 || (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72768)))))))
            : (c <= 72793 || (c < 73063
              ? (c < 72971
                ? (c < 72873
                  ? (c < 72850
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72871)
                  : (c <= 72886 || (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)))
                : (c <= 73014 || (c < 73023
                  ? (c < 73020
                    ? c == 73018
                    : c <= 73021)
                  : (c <= 73031 || (c < 73056
                    ? (c >= 73040 && c <= 73049)
                    : c <= 73061)))))
              : (c <= 73064 || (c < 73648
                ? (c < 73107
                  ? (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)
                  : (c <= 73112 || (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)))
                : (c <= 73648 || (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)))))))))
          : (c <= 83526 || (c < 110581
            ? (c < 93053
              ? (c < 92880
                ? (c < 92768
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92777 || (c < 92864
                    ? (c >= 92784 && c <= 92862)
                    : c <= 92873)))
                : (c <= 92909 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))))
              : (c <= 93071 || (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94180 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))))
            : (c <= 110587 || (c < 118576
              ? (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c < 118528
                    ? (c >= 113821 && c <= 113822)
                    : c <= 118573)))))
              : (c <= 118598 || (c < 119362
                ? (c < 119163
                  ? (c < 119149
                    ? (c >= 119141 && c <= 119145)
                    : c <= 119154)
                  : (c <= 119170 || (c < 119210
                    ? (c >= 119173 && c <= 119179)
                    : c <= 119213)))
                : (c <= 119364 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 43642
    ? (c < 3784
      ? (c < 2759
        ? (c < 2048
          ? (c < 1155
            ? (c < 736
              ? (c < 183
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= '0' && c <= '9')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 183 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)))))
              : (c <= 740 || (c < 895
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c < 891
                    ? (c >= 886 && c <= 887)
                    : c <= 893)))
                : (c <= 895 || (c < 910
                  ? (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)))))))
            : (c <= 1159 || (c < 1552
              ? (c < 1471
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)))
                : (c <= 1471 || (c < 1479
                  ? (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)
                  : (c <= 1479 || (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)))))
              : (c <= 1562 || (c < 1791
                ? (c < 1749
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)
                  : (c <= 1756 || (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)))
                : (c <= 1791 || (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || (c < 2045
                    ? c == 2042
                    : c <= 2045)))))))))
          : (c <= 2093 || (c < 2561
            ? (c < 2474
              ? (c < 2275
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)
                  : (c <= 2183 || (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)))
                : (c <= 2403 || (c < 2437
                  ? (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)
                  : (c <= 2444 || (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)))))
              : (c <= 2480 || (c < 2519
                ? (c < 2492
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2500 || (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)))
                : (c <= 2519 || (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))))))
            : (c <= 2563 || (c < 2641
              ? (c < 2613
                ? (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))
                : (c <= 2614 || (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))))
              : (c <= 2641 || (c < 2703
                ? (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)))))))))))
        : (c <= 2761 || (c < 3174
          ? (c < 2962
            ? (c < 2869
              ? (c < 2817
                ? (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)))
                : (c <= 2819 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)))))
              : (c <= 2873 || (c < 2911
                ? (c < 2891
                  ? (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)
                  : (c <= 2893 || (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)))
                : (c <= 2915 || (c < 2946
                  ? (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)
                  : (c <= 2947 || (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)))))))
            : (c <= 2965 || (c < 3046
              ? (c < 2990
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)))
                : (c <= 3001 || (c < 3018
                  ? (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)
                  : (c <= 3021 || (c < 3031
                    ? c == 3024
                    : c <= 3031)))))
              : (c <= 3055 || (c < 3142
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)))
                : (c <= 3144 || (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3168
                    ? c == 3165
                    : c <= 3171)))))))))
          : (c <= 3183 || (c < 3457
            ? (c < 3296
              ? (c < 3253
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)
                  : (c <= 3216 || (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)))
                : (c <= 3257 || (c < 3274
                  ? (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)
                  : (c <= 3277 || (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)))))
              : (c <= 3299 || (c < 3398
                ? (c < 3328
                  ? (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3314)
                  : (c <= 3340 || (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)))
                : (c <= 3400 || (c < 3423
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)
                  : (c <= 3427 || (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)))))))
            : (c <= 3459 || (c < 3585
              ? (c < 3530
                ? (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || (c < 3520
                    ? c == 3517
                    : c <= 3526)))
                : (c <= 3530 || (c < 3544
                  ? (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)
                  : (c <= 3551 || (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)))))
              : (c <= 3642 || (c < 3724
                ? (c < 3713
                  ? (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)
                  : (c <= 3714 || (c < 3718
                    ? c == 3716
                    : c <= 3722)))
                : (c <= 3747 || (c < 3776
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))))))))))
      : (c <= 3789 || (c < 8027
        ? (c < 5919
          ? (c < 4696
            ? (c < 3974
              ? (c < 3893
                ? (c < 3840
                  ? (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)
                  : (c <= 3840 || (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)))
                : (c <= 3893 || (c < 3902
                  ? (c < 3897
                    ? c == 3895
                    : c <= 3897)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)))))
              : (c <= 3991 || (c < 4295
                ? (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)))))))
            : (c <= 4696 || (c < 4888
              ? (c < 4792
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)))
                : (c <= 4798 || (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)))))
              : (c <= 4954 || (c < 5121
                ? (c < 4992
                  ? (c < 4969
                    ? (c >= 4957 && c <= 4959)
                    : c <= 4977)
                  : (c <= 5007 || (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)))))))))
          : (c <= 5940 || (c < 6752
            ? (c < 6272
              ? (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)))))
              : (c <= 6314 || (c < 6512
                ? (c < 6432
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6443 || (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)))))))
            : (c <= 6780 || (c < 7245
              ? (c < 6912
                ? (c < 6823
                  ? (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)
                  : (c <= 6823 || (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)))
                : (c <= 6988 || (c < 7040
                  ? (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)
                  : (c <= 7155 || (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)))))
              : (c <= 7293 || (c < 7424
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)))))))))))
        : (c <= 8027 || (c < 11728
          ? (c < 8469
            ? (c < 8182
              ? (c < 8130
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))))
              : (c <= 8188 || (c < 8400
                ? (c < 8305
                  ? (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)
                  : (c <= 8305 || (c < 8336
                    ? c == 8319
                    : c <= 8348)))
                : (c <= 8412 || (c < 8450
                  ? (c < 8421
                    ? c == 8417
                    : c <= 8432)
                  : (c <= 8450 || (c < 8458
                    ? c == 8455
                    : c <= 8467)))))))
            : (c <= 8469 || (c < 11520
              ? (c < 8508
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || (c < 8490
                    ? c == 8488
                    : c <= 8505)))
                : (c <= 8511 || (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)))))
              : (c <= 11557 || (c < 11680
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || (c < 11647
                    ? c == 11631
                    : c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)))))))))
          : (c <= 11734 || (c < 42775
            ? (c < 12549
              ? (c < 12344
                ? (c < 12293
                  ? (c < 11744
                    ? (c >= 11736 && c <= 11742)
                    : c <= 11775)
                  : (c <= 12295 || (c < 12337
                    ? (c >= 12321 && c <= 12335)
                    : c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c < 12441
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12442)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))))
              : (c <= 12591 || (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42560
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)
                  : (c <= 42607 || (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)))))))
            : (c <= 42783 || (c < 43259
              ? (c < 42994
                ? (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || (c < 42965
                    ? c == 42963
                    : c <= 42969)))
                : (c <= 43047 || (c < 43136
                  ? (c < 43072
                    ? c == 43052
                    : c <= 43123)
                  : (c <= 43205 || (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)))))
              : (c <= 43259 || (c < 43488
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)
                  : (c <= 43388 || (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)))
                : (c <= 43518 || (c < 43600
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43574)
                    : c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43638)))))))))))))))
    : (c <= 43714 || (c < 71472
      ? (c < 67644
        ? (c < 65382
          ? (c < 64318
            ? (c < 44012
              ? (c < 43793
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)
                  : (c <= 43766 || (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)))))
              : (c <= 44013 || (c < 64112
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)
                  : (c <= 55238 || (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64296 || (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)))))))
            : (c <= 64318 || (c < 65101
              ? (c < 64848
                ? (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)))
                : (c <= 64911 || (c < 65024
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65017)
                  : (c <= 65039 || (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)))))
              : (c <= 65103 || (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65313
                  ? (c < 65296
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65305)
                  : (c <= 65338 || (c < 65345
                    ? c == 65343
                    : c <= 65370)))))))))
          : (c <= 65470 || (c < 66560
            ? (c < 65856
              ? (c < 65549
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)))
                : (c <= 65574 || (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)))))
              : (c <= 65908 || (c < 66349
                ? (c < 66208
                  ? (c < 66176
                    ? c == 66045
                    : c <= 66204)
                  : (c <= 66256 || (c < 66304
                    ? c == 66272
                    : c <= 66335)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))))))
            : (c <= 66717 || (c < 66995
              ? (c < 66928
                ? (c < 66776
                  ? (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)
                  : (c <= 66811 || (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))))
              : (c <= 67001 || (c < 67463
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)))
                : (c <= 67504 || (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))))))))))
        : (c <= 67644 || (c < 69968
          ? (c < 68480
            ? (c < 68108
              ? (c < 67840
                ? (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))))
              : (c <= 68115 || (c < 68224
                ? (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || (c < 68192
                    ? c == 68159
                    : c <= 68220)))
                : (c <= 68252 || (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68326)
                  : (c <= 68405 || (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)))))))
            : (c <= 68497 || (c < 69488
              ? (c < 69248
                ? (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c < 68912
                    ? (c >= 68864 && c <= 68903)
                    : c <= 68921)))
                : (c <= 69289 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69291 && c <= 69292)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69456)))))
              : (c <= 69509 || (c < 69826
                ? (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c < 69759
                    ? (c >= 69734 && c <= 69749)
                    : c <= 69818)))
                : (c <= 69826 || (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))))))))
          : (c <= 70003 || (c < 70471
            ? (c < 70287
              ? (c < 70144
                ? (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))
                : (c <= 70161 || (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))))
              : (c <= 70301 || (c < 70415
                ? (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)))
                : (c <= 70416 || (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c < 70459
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)))))))
            : (c <= 70472 || (c < 70864
              ? (c < 70512
                ? (c < 70487
                  ? (c < 70480
                    ? (c >= 70475 && c <= 70477)
                    : c <= 70480)
                  : (c <= 70487 || (c < 70502
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70508)))
                : (c <= 70516 || (c < 70750
                  ? (c < 70736
                    ? (c >= 70656 && c <= 70730)
                    : c <= 70745)
                  : (c <= 70753 || (c < 70855
                    ? (c >= 70784 && c <= 70853)
                    : c <= 70855)))))
              : (c <= 70873 || (c < 71248
                ? (c < 71128
                  ? (c < 71096
                    ? (c >= 71040 && c <= 71093)
                    : c <= 71104)
                  : (c <= 71133 || (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)))
                : (c <= 71257 || (c < 71424
                  ? (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)
                  : (c <= 71450 || (c >= 71453 && c <= 71467)))))))))))))
      : (c <= 71481 || (c < 119973
        ? (c < 82944
          ? (c < 72784
            ? (c < 72096
              ? (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71738)
                  : (c <= 71913 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 72016
                    ? (c >= 71995 && c <= 72003)
                    : c <= 72025)))))
              : (c <= 72103 || (c < 72272
                ? (c < 72163
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72161)
                  : (c <= 72164 || (c < 72263
                    ? (c >= 72192 && c <= 72254)
                    : c <= 72263)))
                : (c <= 72345 || (c < 72704
                  ? (c < 72368
                    ? c == 72349
                    : c <= 72440)
                  : (c <= 72712 || (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72768)))))))
            : (c <= 72793 || (c < 73063
              ? (c < 72971
                ? (c < 72873
                  ? (c < 72850
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72871)
                  : (c <= 72886 || (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)))
                : (c <= 73014 || (c < 73023
                  ? (c < 73020
                    ? c == 73018
                    : c <= 73021)
                  : (c <= 73031 || (c < 73056
                    ? (c >= 73040 && c <= 73049)
                    : c <= 73061)))))
              : (c <= 73064 || (c < 73648
                ? (c < 73107
                  ? (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)
                  : (c <= 73112 || (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)))
                : (c <= 73648 || (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)))))))))
          : (c <= 83526 || (c < 110581
            ? (c < 93053
              ? (c < 92880
                ? (c < 92768
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92777 || (c < 92864
                    ? (c >= 92784 && c <= 92862)
                    : c <= 92873)))
                : (c <= 92909 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))))
              : (c <= 93071 || (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94180 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))))
            : (c <= 110587 || (c < 118576
              ? (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c < 118528
                    ? (c >= 113821 && c <= 113822)
                    : c <= 118573)))))
              : (c <= 118598 || (c < 119362
                ? (c < 119163
                  ? (c < 119149
                    ? (c >= 119141 && c <= 119145)
                    : c <= 119154)
                  : (c <= 119170 || (c < 119210
                    ? (c >= 119173 && c <= 119179)
                    : c <= 119213)))
                : (c <= 119364 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(52)
      if (lookahead == '\r') SKIP(52)
      if (lookahead == '!') ADVANCE(102);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '0') ADVANCE(147);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(145);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead == '^') ADVANCE(115);
      if (lookahead == '`') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '|') ADVANCE(87);
      if (lookahead == '}') ADVANCE(144);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(196);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(103);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(194);
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(116);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(118);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == '|') ADVANCE(104);
      END_STATE();
    case 38:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(196);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 39:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 40:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(41)
      if (lookahead == '\r') SKIP(41)
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(147);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead == '`') ADVANCE(195);
      if (lookahead == '|') ADVANCE(86);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(192);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(42)
      if (lookahead == '\r') SKIP(42)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '@') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead == '^') ADVANCE(114);
      if (lookahead == '|') ADVANCE(88);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(192);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(43)
      if (lookahead == '\r') SKIP(43)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '@') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '^') ADVANCE(114);
      if (lookahead == '|') ADVANCE(88);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(44)
      if (lookahead == '\r') SKIP(44)
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == '&') ADVANCE(72);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == '@') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '^') ADVANCE(114);
      if (lookahead == '|') ADVANCE(86);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(192);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(45)
      if (lookahead == '\r') SKIP(45)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead == '|') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(192);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(46)
      if (lookahead == '\r') SKIP(46)
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(176);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(192);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(47)
      if (lookahead == '\r') SKIP(47)
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 51:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 52:
      if (eof) ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(52)
      if (lookahead == '\r') SKIP(52)
      if (lookahead == '!') ADVANCE(102);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '0') ADVANCE(147);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead == '^') ADVANCE(115);
      if (lookahead == '`') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '|') ADVANCE(87);
      if (lookahead == '}') ADVANCE(144);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(192);
      END_STATE();
    case 53:
      if (eof) ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(53)
      if (lookahead == '\r') SKIP(53)
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '&') ADVANCE(72);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '|') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(54)
      if (lookahead == '\r') SKIP(54)
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == '&') ADVANCE(72);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == '@') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '^') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '|') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(55)
      if (lookahead == '\r') SKIP(55)
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '|') ADVANCE(37);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(192);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_module);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(111);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(194);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(103);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(103);
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_record);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_trait);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_trait);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_enum);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '|') ADVANCE(104);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_test);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_except_STAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(139);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == '>') ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == '>') ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == '>') ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(119);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(118);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_AT_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(196);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'l') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*') ADVANCE(95);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(192);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(192);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(169);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(179);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(77);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(189);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(161);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(181);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(186);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(167);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(180);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(85);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 'x') ADVANCE(162);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(190);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(83);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(165);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(183);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(182);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(178);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(187);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(164);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(188);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(185);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(91);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(81);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(60);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(171);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(173);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_const_identifier);
      if (lookahead == '_') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(85);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_raise);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_nonlocal);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 53, .external_lex_state = 2},
  [2] = {.lex_state = 41, .external_lex_state = 3},
  [3] = {.lex_state = 41, .external_lex_state = 3},
  [4] = {.lex_state = 41, .external_lex_state = 3},
  [5] = {.lex_state = 41, .external_lex_state = 3},
  [6] = {.lex_state = 41, .external_lex_state = 3},
  [7] = {.lex_state = 41, .external_lex_state = 3},
  [8] = {.lex_state = 41, .external_lex_state = 3},
  [9] = {.lex_state = 42, .external_lex_state = 4},
  [10] = {.lex_state = 41, .external_lex_state = 3},
  [11] = {.lex_state = 41, .external_lex_state = 3},
  [12] = {.lex_state = 41, .external_lex_state = 3},
  [13] = {.lex_state = 41, .external_lex_state = 3},
  [14] = {.lex_state = 41, .external_lex_state = 3},
  [15] = {.lex_state = 41, .external_lex_state = 3},
  [16] = {.lex_state = 41, .external_lex_state = 3},
  [17] = {.lex_state = 41, .external_lex_state = 3},
  [18] = {.lex_state = 41, .external_lex_state = 3},
  [19] = {.lex_state = 41, .external_lex_state = 3},
  [20] = {.lex_state = 41, .external_lex_state = 3},
  [21] = {.lex_state = 42, .external_lex_state = 4},
  [22] = {.lex_state = 41, .external_lex_state = 5},
  [23] = {.lex_state = 43, .external_lex_state = 4},
  [24] = {.lex_state = 43, .external_lex_state = 4},
  [25] = {.lex_state = 42, .external_lex_state = 6},
  [26] = {.lex_state = 42, .external_lex_state = 4},
  [27] = {.lex_state = 42, .external_lex_state = 2},
  [28] = {.lex_state = 43, .external_lex_state = 4},
  [29] = {.lex_state = 42, .external_lex_state = 4},
  [30] = {.lex_state = 42, .external_lex_state = 4},
  [31] = {.lex_state = 41, .external_lex_state = 5},
  [32] = {.lex_state = 41, .external_lex_state = 5},
  [33] = {.lex_state = 41, .external_lex_state = 5},
  [34] = {.lex_state = 42, .external_lex_state = 4},
  [35] = {.lex_state = 41, .external_lex_state = 5},
  [36] = {.lex_state = 41, .external_lex_state = 5},
  [37] = {.lex_state = 41, .external_lex_state = 5},
  [38] = {.lex_state = 42, .external_lex_state = 4},
  [39] = {.lex_state = 41, .external_lex_state = 5},
  [40] = {.lex_state = 41, .external_lex_state = 5},
  [41] = {.lex_state = 42, .external_lex_state = 2},
  [42] = {.lex_state = 42, .external_lex_state = 4},
  [43] = {.lex_state = 41, .external_lex_state = 5},
  [44] = {.lex_state = 42, .external_lex_state = 4},
  [45] = {.lex_state = 41, .external_lex_state = 5},
  [46] = {.lex_state = 41, .external_lex_state = 5},
  [47] = {.lex_state = 41, .external_lex_state = 5},
  [48] = {.lex_state = 42, .external_lex_state = 6},
  [49] = {.lex_state = 41, .external_lex_state = 5},
  [50] = {.lex_state = 41, .external_lex_state = 5},
  [51] = {.lex_state = 41, .external_lex_state = 5},
  [52] = {.lex_state = 41, .external_lex_state = 5},
  [53] = {.lex_state = 41, .external_lex_state = 5},
  [54] = {.lex_state = 42, .external_lex_state = 4},
  [55] = {.lex_state = 41, .external_lex_state = 5},
  [56] = {.lex_state = 42, .external_lex_state = 4},
  [57] = {.lex_state = 42, .external_lex_state = 6},
  [58] = {.lex_state = 42, .external_lex_state = 4},
  [59] = {.lex_state = 42, .external_lex_state = 4},
  [60] = {.lex_state = 41, .external_lex_state = 5},
  [61] = {.lex_state = 42, .external_lex_state = 4},
  [62] = {.lex_state = 42, .external_lex_state = 4},
  [63] = {.lex_state = 41, .external_lex_state = 5},
  [64] = {.lex_state = 41, .external_lex_state = 5},
  [65] = {.lex_state = 42, .external_lex_state = 4},
  [66] = {.lex_state = 42, .external_lex_state = 4},
  [67] = {.lex_state = 41, .external_lex_state = 5},
  [68] = {.lex_state = 41, .external_lex_state = 5},
  [69] = {.lex_state = 42, .external_lex_state = 4},
  [70] = {.lex_state = 41, .external_lex_state = 5},
  [71] = {.lex_state = 42, .external_lex_state = 2},
  [72] = {.lex_state = 42, .external_lex_state = 4},
  [73] = {.lex_state = 42, .external_lex_state = 4},
  [74] = {.lex_state = 42, .external_lex_state = 2},
  [75] = {.lex_state = 42, .external_lex_state = 2},
  [76] = {.lex_state = 42, .external_lex_state = 6},
  [77] = {.lex_state = 42, .external_lex_state = 6},
  [78] = {.lex_state = 42, .external_lex_state = 2},
  [79] = {.lex_state = 42, .external_lex_state = 2},
  [80] = {.lex_state = 42, .external_lex_state = 2},
  [81] = {.lex_state = 42, .external_lex_state = 2},
  [82] = {.lex_state = 42, .external_lex_state = 6},
  [83] = {.lex_state = 42, .external_lex_state = 2},
  [84] = {.lex_state = 42, .external_lex_state = 2},
  [85] = {.lex_state = 42, .external_lex_state = 2},
  [86] = {.lex_state = 42, .external_lex_state = 6},
  [87] = {.lex_state = 42, .external_lex_state = 6},
  [88] = {.lex_state = 42, .external_lex_state = 2},
  [89] = {.lex_state = 42, .external_lex_state = 2},
  [90] = {.lex_state = 42, .external_lex_state = 6},
  [91] = {.lex_state = 42, .external_lex_state = 6},
  [92] = {.lex_state = 42, .external_lex_state = 2},
  [93] = {.lex_state = 42, .external_lex_state = 2},
  [94] = {.lex_state = 42, .external_lex_state = 2},
  [95] = {.lex_state = 42, .external_lex_state = 6},
  [96] = {.lex_state = 42, .external_lex_state = 2},
  [97] = {.lex_state = 42, .external_lex_state = 2},
  [98] = {.lex_state = 42, .external_lex_state = 2},
  [99] = {.lex_state = 42, .external_lex_state = 6},
  [100] = {.lex_state = 42, .external_lex_state = 2},
  [101] = {.lex_state = 42, .external_lex_state = 6},
  [102] = {.lex_state = 42, .external_lex_state = 6},
  [103] = {.lex_state = 42, .external_lex_state = 6},
  [104] = {.lex_state = 42, .external_lex_state = 6},
  [105] = {.lex_state = 42, .external_lex_state = 6},
  [106] = {.lex_state = 42, .external_lex_state = 6},
  [107] = {.lex_state = 42, .external_lex_state = 6},
  [108] = {.lex_state = 42, .external_lex_state = 6},
  [109] = {.lex_state = 42, .external_lex_state = 6},
  [110] = {.lex_state = 54, .external_lex_state = 2},
  [111] = {.lex_state = 54, .external_lex_state = 2},
  [112] = {.lex_state = 54, .external_lex_state = 2},
  [113] = {.lex_state = 54, .external_lex_state = 2},
  [114] = {.lex_state = 54, .external_lex_state = 2},
  [115] = {.lex_state = 54, .external_lex_state = 2},
  [116] = {.lex_state = 54, .external_lex_state = 2},
  [117] = {.lex_state = 54, .external_lex_state = 2},
  [118] = {.lex_state = 54, .external_lex_state = 2},
  [119] = {.lex_state = 54, .external_lex_state = 2},
  [120] = {.lex_state = 54, .external_lex_state = 2},
  [121] = {.lex_state = 54, .external_lex_state = 2},
  [122] = {.lex_state = 54, .external_lex_state = 2},
  [123] = {.lex_state = 54, .external_lex_state = 2},
  [124] = {.lex_state = 54, .external_lex_state = 2},
  [125] = {.lex_state = 54, .external_lex_state = 2},
  [126] = {.lex_state = 54, .external_lex_state = 2},
  [127] = {.lex_state = 54, .external_lex_state = 2},
  [128] = {.lex_state = 54, .external_lex_state = 2},
  [129] = {.lex_state = 53, .external_lex_state = 2},
  [130] = {.lex_state = 53, .external_lex_state = 2},
  [131] = {.lex_state = 53, .external_lex_state = 2},
  [132] = {.lex_state = 44, .external_lex_state = 7},
  [133] = {.lex_state = 44, .external_lex_state = 7},
  [134] = {.lex_state = 44, .external_lex_state = 7},
  [135] = {.lex_state = 44, .external_lex_state = 7},
  [136] = {.lex_state = 44, .external_lex_state = 7},
  [137] = {.lex_state = 44, .external_lex_state = 7},
  [138] = {.lex_state = 44, .external_lex_state = 7},
  [139] = {.lex_state = 44, .external_lex_state = 7},
  [140] = {.lex_state = 44, .external_lex_state = 7},
  [141] = {.lex_state = 44, .external_lex_state = 7},
  [142] = {.lex_state = 44, .external_lex_state = 7},
  [143] = {.lex_state = 44, .external_lex_state = 7},
  [144] = {.lex_state = 44, .external_lex_state = 7},
  [145] = {.lex_state = 44, .external_lex_state = 7},
  [146] = {.lex_state = 44, .external_lex_state = 7},
  [147] = {.lex_state = 44, .external_lex_state = 7},
  [148] = {.lex_state = 44, .external_lex_state = 7},
  [149] = {.lex_state = 44, .external_lex_state = 7},
  [150] = {.lex_state = 44, .external_lex_state = 7},
  [151] = {.lex_state = 44, .external_lex_state = 7},
  [152] = {.lex_state = 53, .external_lex_state = 2},
  [153] = {.lex_state = 53, .external_lex_state = 2},
  [154] = {.lex_state = 53, .external_lex_state = 2},
  [155] = {.lex_state = 53, .external_lex_state = 2},
  [156] = {.lex_state = 41, .external_lex_state = 5},
  [157] = {.lex_state = 41, .external_lex_state = 5},
  [158] = {.lex_state = 41, .external_lex_state = 5},
  [159] = {.lex_state = 41, .external_lex_state = 5},
  [160] = {.lex_state = 41, .external_lex_state = 5},
  [161] = {.lex_state = 41, .external_lex_state = 5},
  [162] = {.lex_state = 41, .external_lex_state = 5},
  [163] = {.lex_state = 41, .external_lex_state = 5},
  [164] = {.lex_state = 41, .external_lex_state = 5},
  [165] = {.lex_state = 41, .external_lex_state = 5},
  [166] = {.lex_state = 41, .external_lex_state = 5},
  [167] = {.lex_state = 41, .external_lex_state = 5},
  [168] = {.lex_state = 41, .external_lex_state = 5},
  [169] = {.lex_state = 41, .external_lex_state = 5},
  [170] = {.lex_state = 41, .external_lex_state = 5},
  [171] = {.lex_state = 41, .external_lex_state = 5},
  [172] = {.lex_state = 41, .external_lex_state = 5},
  [173] = {.lex_state = 41, .external_lex_state = 5},
  [174] = {.lex_state = 41, .external_lex_state = 5},
  [175] = {.lex_state = 41, .external_lex_state = 5},
  [176] = {.lex_state = 41, .external_lex_state = 5},
  [177] = {.lex_state = 41, .external_lex_state = 5},
  [178] = {.lex_state = 41, .external_lex_state = 5},
  [179] = {.lex_state = 41, .external_lex_state = 5},
  [180] = {.lex_state = 41, .external_lex_state = 5},
  [181] = {.lex_state = 41, .external_lex_state = 5},
  [182] = {.lex_state = 41, .external_lex_state = 5},
  [183] = {.lex_state = 41, .external_lex_state = 5},
  [184] = {.lex_state = 41, .external_lex_state = 5},
  [185] = {.lex_state = 41, .external_lex_state = 5},
  [186] = {.lex_state = 41, .external_lex_state = 5},
  [187] = {.lex_state = 41, .external_lex_state = 5},
  [188] = {.lex_state = 41, .external_lex_state = 5},
  [189] = {.lex_state = 41, .external_lex_state = 5},
  [190] = {.lex_state = 41, .external_lex_state = 5},
  [191] = {.lex_state = 41, .external_lex_state = 5},
  [192] = {.lex_state = 41, .external_lex_state = 5},
  [193] = {.lex_state = 41, .external_lex_state = 5},
  [194] = {.lex_state = 41, .external_lex_state = 5},
  [195] = {.lex_state = 41, .external_lex_state = 5},
  [196] = {.lex_state = 41, .external_lex_state = 5},
  [197] = {.lex_state = 41, .external_lex_state = 5},
  [198] = {.lex_state = 41, .external_lex_state = 5},
  [199] = {.lex_state = 41, .external_lex_state = 5},
  [200] = {.lex_state = 41, .external_lex_state = 5},
  [201] = {.lex_state = 41, .external_lex_state = 5},
  [202] = {.lex_state = 53, .external_lex_state = 2},
  [203] = {.lex_state = 53, .external_lex_state = 2},
  [204] = {.lex_state = 53, .external_lex_state = 2},
  [205] = {.lex_state = 53, .external_lex_state = 2},
  [206] = {.lex_state = 53, .external_lex_state = 2},
  [207] = {.lex_state = 45, .external_lex_state = 4},
  [208] = {.lex_state = 45, .external_lex_state = 4},
  [209] = {.lex_state = 53, .external_lex_state = 2},
  [210] = {.lex_state = 45, .external_lex_state = 2},
  [211] = {.lex_state = 45, .external_lex_state = 2},
  [212] = {.lex_state = 45, .external_lex_state = 6},
  [213] = {.lex_state = 45, .external_lex_state = 6},
  [214] = {.lex_state = 55, .external_lex_state = 2},
  [215] = {.lex_state = 55, .external_lex_state = 2},
  [216] = {.lex_state = 55, .external_lex_state = 2},
  [217] = {.lex_state = 55, .external_lex_state = 2},
  [218] = {.lex_state = 55, .external_lex_state = 2},
  [219] = {.lex_state = 55, .external_lex_state = 2},
  [220] = {.lex_state = 53, .external_lex_state = 2},
  [221] = {.lex_state = 53, .external_lex_state = 2},
  [222] = {.lex_state = 53, .external_lex_state = 2},
  [223] = {.lex_state = 53, .external_lex_state = 2},
  [224] = {.lex_state = 53, .external_lex_state = 2},
  [225] = {.lex_state = 41, .external_lex_state = 7},
  [226] = {.lex_state = 53, .external_lex_state = 2},
  [227] = {.lex_state = 53, .external_lex_state = 2},
  [228] = {.lex_state = 41, .external_lex_state = 7},
  [229] = {.lex_state = 41, .external_lex_state = 7},
  [230] = {.lex_state = 53, .external_lex_state = 2},
  [231] = {.lex_state = 53, .external_lex_state = 2},
  [232] = {.lex_state = 41, .external_lex_state = 7},
  [233] = {.lex_state = 41, .external_lex_state = 7},
  [234] = {.lex_state = 41, .external_lex_state = 7},
  [235] = {.lex_state = 41, .external_lex_state = 7},
  [236] = {.lex_state = 41, .external_lex_state = 7},
  [237] = {.lex_state = 41, .external_lex_state = 7},
  [238] = {.lex_state = 41, .external_lex_state = 7},
  [239] = {.lex_state = 53, .external_lex_state = 2},
  [240] = {.lex_state = 41, .external_lex_state = 7},
  [241] = {.lex_state = 41, .external_lex_state = 7},
  [242] = {.lex_state = 41, .external_lex_state = 7},
  [243] = {.lex_state = 41, .external_lex_state = 7},
  [244] = {.lex_state = 41, .external_lex_state = 7},
  [245] = {.lex_state = 41, .external_lex_state = 7},
  [246] = {.lex_state = 53, .external_lex_state = 2},
  [247] = {.lex_state = 41, .external_lex_state = 7},
  [248] = {.lex_state = 53, .external_lex_state = 2},
  [249] = {.lex_state = 53, .external_lex_state = 2},
  [250] = {.lex_state = 53, .external_lex_state = 2},
  [251] = {.lex_state = 53, .external_lex_state = 2},
  [252] = {.lex_state = 53, .external_lex_state = 2},
  [253] = {.lex_state = 53, .external_lex_state = 2},
  [254] = {.lex_state = 53, .external_lex_state = 2},
  [255] = {.lex_state = 53, .external_lex_state = 2},
  [256] = {.lex_state = 53, .external_lex_state = 2},
  [257] = {.lex_state = 53, .external_lex_state = 2},
  [258] = {.lex_state = 53, .external_lex_state = 2},
  [259] = {.lex_state = 45, .external_lex_state = 4},
  [260] = {.lex_state = 53, .external_lex_state = 2},
  [261] = {.lex_state = 45, .external_lex_state = 4},
  [262] = {.lex_state = 53, .external_lex_state = 2},
  [263] = {.lex_state = 45, .external_lex_state = 4},
  [264] = {.lex_state = 45, .external_lex_state = 4},
  [265] = {.lex_state = 53, .external_lex_state = 2},
  [266] = {.lex_state = 45, .external_lex_state = 4},
  [267] = {.lex_state = 53, .external_lex_state = 2},
  [268] = {.lex_state = 53, .external_lex_state = 2},
  [269] = {.lex_state = 53, .external_lex_state = 2},
  [270] = {.lex_state = 53, .external_lex_state = 2},
  [271] = {.lex_state = 53, .external_lex_state = 2},
  [272] = {.lex_state = 53, .external_lex_state = 2},
  [273] = {.lex_state = 53, .external_lex_state = 2},
  [274] = {.lex_state = 53, .external_lex_state = 2},
  [275] = {.lex_state = 45, .external_lex_state = 4},
  [276] = {.lex_state = 53, .external_lex_state = 2},
  [277] = {.lex_state = 53, .external_lex_state = 2},
  [278] = {.lex_state = 53, .external_lex_state = 2},
  [279] = {.lex_state = 53, .external_lex_state = 2},
  [280] = {.lex_state = 53, .external_lex_state = 2},
  [281] = {.lex_state = 53, .external_lex_state = 2},
  [282] = {.lex_state = 53, .external_lex_state = 2},
  [283] = {.lex_state = 45, .external_lex_state = 4},
  [284] = {.lex_state = 45, .external_lex_state = 4},
  [285] = {.lex_state = 45, .external_lex_state = 4},
  [286] = {.lex_state = 45, .external_lex_state = 4},
  [287] = {.lex_state = 45, .external_lex_state = 4},
  [288] = {.lex_state = 45, .external_lex_state = 4},
  [289] = {.lex_state = 45, .external_lex_state = 4},
  [290] = {.lex_state = 45, .external_lex_state = 4},
  [291] = {.lex_state = 45, .external_lex_state = 4},
  [292] = {.lex_state = 45, .external_lex_state = 4},
  [293] = {.lex_state = 45, .external_lex_state = 4},
  [294] = {.lex_state = 45, .external_lex_state = 4},
  [295] = {.lex_state = 45, .external_lex_state = 4},
  [296] = {.lex_state = 45, .external_lex_state = 4},
  [297] = {.lex_state = 45, .external_lex_state = 4},
  [298] = {.lex_state = 45, .external_lex_state = 4},
  [299] = {.lex_state = 45, .external_lex_state = 2},
  [300] = {.lex_state = 45, .external_lex_state = 2},
  [301] = {.lex_state = 45, .external_lex_state = 6},
  [302] = {.lex_state = 45, .external_lex_state = 2},
  [303] = {.lex_state = 45, .external_lex_state = 2},
  [304] = {.lex_state = 45, .external_lex_state = 6},
  [305] = {.lex_state = 45, .external_lex_state = 6},
  [306] = {.lex_state = 45, .external_lex_state = 2},
  [307] = {.lex_state = 45, .external_lex_state = 2},
  [308] = {.lex_state = 45, .external_lex_state = 6},
  [309] = {.lex_state = 45, .external_lex_state = 6},
  [310] = {.lex_state = 45, .external_lex_state = 6},
  [311] = {.lex_state = 45, .external_lex_state = 6},
  [312] = {.lex_state = 45, .external_lex_state = 2},
  [313] = {.lex_state = 45, .external_lex_state = 2},
  [314] = {.lex_state = 45, .external_lex_state = 2},
  [315] = {.lex_state = 45, .external_lex_state = 2},
  [316] = {.lex_state = 45, .external_lex_state = 2},
  [317] = {.lex_state = 45, .external_lex_state = 6},
  [318] = {.lex_state = 45, .external_lex_state = 6},
  [319] = {.lex_state = 45, .external_lex_state = 6},
  [320] = {.lex_state = 45, .external_lex_state = 6},
  [321] = {.lex_state = 45, .external_lex_state = 6},
  [322] = {.lex_state = 45, .external_lex_state = 6},
  [323] = {.lex_state = 45, .external_lex_state = 2},
  [324] = {.lex_state = 45, .external_lex_state = 6},
  [325] = {.lex_state = 53, .external_lex_state = 4},
  [326] = {.lex_state = 46, .external_lex_state = 4},
  [327] = {.lex_state = 41, .external_lex_state = 7},
  [328] = {.lex_state = 53, .external_lex_state = 4},
  [329] = {.lex_state = 41, .external_lex_state = 7},
  [330] = {.lex_state = 53, .external_lex_state = 4},
  [331] = {.lex_state = 53, .external_lex_state = 2},
  [332] = {.lex_state = 46, .external_lex_state = 4},
  [333] = {.lex_state = 53, .external_lex_state = 4},
  [334] = {.lex_state = 53, .external_lex_state = 4},
  [335] = {.lex_state = 41, .external_lex_state = 7},
  [336] = {.lex_state = 53, .external_lex_state = 4},
  [337] = {.lex_state = 53, .external_lex_state = 4},
  [338] = {.lex_state = 53, .external_lex_state = 4},
  [339] = {.lex_state = 53, .external_lex_state = 6},
  [340] = {.lex_state = 53, .external_lex_state = 4},
  [341] = {.lex_state = 53, .external_lex_state = 6},
  [342] = {.lex_state = 46, .external_lex_state = 4},
  [343] = {.lex_state = 53, .external_lex_state = 4},
  [344] = {.lex_state = 53, .external_lex_state = 4},
  [345] = {.lex_state = 53, .external_lex_state = 4},
  [346] = {.lex_state = 53, .external_lex_state = 6},
  [347] = {.lex_state = 41, .external_lex_state = 7},
  [348] = {.lex_state = 41, .external_lex_state = 7},
  [349] = {.lex_state = 41, .external_lex_state = 7},
  [350] = {.lex_state = 53, .external_lex_state = 4},
  [351] = {.lex_state = 53, .external_lex_state = 8},
  [352] = {.lex_state = 53, .external_lex_state = 2},
  [353] = {.lex_state = 53, .external_lex_state = 4},
  [354] = {.lex_state = 53, .external_lex_state = 4},
  [355] = {.lex_state = 53, .external_lex_state = 2},
  [356] = {.lex_state = 53, .external_lex_state = 2},
  [357] = {.lex_state = 53, .external_lex_state = 4},
  [358] = {.lex_state = 53, .external_lex_state = 2},
  [359] = {.lex_state = 53, .external_lex_state = 4},
  [360] = {.lex_state = 53, .external_lex_state = 6},
  [361] = {.lex_state = 53, .external_lex_state = 8},
  [362] = {.lex_state = 53, .external_lex_state = 2},
  [363] = {.lex_state = 53, .external_lex_state = 4},
  [364] = {.lex_state = 53, .external_lex_state = 8},
  [365] = {.lex_state = 53, .external_lex_state = 2},
  [366] = {.lex_state = 41, .external_lex_state = 4},
  [367] = {.lex_state = 53, .external_lex_state = 2},
  [368] = {.lex_state = 53, .external_lex_state = 9},
  [369] = {.lex_state = 53, .external_lex_state = 2},
  [370] = {.lex_state = 53, .external_lex_state = 2},
  [371] = {.lex_state = 53, .external_lex_state = 4},
  [372] = {.lex_state = 41, .external_lex_state = 4},
  [373] = {.lex_state = 53, .external_lex_state = 9},
  [374] = {.lex_state = 53, .external_lex_state = 2},
  [375] = {.lex_state = 53, .external_lex_state = 2},
  [376] = {.lex_state = 53, .external_lex_state = 4},
  [377] = {.lex_state = 53, .external_lex_state = 4},
  [378] = {.lex_state = 53, .external_lex_state = 6},
  [379] = {.lex_state = 53, .external_lex_state = 4},
  [380] = {.lex_state = 41, .external_lex_state = 2},
  [381] = {.lex_state = 53, .external_lex_state = 2},
  [382] = {.lex_state = 53, .external_lex_state = 8},
  [383] = {.lex_state = 53, .external_lex_state = 4},
  [384] = {.lex_state = 53, .external_lex_state = 6},
  [385] = {.lex_state = 53, .external_lex_state = 8},
  [386] = {.lex_state = 41, .external_lex_state = 2},
  [387] = {.lex_state = 53, .external_lex_state = 2},
  [388] = {.lex_state = 53, .external_lex_state = 4},
  [389] = {.lex_state = 53, .external_lex_state = 8},
  [390] = {.lex_state = 53, .external_lex_state = 2},
  [391] = {.lex_state = 53, .external_lex_state = 4},
  [392] = {.lex_state = 53, .external_lex_state = 2},
  [393] = {.lex_state = 53, .external_lex_state = 4},
  [394] = {.lex_state = 53, .external_lex_state = 4},
  [395] = {.lex_state = 53, .external_lex_state = 2},
  [396] = {.lex_state = 53, .external_lex_state = 8},
  [397] = {.lex_state = 53, .external_lex_state = 2},
  [398] = {.lex_state = 41, .external_lex_state = 2},
  [399] = {.lex_state = 41, .external_lex_state = 2},
  [400] = {.lex_state = 53, .external_lex_state = 2},
  [401] = {.lex_state = 53, .external_lex_state = 4},
  [402] = {.lex_state = 53, .external_lex_state = 2},
  [403] = {.lex_state = 53, .external_lex_state = 2},
  [404] = {.lex_state = 53, .external_lex_state = 8},
  [405] = {.lex_state = 53, .external_lex_state = 4},
  [406] = {.lex_state = 53, .external_lex_state = 4},
  [407] = {.lex_state = 53, .external_lex_state = 8},
  [408] = {.lex_state = 53, .external_lex_state = 8},
  [409] = {.lex_state = 53, .external_lex_state = 4},
  [410] = {.lex_state = 53, .external_lex_state = 2},
  [411] = {.lex_state = 53, .external_lex_state = 4},
  [412] = {.lex_state = 53, .external_lex_state = 8},
  [413] = {.lex_state = 53, .external_lex_state = 4},
  [414] = {.lex_state = 53, .external_lex_state = 2},
  [415] = {.lex_state = 53, .external_lex_state = 4},
  [416] = {.lex_state = 53, .external_lex_state = 2},
  [417] = {.lex_state = 53, .external_lex_state = 4},
  [418] = {.lex_state = 53, .external_lex_state = 4},
  [419] = {.lex_state = 53, .external_lex_state = 2},
  [420] = {.lex_state = 41, .external_lex_state = 2},
  [421] = {.lex_state = 53, .external_lex_state = 4},
  [422] = {.lex_state = 53, .external_lex_state = 4},
  [423] = {.lex_state = 53, .external_lex_state = 4},
  [424] = {.lex_state = 41, .external_lex_state = 2},
  [425] = {.lex_state = 53, .external_lex_state = 2},
  [426] = {.lex_state = 41, .external_lex_state = 4},
  [427] = {.lex_state = 53, .external_lex_state = 8},
  [428] = {.lex_state = 53, .external_lex_state = 2},
  [429] = {.lex_state = 53, .external_lex_state = 4},
  [430] = {.lex_state = 53, .external_lex_state = 8},
  [431] = {.lex_state = 53, .external_lex_state = 6},
  [432] = {.lex_state = 41, .external_lex_state = 6},
  [433] = {.lex_state = 53, .external_lex_state = 4},
  [434] = {.lex_state = 53, .external_lex_state = 4},
  [435] = {.lex_state = 53, .external_lex_state = 4},
  [436] = {.lex_state = 53, .external_lex_state = 2},
  [437] = {.lex_state = 53, .external_lex_state = 9},
  [438] = {.lex_state = 53, .external_lex_state = 9},
  [439] = {.lex_state = 53, .external_lex_state = 2},
  [440] = {.lex_state = 53, .external_lex_state = 9},
  [441] = {.lex_state = 53, .external_lex_state = 2},
  [442] = {.lex_state = 41, .external_lex_state = 2},
  [443] = {.lex_state = 47, .external_lex_state = 2},
  [444] = {.lex_state = 41, .external_lex_state = 2},
  [445] = {.lex_state = 53, .external_lex_state = 9},
  [446] = {.lex_state = 53, .external_lex_state = 9},
  [447] = {.lex_state = 41, .external_lex_state = 2},
  [448] = {.lex_state = 41, .external_lex_state = 2},
  [449] = {.lex_state = 53, .external_lex_state = 9},
  [450] = {.lex_state = 41, .external_lex_state = 2},
  [451] = {.lex_state = 53, .external_lex_state = 9},
  [452] = {.lex_state = 53, .external_lex_state = 9},
  [453] = {.lex_state = 41, .external_lex_state = 2},
  [454] = {.lex_state = 41, .external_lex_state = 2},
  [455] = {.lex_state = 53, .external_lex_state = 9},
  [456] = {.lex_state = 53, .external_lex_state = 9},
  [457] = {.lex_state = 53, .external_lex_state = 9},
  [458] = {.lex_state = 53, .external_lex_state = 9},
  [459] = {.lex_state = 53, .external_lex_state = 9},
  [460] = {.lex_state = 53, .external_lex_state = 9},
  [461] = {.lex_state = 53, .external_lex_state = 9},
  [462] = {.lex_state = 41, .external_lex_state = 2},
  [463] = {.lex_state = 41, .external_lex_state = 2},
  [464] = {.lex_state = 53, .external_lex_state = 2},
  [465] = {.lex_state = 41, .external_lex_state = 2},
  [466] = {.lex_state = 53, .external_lex_state = 9},
  [467] = {.lex_state = 41, .external_lex_state = 2},
  [468] = {.lex_state = 53, .external_lex_state = 9},
  [469] = {.lex_state = 53, .external_lex_state = 9},
  [470] = {.lex_state = 53, .external_lex_state = 2},
  [471] = {.lex_state = 41, .external_lex_state = 2},
  [472] = {.lex_state = 53, .external_lex_state = 4},
  [473] = {.lex_state = 53, .external_lex_state = 9},
  [474] = {.lex_state = 53, .external_lex_state = 5},
  [475] = {.lex_state = 53, .external_lex_state = 9},
  [476] = {.lex_state = 53, .external_lex_state = 6},
  [477] = {.lex_state = 53, .external_lex_state = 9},
  [478] = {.lex_state = 41, .external_lex_state = 2},
  [479] = {.lex_state = 53, .external_lex_state = 9},
  [480] = {.lex_state = 41, .external_lex_state = 2},
  [481] = {.lex_state = 53, .external_lex_state = 4},
  [482] = {.lex_state = 53, .external_lex_state = 4},
  [483] = {.lex_state = 53, .external_lex_state = 2},
  [484] = {.lex_state = 53, .external_lex_state = 9},
  [485] = {.lex_state = 53, .external_lex_state = 9},
  [486] = {.lex_state = 53, .external_lex_state = 4},
  [487] = {.lex_state = 53, .external_lex_state = 9},
  [488] = {.lex_state = 53, .external_lex_state = 2},
  [489] = {.lex_state = 53, .external_lex_state = 2},
  [490] = {.lex_state = 41, .external_lex_state = 2},
  [491] = {.lex_state = 53, .external_lex_state = 9},
  [492] = {.lex_state = 41, .external_lex_state = 2},
  [493] = {.lex_state = 53, .external_lex_state = 9},
  [494] = {.lex_state = 53, .external_lex_state = 4},
  [495] = {.lex_state = 53, .external_lex_state = 2},
  [496] = {.lex_state = 53, .external_lex_state = 4},
  [497] = {.lex_state = 53, .external_lex_state = 9},
  [498] = {.lex_state = 53, .external_lex_state = 9},
  [499] = {.lex_state = 53, .external_lex_state = 2},
  [500] = {.lex_state = 53, .external_lex_state = 2},
  [501] = {.lex_state = 53, .external_lex_state = 9},
  [502] = {.lex_state = 41, .external_lex_state = 2},
  [503] = {.lex_state = 41, .external_lex_state = 2},
  [504] = {.lex_state = 53, .external_lex_state = 4},
  [505] = {.lex_state = 53, .external_lex_state = 2},
  [506] = {.lex_state = 41, .external_lex_state = 2},
  [507] = {.lex_state = 53, .external_lex_state = 2},
  [508] = {.lex_state = 41, .external_lex_state = 2},
  [509] = {.lex_state = 41, .external_lex_state = 2},
  [510] = {.lex_state = 53, .external_lex_state = 2},
  [511] = {.lex_state = 53, .external_lex_state = 2},
  [512] = {.lex_state = 41, .external_lex_state = 2},
  [513] = {.lex_state = 41, .external_lex_state = 2},
  [514] = {.lex_state = 41, .external_lex_state = 2},
  [515] = {.lex_state = 53, .external_lex_state = 4},
  [516] = {.lex_state = 53, .external_lex_state = 2},
  [517] = {.lex_state = 53, .external_lex_state = 2},
  [518] = {.lex_state = 41, .external_lex_state = 2},
  [519] = {.lex_state = 53, .external_lex_state = 9},
  [520] = {.lex_state = 41, .external_lex_state = 2},
  [521] = {.lex_state = 53, .external_lex_state = 9},
  [522] = {.lex_state = 53, .external_lex_state = 2},
  [523] = {.lex_state = 53, .external_lex_state = 2},
  [524] = {.lex_state = 53, .external_lex_state = 9},
  [525] = {.lex_state = 53, .external_lex_state = 9},
  [526] = {.lex_state = 53, .external_lex_state = 4},
  [527] = {.lex_state = 53, .external_lex_state = 9},
  [528] = {.lex_state = 41, .external_lex_state = 2},
  [529] = {.lex_state = 53, .external_lex_state = 10},
  [530] = {.lex_state = 41, .external_lex_state = 2},
  [531] = {.lex_state = 41, .external_lex_state = 2},
  [532] = {.lex_state = 41, .external_lex_state = 2},
  [533] = {.lex_state = 53, .external_lex_state = 4},
  [534] = {.lex_state = 41, .external_lex_state = 2},
  [535] = {.lex_state = 47, .external_lex_state = 2},
  [536] = {.lex_state = 41, .external_lex_state = 2},
  [537] = {.lex_state = 53, .external_lex_state = 2},
  [538] = {.lex_state = 53, .external_lex_state = 2},
  [539] = {.lex_state = 53, .external_lex_state = 4},
  [540] = {.lex_state = 53, .external_lex_state = 2},
  [541] = {.lex_state = 53, .external_lex_state = 2},
  [542] = {.lex_state = 53, .external_lex_state = 2},
  [543] = {.lex_state = 41, .external_lex_state = 2},
  [544] = {.lex_state = 41, .external_lex_state = 2},
  [545] = {.lex_state = 53, .external_lex_state = 2},
  [546] = {.lex_state = 53, .external_lex_state = 2},
  [547] = {.lex_state = 41, .external_lex_state = 2},
  [548] = {.lex_state = 53, .external_lex_state = 4},
  [549] = {.lex_state = 53, .external_lex_state = 2},
  [550] = {.lex_state = 53, .external_lex_state = 4},
  [551] = {.lex_state = 53, .external_lex_state = 2},
  [552] = {.lex_state = 53, .external_lex_state = 2},
  [553] = {.lex_state = 53, .external_lex_state = 2},
  [554] = {.lex_state = 41, .external_lex_state = 2},
  [555] = {.lex_state = 41, .external_lex_state = 2},
  [556] = {.lex_state = 41, .external_lex_state = 2},
  [557] = {.lex_state = 53, .external_lex_state = 4},
  [558] = {.lex_state = 41, .external_lex_state = 2},
  [559] = {.lex_state = 41, .external_lex_state = 2},
  [560] = {.lex_state = 41, .external_lex_state = 2},
  [561] = {.lex_state = 41, .external_lex_state = 2},
  [562] = {.lex_state = 41, .external_lex_state = 2},
  [563] = {.lex_state = 41, .external_lex_state = 2},
  [564] = {.lex_state = 41, .external_lex_state = 2},
  [565] = {.lex_state = 41, .external_lex_state = 2},
  [566] = {.lex_state = 53, .external_lex_state = 2},
  [567] = {.lex_state = 41, .external_lex_state = 2},
  [568] = {.lex_state = 53, .external_lex_state = 9},
  [569] = {.lex_state = 41, .external_lex_state = 2},
  [570] = {.lex_state = 53, .external_lex_state = 4},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token_string_start = 3,
  ts_external_token__string_content = 4,
  ts_external_token_escape_interpolation = 5,
  ts_external_token_string_end = 6,
  ts_external_token_comment = 7,
  ts_external_token_RBRACK = 8,
  ts_external_token_RPAREN = 9,
  ts_external_token_RBRACE = 10,
  ts_external_token_except = 11,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_string_start] = sym_string_start,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token_escape_interpolation] = sym_escape_interpolation,
  [ts_external_token_string_end] = sym_string_end,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_RBRACK] = anon_sym_RBRACK,
  [ts_external_token_RPAREN] = anon_sym_RPAREN,
  [ts_external_token_RBRACE] = anon_sym_RBRACE,
  [ts_external_token_except] = anon_sym_except,
};

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_string_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token_escape_interpolation] = true,
    [ts_external_token_string_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
    [ts_external_token_RPAREN] = true,
    [ts_external_token_RBRACE] = true,
    [ts_external_token_except] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token_string_start] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [4] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [5] = {
    [ts_external_token_string_start] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
  },
  [7] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__string_content] = true,
    [ts_external_token_string_end] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_trait] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_raise] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_pass] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_except_STAR] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_nonlocal] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_AT_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__not_escape_sequence] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_const_identifier] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_doc_comment] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(5),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_string_start] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_escape_interpolation] = ACTIONS(1),
    [sym_string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(541),
    [sym_import] = STATE(131),
    [sym_const] = STATE(155),
    [sym_record] = STATE(209),
    [sym_trait] = STATE(209),
    [sym_enum] = STATE(209),
    [sym_fn] = STATE(209),
    [sym_decorator] = STATE(538),
    [sym_test] = STATE(209),
    [aux_sym_source_repeat1] = STATE(131),
    [aux_sym_source_repeat2] = STATE(155),
    [aux_sym_source_repeat3] = STATE(209),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(13),
    [anon_sym_trait] = ACTIONS(15),
    [anon_sym_fn] = ACTIONS(17),
    [anon_sym_enum] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_test] = ACTIONS(23),
    [sym_const_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(266), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(413), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [70] = 18,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(275), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(377), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [140] = 18,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(263), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(353), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [210] = 18,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(264), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(409), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [280] = 18,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(259), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(433), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [350] = 18,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(261), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(401), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [420] = 17,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [487] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(69), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [536] = 17,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [603] = 17,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [670] = 17,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [737] = 17,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [804] = 17,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [871] = 17,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [938] = 17,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1005] = 17,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1072] = 17,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1139] = 17,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1206] = 17,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1273] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(69), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1319] = 16,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(24), 1,
      sym_string,
    STATE(29), 1,
      sym_primary_expression,
    STATE(289), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(472), 2,
      sym_keyword_argument,
      sym_pair_argument,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 4,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(101), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(105), 1,
      anon_sym_EQ_GT,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1463] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(69), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 18,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1508] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1551] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(69), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 18,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(107), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1635] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_STAR_STAR,
    ACTIONS(127), 1,
      anon_sym_CARET,
    STATE(208), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(123), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(129), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(133), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(113), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1696] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1738] = 14,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BANG,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    STATE(57), 1,
      sym_primary_expression,
    STATE(319), 1,
      sym_expression,
    STATE(441), 1,
      sym_reference,
    STATE(542), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(304), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1796] = 14,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(29), 1,
      sym_primary_expression,
    STATE(298), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1854] = 14,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BANG,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    STATE(57), 1,
      sym_primary_expression,
    STATE(317), 1,
      sym_expression,
    STATE(441), 1,
      sym_reference,
    STATE(542), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(304), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1912] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_STAR_STAR,
    ACTIONS(127), 1,
      anon_sym_CARET,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(123), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(129), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1968] = 14,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(29), 1,
      sym_primary_expression,
    STATE(290), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2026] = 14,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(29), 1,
      sym_primary_expression,
    STATE(288), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2084] = 14,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(29), 1,
      sym_primary_expression,
    STATE(291), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2180] = 14,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    STATE(41), 1,
      sym_primary_expression,
    STATE(306), 1,
      sym_expression,
    STATE(470), 1,
      sym_reference,
    STATE(507), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(302), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2238] = 14,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BANG,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    STATE(57), 1,
      sym_primary_expression,
    STATE(310), 1,
      sym_expression,
    STATE(441), 1,
      sym_reference,
    STATE(542), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(304), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2296] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      anon_sym_STAR_STAR,
    ACTIONS(187), 1,
      anon_sym_CARET,
    STATE(211), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(181), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(183), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(191), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(193), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2356] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_STAR_STAR,
    ACTIONS(195), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2398] = 14,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    STATE(41), 1,
      sym_primary_expression,
    STATE(300), 1,
      sym_expression,
    STATE(470), 1,
      sym_reference,
    STATE(507), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(302), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(199), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2494] = 14,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    STATE(41), 1,
      sym_primary_expression,
    STATE(313), 1,
      sym_expression,
    STATE(470), 1,
      sym_reference,
    STATE(507), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(302), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2552] = 14,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    STATE(41), 1,
      sym_primary_expression,
    STATE(316), 1,
      sym_expression,
    STATE(470), 1,
      sym_reference,
    STATE(507), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(302), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2610] = 14,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    STATE(41), 1,
      sym_primary_expression,
    STATE(299), 1,
      sym_expression,
    STATE(470), 1,
      sym_reference,
    STATE(507), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(302), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2668] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 18,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [2710] = 14,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BANG,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    STATE(57), 1,
      sym_primary_expression,
    STATE(301), 1,
      sym_expression,
    STATE(441), 1,
      sym_reference,
    STATE(542), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(304), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2768] = 14,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BANG,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    STATE(57), 1,
      sym_primary_expression,
    STATE(318), 1,
      sym_expression,
    STATE(441), 1,
      sym_reference,
    STATE(542), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(304), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2826] = 14,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    STATE(41), 1,
      sym_primary_expression,
    STATE(314), 1,
      sym_expression,
    STATE(470), 1,
      sym_reference,
    STATE(507), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(302), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2884] = 14,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BANG,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    STATE(57), 1,
      sym_primary_expression,
    STATE(320), 1,
      sym_expression,
    STATE(441), 1,
      sym_reference,
    STATE(542), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(304), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2942] = 14,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    STATE(41), 1,
      sym_primary_expression,
    STATE(323), 1,
      sym_expression,
    STATE(470), 1,
      sym_reference,
    STATE(507), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(302), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(203), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3038] = 14,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BANG,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    STATE(57), 1,
      sym_primary_expression,
    STATE(305), 1,
      sym_expression,
    STATE(441), 1,
      sym_reference,
    STATE(542), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(304), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3096] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3138] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_STAR_STAR,
    ACTIONS(221), 1,
      anon_sym_CARET,
    STATE(212), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(215), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(225), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(207), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 5,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(227), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3198] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_STAR_STAR,
    ACTIONS(127), 1,
      anon_sym_CARET,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(123), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(129), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(111), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3250] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_STAR_STAR,
    ACTIONS(127), 1,
      anon_sym_CARET,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(123), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(129), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(111), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3304] = 14,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(29), 1,
      sym_primary_expression,
    STATE(297), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(229), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3400] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_STAR_STAR,
    ACTIONS(123), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3446] = 14,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(29), 1,
      sym_primary_expression,
    STATE(284), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3504] = 14,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(29), 1,
      sym_primary_expression,
    STATE(296), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3562] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_STAR_STAR,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(123), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(129), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(111), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3612] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_STAR_STAR,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(123), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(111), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3660] = 14,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    STATE(41), 1,
      sym_primary_expression,
    STATE(312), 1,
      sym_expression,
    STATE(470), 1,
      sym_reference,
    STATE(507), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(302), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3718] = 14,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    STATE(41), 1,
      sym_primary_expression,
    STATE(307), 1,
      sym_expression,
    STATE(470), 1,
      sym_reference,
    STATE(507), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(302), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(233), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3814] = 14,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(29), 1,
      sym_primary_expression,
    STATE(293), 1,
      sym_expression,
    STATE(489), 1,
      sym_reference,
    STATE(516), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
    STATE(295), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3872] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 18,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(237), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(241), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3990] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      anon_sym_STAR_STAR,
    ACTIONS(195), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 17,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4031] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(183), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(173), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 13,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4078] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_STAR_STAR,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(215), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(135), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(207), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 10,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4131] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_STAR_STAR,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(215), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(207), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 10,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4182] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      anon_sym_STAR_STAR,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(183), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(173), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(199), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 19,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(203), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 19,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4311] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 17,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(107), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 19,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4389] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      anon_sym_STAR_STAR,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(181), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(183), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(173), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4440] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      anon_sym_STAR_STAR,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(181), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(183), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(135), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(229), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 19,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_STAR_STAR,
    ACTIONS(195), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 17,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4571] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 17,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4612] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(173), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 15,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4657] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 17,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(229), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 19,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(199), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(201), 19,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4772] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(183), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(173), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 11,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 19,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(233), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 19,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 19,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(241), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 19,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [4969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(237), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 19,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(107), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 19,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(101), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 19,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(101), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 19,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(237), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 19,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5154] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_STAR_STAR,
    ACTIONS(215), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(207), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 11,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5203] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_STAR_STAR,
    ACTIONS(217), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(207), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 15,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5248] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_STAR_STAR,
    ACTIONS(215), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(207), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 13,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5295] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_STAR_STAR,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(207), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 10,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(203), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 19,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(241), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 19,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(233), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 19,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5461] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 17,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [5502] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(67), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(71), 18,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [5540] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_STAR_STAR,
    ACTIONS(249), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 15,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [5579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(203), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(205), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [5612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(107), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [5645] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_STAR_STAR,
    ACTIONS(249), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(253), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 13,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [5686] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_STAR_STAR,
    ACTIONS(249), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(253), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 11,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_CARET,
      sym_const_identifier,
  [5729] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 17,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [5766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(237), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(239), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [5799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(229), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(231), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [5832] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_STAR_STAR,
    ACTIONS(257), 1,
      anon_sym_AMP,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(249), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(253), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 9,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [5879] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_STAR_STAR,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(249), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(253), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 10,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [5924] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 17,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [5961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(67), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(71), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [5994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(241), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(243), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [6027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(101), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(103), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [6060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(233), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(235), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [6093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(199), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(201), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [6126] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_STAR_STAR,
    ACTIONS(257), 1,
      anon_sym_AMP,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(249), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(253), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(261), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [6175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_STAR_STAR,
    ACTIONS(195), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 17,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_const_identifier,
  [6212] = 14,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_record,
    ACTIONS(15), 1,
      anon_sym_trait,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_test,
    ACTIONS(25), 1,
      sym_const_identifier,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(130), 2,
      sym_import,
      aux_sym_source_repeat1,
    STATE(154), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(202), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [6263] = 14,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_record,
    ACTIONS(15), 1,
      anon_sym_trait,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_test,
    ACTIONS(25), 1,
      sym_const_identifier,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(153), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(223), 2,
      sym_import,
      aux_sym_source_repeat1,
    STATE(205), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [6314] = 14,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_record,
    ACTIONS(15), 1,
      anon_sym_trait,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_test,
    ACTIONS(25), 1,
      sym_const_identifier,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(152), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(223), 2,
      sym_import,
      aux_sym_source_repeat1,
    STATE(204), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [6365] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(67), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(71), 11,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6399] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(287), 1,
      anon_sym_CARET,
    ACTIONS(291), 1,
      sym__dedent,
    ACTIONS(281), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(283), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(289), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(271), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
    ACTIONS(273), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
  [6446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(233), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(235), 12,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(199), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(201), 12,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(203), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(205), 12,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6533] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(137), 10,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6566] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(287), 1,
      anon_sym_CARET,
    ACTIONS(281), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(283), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(289), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(135), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
    ACTIONS(137), 3,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(273), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
  [6609] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(287), 1,
      anon_sym_CARET,
    ACTIONS(137), 2,
      sym__dedent,
      anon_sym_PIPE,
    ACTIONS(281), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(283), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(289), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(135), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
    ACTIONS(273), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
  [6654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(229), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(231), 12,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6683] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(283), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(135), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
    ACTIONS(273), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 8,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(67), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(71), 12,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6749] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(287), 1,
      anon_sym_CARET,
    ACTIONS(295), 1,
      sym__dedent,
    ACTIONS(281), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(283), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(289), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(273), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(293), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
  [6796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(101), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(103), 12,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(137), 10,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6858] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(281), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(283), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(289), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(135), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
    ACTIONS(273), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 4,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [6899] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(281), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(283), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(135), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
    ACTIONS(273), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 6,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(107), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(109), 12,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [6967] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR_STAR,
    ACTIONS(195), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(197), 10,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(241), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(243), 12,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(237), 6,
      anon_sym_SLASH,
      anon_sym_pass,
      anon_sym_for,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      sym_identifier,
    ACTIONS(239), 12,
      sym__dedent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [7058] = 12,
    ACTIONS(13), 1,
      anon_sym_record,
    ACTIONS(15), 1,
      anon_sym_trait,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_test,
    ACTIONS(25), 1,
      sym_const_identifier,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(224), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(202), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7102] = 12,
    ACTIONS(13), 1,
      anon_sym_record,
    ACTIONS(15), 1,
      anon_sym_trait,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_test,
    ACTIONS(25), 1,
      sym_const_identifier,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(224), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(206), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7146] = 12,
    ACTIONS(13), 1,
      anon_sym_record,
    ACTIONS(15), 1,
      anon_sym_trait,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_test,
    ACTIONS(25), 1,
      sym_const_identifier,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(224), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(205), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7190] = 12,
    ACTIONS(13), 1,
      anon_sym_record,
    ACTIONS(15), 1,
      anon_sym_trait,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_test,
    ACTIONS(25), 1,
      sym_const_identifier,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(224), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(204), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7234] = 9,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(84), 1,
      sym_primary_expression,
    STATE(470), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7271] = 9,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(59), 1,
      sym_primary_expression,
    STATE(489), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7308] = 9,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_float,
    ACTIONS(311), 1,
      sym_string_start,
    STATE(121), 1,
      sym_primary_expression,
    STATE(483), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(122), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7345] = 9,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_float,
    ACTIONS(311), 1,
      sym_string_start,
    STATE(120), 1,
      sym_primary_expression,
    STATE(483), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(122), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7382] = 9,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_float,
    ACTIONS(321), 1,
      sym_string_start,
    STATE(149), 1,
      sym_primary_expression,
    STATE(464), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(315), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(317), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7419] = 9,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_float,
    ACTIONS(311), 1,
      sym_string_start,
    STATE(119), 1,
      sym_primary_expression,
    STATE(483), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(122), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7456] = 9,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_float,
    ACTIONS(311), 1,
      sym_string_start,
    STATE(111), 1,
      sym_primary_expression,
    STATE(483), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(122), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7493] = 9,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_float,
    ACTIONS(311), 1,
      sym_string_start,
    STATE(116), 1,
      sym_primary_expression,
    STATE(483), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(122), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7530] = 9,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_float,
    ACTIONS(311), 1,
      sym_string_start,
    STATE(115), 1,
      sym_primary_expression,
    STATE(483), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(122), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7567] = 9,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_float,
    ACTIONS(311), 1,
      sym_string_start,
    STATE(114), 1,
      sym_primary_expression,
    STATE(483), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(122), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7604] = 9,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(34), 1,
      sym_primary_expression,
    STATE(489), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7641] = 9,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(92), 1,
      sym_primary_expression,
    STATE(470), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7678] = 9,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(75), 1,
      sym_primary_expression,
    STATE(470), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7715] = 9,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(88), 1,
      sym_primary_expression,
    STATE(470), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7752] = 9,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(74), 1,
      sym_primary_expression,
    STATE(470), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7789] = 9,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_float,
    ACTIONS(321), 1,
      sym_string_start,
    STATE(133), 1,
      sym_primary_expression,
    STATE(464), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(315), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(317), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7826] = 9,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(83), 1,
      sym_primary_expression,
    STATE(470), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7863] = 9,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(81), 1,
      sym_primary_expression,
    STATE(470), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7900] = 9,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(86), 1,
      sym_primary_expression,
    STATE(441), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7937] = 9,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(105), 1,
      sym_primary_expression,
    STATE(441), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [7974] = 9,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(104), 1,
      sym_primary_expression,
    STATE(441), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8011] = 9,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(102), 1,
      sym_primary_expression,
    STATE(441), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8048] = 9,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(109), 1,
      sym_primary_expression,
    STATE(441), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8085] = 9,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(103), 1,
      sym_primary_expression,
    STATE(441), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8122] = 9,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(42), 1,
      sym_primary_expression,
    STATE(489), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8159] = 9,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(76), 1,
      sym_primary_expression,
    STATE(441), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8196] = 9,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(78), 1,
      sym_primary_expression,
    STATE(470), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8233] = 9,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(56), 1,
      sym_primary_expression,
    STATE(489), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8270] = 9,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(58), 1,
      sym_primary_expression,
    STATE(489), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8307] = 9,
    ACTIONS(169), 1,
      sym_float,
    ACTIONS(171), 1,
      sym_string_start,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(89), 1,
      sym_primary_expression,
    STATE(470), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(93), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8344] = 9,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(62), 1,
      sym_primary_expression,
    STATE(489), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8381] = 9,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(30), 1,
      sym_primary_expression,
    STATE(489), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8418] = 9,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(65), 1,
      sym_primary_expression,
    STATE(489), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8455] = 9,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_float,
    ACTIONS(311), 1,
      sym_string_start,
    STATE(128), 1,
      sym_primary_expression,
    STATE(483), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(122), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8492] = 9,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_float,
    ACTIONS(311), 1,
      sym_string_start,
    STATE(127), 1,
      sym_primary_expression,
    STATE(483), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(307), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(122), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8529] = 9,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(66), 1,
      sym_primary_expression,
    STATE(489), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(38), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8566] = 9,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_float,
    ACTIONS(321), 1,
      sym_string_start,
    STATE(143), 1,
      sym_primary_expression,
    STATE(464), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(315), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(317), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8603] = 9,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_float,
    ACTIONS(321), 1,
      sym_string_start,
    STATE(137), 1,
      sym_primary_expression,
    STATE(464), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(315), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(317), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8640] = 9,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_float,
    ACTIONS(321), 1,
      sym_string_start,
    STATE(138), 1,
      sym_primary_expression,
    STATE(464), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(315), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(317), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8677] = 9,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_float,
    ACTIONS(321), 1,
      sym_string_start,
    STATE(139), 1,
      sym_primary_expression,
    STATE(464), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(315), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(317), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8714] = 9,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(77), 1,
      sym_primary_expression,
    STATE(441), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8751] = 9,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(151), 1,
      sym_string_start,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(87), 1,
      sym_primary_expression,
    STATE(441), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(95), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8788] = 9,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_float,
    ACTIONS(321), 1,
      sym_string_start,
    STATE(141), 1,
      sym_primary_expression,
    STATE(464), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(315), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(317), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8825] = 9,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_float,
    ACTIONS(321), 1,
      sym_string_start,
    STATE(147), 1,
      sym_primary_expression,
    STATE(464), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(315), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(317), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8862] = 9,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_float,
    ACTIONS(321), 1,
      sym_string_start,
    STATE(146), 1,
      sym_primary_expression,
    STATE(464), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(315), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(317), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8899] = 9,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_float,
    ACTIONS(321), 1,
      sym_string_start,
    STATE(145), 1,
      sym_primary_expression,
    STATE(464), 1,
      sym_reference,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(315), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(317), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 5,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
  [8936] = 10,
    ACTIONS(13), 1,
      anon_sym_record,
    ACTIONS(15), 1,
      anon_sym_trait,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_test,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(203), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [8973] = 10,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 1,
      anon_sym_record,
    ACTIONS(330), 1,
      anon_sym_trait,
    ACTIONS(333), 1,
      anon_sym_fn,
    ACTIONS(336), 1,
      anon_sym_enum,
    ACTIONS(339), 1,
      anon_sym_POUND,
    ACTIONS(342), 1,
      anon_sym_test,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(203), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [9010] = 10,
    ACTIONS(13), 1,
      anon_sym_record,
    ACTIONS(15), 1,
      anon_sym_trait,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_test,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(203), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [9047] = 10,
    ACTIONS(13), 1,
      anon_sym_record,
    ACTIONS(15), 1,
      anon_sym_trait,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_test,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(203), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [9084] = 10,
    ACTIONS(13), 1,
      anon_sym_record,
    ACTIONS(15), 1,
      anon_sym_trait,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_test,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(203), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [9121] = 5,
    STATE(207), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(347), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9148] = 5,
    STATE(207), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(355), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9175] = 10,
    ACTIONS(13), 1,
      anon_sym_record,
    ACTIONS(15), 1,
      anon_sym_trait,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_test,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    STATE(538), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(203), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [9212] = 5,
    STATE(210), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(357), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(347), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(360), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [9238] = 5,
    STATE(210), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(191), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(355), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9264] = 5,
    STATE(213), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(225), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(355), 5,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9290] = 5,
    STATE(213), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(347), 5,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(366), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [9316] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(369), 12,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9335] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(371), 12,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9354] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(373), 12,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9373] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(375), 12,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9392] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(377), 12,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9411] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(379), 12,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9430] = 4,
    ACTIONS(383), 1,
      anon_sym_SLASH,
    STATE(222), 1,
      aux_sym_url_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(381), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [9452] = 4,
    ACTIONS(383), 1,
      anon_sym_SLASH,
    STATE(220), 1,
      aux_sym_url_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(385), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [9474] = 4,
    ACTIONS(389), 1,
      anon_sym_SLASH,
    STATE(222), 1,
      aux_sym_url_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [9496] = 4,
    ACTIONS(394), 1,
      anon_sym_import,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(223), 2,
      sym_import,
      aux_sym_source_repeat1,
    ACTIONS(392), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [9518] = 4,
    ACTIONS(399), 1,
      sym_const_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(224), 2,
      sym_const,
      aux_sym_source_repeat2,
    ACTIONS(397), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [9539] = 7,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(408), 1,
      sym_doc_comment,
    ACTIONS(410), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(235), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9566] = 4,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(227), 2,
      sym_enum_field,
      aux_sym_enum_repeat1,
    ACTIONS(412), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [9587] = 4,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(231), 2,
      sym_enum_field,
      aux_sym_enum_repeat1,
    ACTIONS(416), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [9608] = 7,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(418), 1,
      sym_doc_comment,
    ACTIONS(420), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(241), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9635] = 7,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(422), 1,
      sym_doc_comment,
    ACTIONS(424), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(244), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9662] = 3,
    ACTIONS(426), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [9681] = 4,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(231), 2,
      sym_enum_field,
      aux_sym_enum_repeat1,
    ACTIONS(428), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [9702] = 7,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(433), 1,
      sym_doc_comment,
    ACTIONS(435), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(240), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9729] = 6,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(437), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(237), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9753] = 6,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(439), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(236), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9777] = 6,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(439), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(245), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9801] = 6,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(441), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(245), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9825] = 6,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(443), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(245), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9849] = 6,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(445), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(245), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9873] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(447), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [9889] = 6,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(437), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(245), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9913] = 6,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(449), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(245), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9937] = 6,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(449), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(238), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9961] = 6,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(451), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(247), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9985] = 6,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(451), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(245), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [10009] = 6,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(456), 1,
      anon_sym_pass,
    ACTIONS(459), 1,
      anon_sym_for,
    ACTIONS(462), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(245), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [10033] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(464), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [10049] = 6,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_pass,
    ACTIONS(406), 1,
      anon_sym_for,
    ACTIONS(466), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(245), 5,
      sym__statement,
      sym_assignment_statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [10073] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(468), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
  [10088] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(470), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
  [10103] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(472), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10117] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(474), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10131] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(476), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10145] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(478), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10159] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(480), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10173] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(482), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10187] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(484), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10201] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(486), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10215] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(488), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10229] = 8,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    ACTIONS(494), 1,
      anon_sym_if,
    ACTIONS(496), 1,
      anon_sym_as,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(500), 1,
      anon_sym_PIPE_PIPE,
    STATE(434), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10255] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(502), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10269] = 8,
    ACTIONS(494), 1,
      anon_sym_if,
    ACTIONS(496), 1,
      anon_sym_as,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(500), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10295] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(508), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10309] = 8,
    ACTIONS(494), 1,
      anon_sym_if,
    ACTIONS(496), 1,
      anon_sym_as,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(500), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10335] = 8,
    ACTIONS(494), 1,
      anon_sym_if,
    ACTIONS(496), 1,
      anon_sym_as,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(500), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10361] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(518), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10375] = 8,
    ACTIONS(494), 1,
      anon_sym_if,
    ACTIONS(496), 1,
      anon_sym_as,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(500), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10401] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(524), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10415] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(526), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10429] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(528), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10443] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(530), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10457] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(532), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10471] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(534), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10485] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(536), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10499] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(538), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10513] = 8,
    ACTIONS(494), 1,
      anon_sym_if,
    ACTIONS(496), 1,
      anon_sym_as,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(500), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10539] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(544), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10553] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(546), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10567] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(548), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10581] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(550), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10595] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(552), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10609] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(554), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10623] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(556), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [10637] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(375), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10650] = 4,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(500), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(558), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
  [10667] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(373), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10680] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(369), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10693] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(371), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10706] = 6,
    ACTIONS(494), 1,
      anon_sym_if,
    ACTIONS(496), 1,
      anon_sym_as,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(500), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(560), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10727] = 6,
    ACTIONS(494), 1,
      anon_sym_if,
    ACTIONS(496), 1,
      anon_sym_as,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(500), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(562), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10748] = 6,
    ACTIONS(494), 1,
      anon_sym_if,
    ACTIONS(496), 1,
      anon_sym_as,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(500), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(564), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10769] = 6,
    ACTIONS(494), 1,
      anon_sym_if,
    ACTIONS(496), 1,
      anon_sym_as,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(500), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(566), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10790] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(377), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10803] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(568), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10816] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(379), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10829] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(113), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10842] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(570), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10855] = 5,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(500), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(574), 1,
      anon_sym_as,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(572), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
  [10874] = 3,
    ACTIONS(498), 1,
      anon_sym_AMP_AMP,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(570), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
  [10889] = 3,
    ACTIONS(577), 1,
      anon_sym_AMP_AMP,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(570), 4,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
  [10903] = 5,
    ACTIONS(577), 1,
      anon_sym_AMP_AMP,
    ACTIONS(579), 1,
      anon_sym_as,
    ACTIONS(582), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(572), 2,
      anon_sym_if,
      anon_sym_else,
  [10921] = 3,
    ACTIONS(584), 1,
      anon_sym_AMP_AMP,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(570), 4,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
  [10935] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(113), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10947] = 6,
    ACTIONS(586), 1,
      sym_identifier,
    ACTIONS(588), 1,
      sym_integer,
    STATE(373), 1,
      sym_reference,
    STATE(458), 1,
      sym_range_value,
    STATE(568), 1,
      sym_call,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10967] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(113), 5,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10979] = 5,
    ACTIONS(584), 1,
      anon_sym_AMP_AMP,
    ACTIONS(590), 1,
      anon_sym_as,
    ACTIONS(593), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(572), 2,
      anon_sym_RBRACK,
      anon_sym_if,
  [10997] = 6,
    ACTIONS(577), 1,
      anon_sym_AMP_AMP,
    ACTIONS(582), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(595), 1,
      anon_sym_if,
    ACTIONS(597), 1,
      anon_sym_else,
    ACTIONS(599), 1,
      anon_sym_as,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11017] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(568), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11029] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(373), 5,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11041] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(379), 5,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11053] = 6,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    ACTIONS(584), 1,
      anon_sym_AMP_AMP,
    ACTIONS(593), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(601), 1,
      anon_sym_if,
    ACTIONS(603), 1,
      anon_sym_as,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11073] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(371), 5,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11085] = 6,
    ACTIONS(577), 1,
      anon_sym_AMP_AMP,
    ACTIONS(582), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(595), 1,
      anon_sym_if,
    ACTIONS(599), 1,
      anon_sym_as,
    ACTIONS(605), 1,
      anon_sym_else,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11105] = 4,
    ACTIONS(577), 1,
      anon_sym_AMP_AMP,
    ACTIONS(582), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(558), 3,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
  [11121] = 6,
    ACTIONS(566), 1,
      anon_sym_else,
    ACTIONS(577), 1,
      anon_sym_AMP_AMP,
    ACTIONS(582), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(595), 1,
      anon_sym_if,
    ACTIONS(599), 1,
      anon_sym_as,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11141] = 6,
    ACTIONS(586), 1,
      sym_identifier,
    ACTIONS(588), 1,
      sym_integer,
    STATE(373), 1,
      sym_reference,
    STATE(445), 1,
      sym_range_value,
    STATE(568), 1,
      sym_call,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11161] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(570), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11173] = 6,
    ACTIONS(584), 1,
      anon_sym_AMP_AMP,
    ACTIONS(593), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(601), 1,
      anon_sym_if,
    ACTIONS(603), 1,
      anon_sym_as,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11193] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(570), 5,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11205] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(568), 5,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11217] = 4,
    ACTIONS(584), 1,
      anon_sym_AMP_AMP,
    ACTIONS(593), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(558), 3,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
  [11233] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(369), 5,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11245] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(377), 5,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11257] = 6,
    ACTIONS(577), 1,
      anon_sym_AMP_AMP,
    ACTIONS(582), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(595), 1,
      anon_sym_if,
    ACTIONS(599), 1,
      anon_sym_as,
    ACTIONS(609), 1,
      anon_sym_else,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11277] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(375), 5,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11289] = 4,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    ACTIONS(613), 1,
      anon_sym_fn,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(344), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [11304] = 5,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    ACTIONS(619), 1,
      anon_sym_fn,
    STATE(337), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11321] = 3,
    ACTIONS(623), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(621), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
  [11334] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(627), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [11349] = 3,
    ACTIONS(631), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(629), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
  [11362] = 4,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(636), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [11377] = 4,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(641), 2,
      anon_sym_PIPE,
      anon_sym_COLON_EQ,
  [11392] = 5,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    ACTIONS(645), 1,
      anon_sym_fn,
    STATE(334), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11409] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(647), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [11424] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(649), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [11439] = 3,
    ACTIONS(653), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(651), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
  [11452] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(655), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [11467] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(657), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [11482] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(659), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [11497] = 4,
    ACTIONS(663), 1,
      anon_sym_AMP,
    STATE(339), 1,
      aux_sym_generic_type2_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(661), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11512] = 4,
    ACTIONS(613), 1,
      anon_sym_fn,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(343), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [11527] = 4,
    ACTIONS(670), 1,
      anon_sym_AMP,
    STATE(346), 1,
      aux_sym_generic_type2_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(668), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11542] = 5,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    ACTIONS(674), 1,
      anon_sym_fn,
    STATE(333), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11559] = 4,
    ACTIONS(613), 1,
      anon_sym_fn,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(345), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [11574] = 4,
    ACTIONS(613), 1,
      anon_sym_fn,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(345), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [11589] = 4,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    ACTIONS(682), 1,
      anon_sym_fn,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(345), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [11604] = 4,
    ACTIONS(670), 1,
      anon_sym_AMP,
    STATE(339), 1,
      aux_sym_generic_type2_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(685), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11619] = 3,
    ACTIONS(373), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(687), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
  [11632] = 3,
    ACTIONS(369), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(689), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
  [11645] = 3,
    ACTIONS(371), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(691), 3,
      anon_sym_pass,
      anon_sym_for,
      sym_identifier,
  [11658] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(693), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
  [11671] = 4,
    ACTIONS(697), 1,
      sym__string_content,
    ACTIONS(699), 1,
      sym_string_end,
    STATE(430), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11685] = 4,
    ACTIONS(701), 1,
      anon_sym_EQ,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11699] = 4,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11713] = 4,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11727] = 3,
    ACTIONS(709), 1,
      anon_sym_QMARK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(693), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [11739] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      anon_sym_EQ,
    STATE(416), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11753] = 4,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_record_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11767] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_EQ,
    STATE(419), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11781] = 4,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11795] = 4,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    ACTIONS(725), 1,
      anon_sym_RBRACK,
    STATE(378), 1,
      aux_sym_generic_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11809] = 4,
    ACTIONS(727), 1,
      sym__string_content,
    ACTIONS(729), 1,
      sym_string_end,
    STATE(407), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11823] = 4,
    ACTIONS(731), 1,
      anon_sym_LBRACK,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    STATE(545), 1,
      sym_generic_list,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11837] = 4,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_record_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11851] = 4,
    ACTIONS(739), 1,
      sym__string_content,
    ACTIONS(741), 1,
      sym_string_end,
    STATE(361), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11865] = 4,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(745), 1,
      anon_sym_PIPE,
    STATE(331), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11879] = 4,
    ACTIONS(747), 1,
      sym_identifier,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      sym_param,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11893] = 4,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_PIPE,
    STATE(331), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11907] = 3,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(75), 2,
      sym__indent,
      anon_sym_LPAREN,
  [11919] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_EQ,
    STATE(425), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11933] = 4,
    ACTIONS(731), 1,
      anon_sym_LBRACK,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
    STATE(552), 1,
      sym_generic_list,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11947] = 4,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11961] = 4,
    ACTIONS(747), 1,
      sym_identifier,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      sym_param,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11975] = 4,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
    ACTIONS(765), 1,
      sym__indent,
    STATE(527), 1,
      sym_argument_list,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11989] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(767), 1,
      anon_sym_EQ,
    STATE(428), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12003] = 4,
    ACTIONS(636), 1,
      anon_sym_EQ,
    ACTIONS(769), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12017] = 4,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_record_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12031] = 4,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12045] = 4,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_RBRACK,
    STATE(378), 1,
      aux_sym_generic_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12059] = 4,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12073] = 4,
    ACTIONS(783), 1,
      sym_identifier,
    ACTIONS(785), 1,
      anon_sym_EQ,
    STATE(369), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12087] = 4,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_COLON_EQ,
    STATE(331), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12101] = 4,
    ACTIONS(727), 1,
      sym__string_content,
    ACTIONS(789), 1,
      sym_string_end,
    STATE(407), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12115] = 4,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12129] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(661), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP,
  [12139] = 4,
    ACTIONS(793), 1,
      sym__string_content,
    ACTIONS(795), 1,
      sym_string_end,
    STATE(382), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12153] = 4,
    ACTIONS(783), 1,
      sym_identifier,
    ACTIONS(797), 1,
      anon_sym_EQ,
    STATE(397), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12167] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(799), 1,
      anon_sym_EQ,
    STATE(352), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12181] = 4,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12195] = 4,
    ACTIONS(806), 1,
      sym__string_content,
    ACTIONS(808), 1,
      sym_string_end,
    STATE(396), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12209] = 4,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(810), 1,
      anon_sym_PIPE,
    STATE(395), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12223] = 4,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12237] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(815), 1,
      anon_sym_EQ,
    STATE(375), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12251] = 4,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12265] = 4,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_record_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12279] = 4,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(821), 1,
      anon_sym_PIPE,
    STATE(331), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12293] = 4,
    ACTIONS(727), 1,
      sym__string_content,
    ACTIONS(823), 1,
      sym_string_end,
    STATE(407), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12307] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      anon_sym_EQ,
    STATE(392), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12321] = 4,
    ACTIONS(783), 1,
      sym_identifier,
    ACTIONS(827), 1,
      anon_sym_EQ,
    STATE(358), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12335] = 4,
    ACTIONS(783), 1,
      sym_identifier,
    ACTIONS(829), 1,
      anon_sym_EQ,
    STATE(374), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12349] = 4,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_COLON_EQ,
    STATE(410), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12363] = 4,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12377] = 4,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      anon_sym_PIPE,
    STATE(365), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12391] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(641), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON_EQ,
  [12401] = 4,
    ACTIONS(727), 1,
      sym__string_content,
    ACTIONS(835), 1,
      sym_string_end,
    STATE(407), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12415] = 4,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12429] = 4,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(839), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12443] = 4,
    ACTIONS(841), 1,
      sym__string_content,
    ACTIONS(844), 1,
      sym_string_end,
    STATE(407), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12457] = 4,
    ACTIONS(846), 1,
      sym__string_content,
    ACTIONS(848), 1,
      sym_string_end,
    STATE(412), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12471] = 4,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12485] = 4,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_COLON_EQ,
    STATE(331), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12499] = 4,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12513] = 4,
    ACTIONS(727), 1,
      sym__string_content,
    ACTIONS(854), 1,
      sym_string_end,
    STATE(407), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12527] = 4,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12541] = 4,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(856), 1,
      anon_sym_COLON_EQ,
    STATE(381), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12555] = 4,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12569] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_EQ,
    STATE(375), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12583] = 4,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12597] = 4,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12611] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      anon_sym_EQ,
    STATE(375), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12625] = 4,
    ACTIONS(783), 1,
      sym_identifier,
    ACTIONS(868), 1,
      anon_sym_EQ,
    STATE(387), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12639] = 4,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    STATE(354), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12653] = 4,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12667] = 4,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      aux_sym_record_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12681] = 4,
    ACTIONS(783), 1,
      sym_identifier,
    ACTIONS(876), 1,
      anon_sym_EQ,
    STATE(356), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12695] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_EQ,
    STATE(375), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12709] = 4,
    ACTIONS(747), 1,
      sym_identifier,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      sym_param,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12723] = 4,
    ACTIONS(882), 1,
      sym__string_content,
    ACTIONS(884), 1,
      sym_string_end,
    STATE(404), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12737] = 4,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      anon_sym_EQ,
    STATE(375), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12751] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(636), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
  [12761] = 4,
    ACTIONS(727), 1,
      sym__string_content,
    ACTIONS(888), 1,
      sym_string_end,
    STATE(407), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12775] = 4,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    ACTIONS(890), 1,
      anon_sym_RBRACK,
    STATE(360), 1,
      aux_sym_generic_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12789] = 3,
    ACTIONS(894), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(892), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12801] = 4,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12815] = 4,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12829] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(898), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
  [12839] = 4,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_PIPE,
    STATE(367), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12853] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(262), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12864] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(272), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12875] = 3,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12886] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(276), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12897] = 3,
    ACTIONS(908), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_argument_list,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12908] = 3,
    ACTIONS(910), 1,
      sym_identifier,
    STATE(129), 1,
      sym_module,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12919] = 3,
    ACTIONS(912), 1,
      aux_sym_url_token1,
    STATE(239), 1,
      sym_url,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12930] = 3,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12941] = 3,
    ACTIONS(918), 1,
      sym__indent,
    STATE(335), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12952] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(265), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12963] = 3,
    ACTIONS(920), 1,
      sym_identifier,
    ACTIONS(922), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12974] = 3,
    ACTIONS(783), 1,
      sym_identifier,
    STATE(495), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12985] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(278), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12996] = 3,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(926), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13007] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(277), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13018] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(280), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13029] = 3,
    ACTIONS(928), 1,
      sym_identifier,
    STATE(510), 1,
      sym__extension,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13040] = 3,
    ACTIONS(930), 1,
      sym_identifier,
    STATE(376), 1,
      sym_record_field,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13051] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(274), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13062] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(273), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13073] = 3,
    ACTIONS(932), 1,
      sym__indent,
    STATE(324), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13084] = 3,
    ACTIONS(918), 1,
      sym__indent,
    STATE(327), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13095] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(271), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13106] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(282), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13117] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(257), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13128] = 3,
    ACTIONS(930), 1,
      sym_identifier,
    STATE(423), 1,
      sym_record_field,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13139] = 3,
    ACTIONS(934), 1,
      sym_identifier,
    STATE(431), 1,
      sym_generic_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13150] = 3,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
      sym_argument_list,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13161] = 3,
    ACTIONS(747), 1,
      sym_identifier,
    STATE(494), 1,
      sym_param,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13172] = 3,
    ACTIONS(932), 1,
      sym__indent,
    STATE(309), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13183] = 3,
    ACTIONS(938), 1,
      sym_identifier,
    STATE(496), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13194] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(281), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13205] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(279), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13216] = 3,
    ACTIONS(940), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_argument_list,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13227] = 3,
    ACTIONS(942), 1,
      sym_identifier,
    STATE(505), 1,
      sym__extension,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13238] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(562), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13247] = 3,
    ACTIONS(932), 1,
      sym__indent,
    STATE(322), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13258] = 3,
    ACTIONS(944), 1,
      sym_string_start,
    STATE(570), 1,
      sym_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13269] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(946), 2,
      sym__indent,
      anon_sym_LPAREN,
  [13278] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(777), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13287] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(217), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13298] = 3,
    ACTIONS(930), 1,
      sym_identifier,
    STATE(486), 1,
      sym_record_field,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13309] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(260), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13320] = 3,
    ACTIONS(938), 1,
      sym_identifier,
    STATE(481), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13331] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(948), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13340] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(641), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13349] = 3,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_argument_list,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13360] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(218), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13371] = 3,
    ACTIONS(952), 1,
      sym__indent,
    STATE(294), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13382] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(716), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13391] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(219), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13402] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(898), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [13411] = 3,
    ACTIONS(954), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_argument_list,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13422] = 3,
    ACTIONS(938), 1,
      sym_identifier,
    STATE(429), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13433] = 3,
    ACTIONS(952), 1,
      sym__indent,
    STATE(292), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13444] = 3,
    ACTIONS(934), 1,
      sym_identifier,
    STATE(476), 1,
      sym_generic_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13455] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(270), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13466] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(804), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13475] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(636), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [13484] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(956), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13493] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(269), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13504] = 3,
    ACTIONS(952), 1,
      sym__indent,
    STATE(283), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13515] = 3,
    ACTIONS(906), 1,
      anon_sym_DOT,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13526] = 3,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    STATE(258), 1,
      sym_lambda,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13537] = 3,
    ACTIONS(902), 1,
      sym__indent,
    STATE(256), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13548] = 2,
    ACTIONS(960), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13556] = 2,
    ACTIONS(962), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13564] = 2,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13572] = 2,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13580] = 2,
    ACTIONS(964), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13588] = 2,
    ACTIONS(966), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13596] = 2,
    ACTIONS(968), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13604] = 2,
    ACTIONS(970), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13612] = 2,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13620] = 2,
    ACTIONS(972), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13628] = 2,
    ACTIONS(974), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13636] = 2,
    ACTIONS(976), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13644] = 2,
    ACTIONS(978), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13652] = 2,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13660] = 2,
    ACTIONS(980), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13668] = 2,
    ACTIONS(982), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13676] = 2,
    ACTIONS(984), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13684] = 2,
    ACTIONS(239), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13692] = 2,
    ACTIONS(986), 1,
      anon_sym_range,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13700] = 2,
    ACTIONS(243), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13708] = 2,
    ACTIONS(988), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13716] = 2,
    ACTIONS(990), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13724] = 2,
    ACTIONS(235), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13732] = 2,
    ACTIONS(205), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13740] = 2,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13748] = 2,
    ACTIONS(201), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13756] = 2,
    ACTIONS(992), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13764] = 2,
    ACTIONS(994), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13772] = 2,
    ACTIONS(996), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13780] = 2,
    ACTIONS(998), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13788] = 2,
    ACTIONS(1000), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13796] = 2,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13804] = 2,
    ACTIONS(1002), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13812] = 2,
    ACTIONS(1004), 1,
      aux_sym_url_token1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13820] = 2,
    ACTIONS(1006), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13828] = 2,
    ACTIONS(1008), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13836] = 2,
    ACTIONS(1010), 1,
      anon_sym_fn,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13844] = 2,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13852] = 2,
    ACTIONS(1012), 1,
      anon_sym_fn,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13860] = 2,
    ACTIONS(1014), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13868] = 2,
    ACTIONS(1016), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13876] = 2,
    ACTIONS(1018), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13884] = 2,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13892] = 2,
    ACTIONS(1022), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13900] = 2,
    ACTIONS(1024), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13908] = 2,
    ACTIONS(1026), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13916] = 2,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13924] = 2,
    ACTIONS(1028), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13932] = 2,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13940] = 2,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13948] = 2,
    ACTIONS(1032), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13956] = 2,
    ACTIONS(1034), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13964] = 2,
    ACTIONS(1036), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13972] = 2,
    ACTIONS(1038), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13980] = 2,
    ACTIONS(1040), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13988] = 2,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [13996] = 2,
    ACTIONS(1042), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [14004] = 2,
    ACTIONS(1044), 1,
      anon_sym_range,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [14012] = 2,
    ACTIONS(1046), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [14020] = 2,
    ACTIONS(1048), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [14028] = 2,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [14036] = 2,
    ACTIONS(1052), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [14044] = 2,
    ACTIONS(1054), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [14052] = 2,
    ACTIONS(1056), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [14060] = 2,
    ACTIONS(946), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [14068] = 2,
    ACTIONS(1058), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [14076] = 2,
    ACTIONS(765), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [14084] = 2,
    ACTIONS(1060), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [14092] = 2,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 350,
  [SMALL_STATE(8)] = 420,
  [SMALL_STATE(9)] = 487,
  [SMALL_STATE(10)] = 536,
  [SMALL_STATE(11)] = 603,
  [SMALL_STATE(12)] = 670,
  [SMALL_STATE(13)] = 737,
  [SMALL_STATE(14)] = 804,
  [SMALL_STATE(15)] = 871,
  [SMALL_STATE(16)] = 938,
  [SMALL_STATE(17)] = 1005,
  [SMALL_STATE(18)] = 1072,
  [SMALL_STATE(19)] = 1139,
  [SMALL_STATE(20)] = 1206,
  [SMALL_STATE(21)] = 1273,
  [SMALL_STATE(22)] = 1319,
  [SMALL_STATE(23)] = 1383,
  [SMALL_STATE(24)] = 1422,
  [SMALL_STATE(25)] = 1463,
  [SMALL_STATE(26)] = 1508,
  [SMALL_STATE(27)] = 1551,
  [SMALL_STATE(28)] = 1596,
  [SMALL_STATE(29)] = 1635,
  [SMALL_STATE(30)] = 1696,
  [SMALL_STATE(31)] = 1738,
  [SMALL_STATE(32)] = 1796,
  [SMALL_STATE(33)] = 1854,
  [SMALL_STATE(34)] = 1912,
  [SMALL_STATE(35)] = 1968,
  [SMALL_STATE(36)] = 2026,
  [SMALL_STATE(37)] = 2084,
  [SMALL_STATE(38)] = 2142,
  [SMALL_STATE(39)] = 2180,
  [SMALL_STATE(40)] = 2238,
  [SMALL_STATE(41)] = 2296,
  [SMALL_STATE(42)] = 2356,
  [SMALL_STATE(43)] = 2398,
  [SMALL_STATE(44)] = 2456,
  [SMALL_STATE(45)] = 2494,
  [SMALL_STATE(46)] = 2552,
  [SMALL_STATE(47)] = 2610,
  [SMALL_STATE(48)] = 2668,
  [SMALL_STATE(49)] = 2710,
  [SMALL_STATE(50)] = 2768,
  [SMALL_STATE(51)] = 2826,
  [SMALL_STATE(52)] = 2884,
  [SMALL_STATE(53)] = 2942,
  [SMALL_STATE(54)] = 3000,
  [SMALL_STATE(55)] = 3038,
  [SMALL_STATE(56)] = 3096,
  [SMALL_STATE(57)] = 3138,
  [SMALL_STATE(58)] = 3198,
  [SMALL_STATE(59)] = 3250,
  [SMALL_STATE(60)] = 3304,
  [SMALL_STATE(61)] = 3362,
  [SMALL_STATE(62)] = 3400,
  [SMALL_STATE(63)] = 3446,
  [SMALL_STATE(64)] = 3504,
  [SMALL_STATE(65)] = 3562,
  [SMALL_STATE(66)] = 3612,
  [SMALL_STATE(67)] = 3660,
  [SMALL_STATE(68)] = 3718,
  [SMALL_STATE(69)] = 3776,
  [SMALL_STATE(70)] = 3814,
  [SMALL_STATE(71)] = 3872,
  [SMALL_STATE(72)] = 3914,
  [SMALL_STATE(73)] = 3952,
  [SMALL_STATE(74)] = 3990,
  [SMALL_STATE(75)] = 4031,
  [SMALL_STATE(76)] = 4078,
  [SMALL_STATE(77)] = 4131,
  [SMALL_STATE(78)] = 4182,
  [SMALL_STATE(79)] = 4237,
  [SMALL_STATE(80)] = 4274,
  [SMALL_STATE(81)] = 4311,
  [SMALL_STATE(82)] = 4352,
  [SMALL_STATE(83)] = 4389,
  [SMALL_STATE(84)] = 4440,
  [SMALL_STATE(85)] = 4493,
  [SMALL_STATE(86)] = 4530,
  [SMALL_STATE(87)] = 4571,
  [SMALL_STATE(88)] = 4612,
  [SMALL_STATE(89)] = 4657,
  [SMALL_STATE(90)] = 4698,
  [SMALL_STATE(91)] = 4735,
  [SMALL_STATE(92)] = 4772,
  [SMALL_STATE(93)] = 4821,
  [SMALL_STATE(94)] = 4858,
  [SMALL_STATE(95)] = 4895,
  [SMALL_STATE(96)] = 4932,
  [SMALL_STATE(97)] = 4969,
  [SMALL_STATE(98)] = 5006,
  [SMALL_STATE(99)] = 5043,
  [SMALL_STATE(100)] = 5080,
  [SMALL_STATE(101)] = 5117,
  [SMALL_STATE(102)] = 5154,
  [SMALL_STATE(103)] = 5203,
  [SMALL_STATE(104)] = 5248,
  [SMALL_STATE(105)] = 5295,
  [SMALL_STATE(106)] = 5350,
  [SMALL_STATE(107)] = 5387,
  [SMALL_STATE(108)] = 5424,
  [SMALL_STATE(109)] = 5461,
  [SMALL_STATE(110)] = 5502,
  [SMALL_STATE(111)] = 5540,
  [SMALL_STATE(112)] = 5579,
  [SMALL_STATE(113)] = 5612,
  [SMALL_STATE(114)] = 5645,
  [SMALL_STATE(115)] = 5686,
  [SMALL_STATE(116)] = 5729,
  [SMALL_STATE(117)] = 5766,
  [SMALL_STATE(118)] = 5799,
  [SMALL_STATE(119)] = 5832,
  [SMALL_STATE(120)] = 5879,
  [SMALL_STATE(121)] = 5924,
  [SMALL_STATE(122)] = 5961,
  [SMALL_STATE(123)] = 5994,
  [SMALL_STATE(124)] = 6027,
  [SMALL_STATE(125)] = 6060,
  [SMALL_STATE(126)] = 6093,
  [SMALL_STATE(127)] = 6126,
  [SMALL_STATE(128)] = 6175,
  [SMALL_STATE(129)] = 6212,
  [SMALL_STATE(130)] = 6263,
  [SMALL_STATE(131)] = 6314,
  [SMALL_STATE(132)] = 6365,
  [SMALL_STATE(133)] = 6399,
  [SMALL_STATE(134)] = 6446,
  [SMALL_STATE(135)] = 6475,
  [SMALL_STATE(136)] = 6504,
  [SMALL_STATE(137)] = 6533,
  [SMALL_STATE(138)] = 6566,
  [SMALL_STATE(139)] = 6609,
  [SMALL_STATE(140)] = 6654,
  [SMALL_STATE(141)] = 6683,
  [SMALL_STATE(142)] = 6720,
  [SMALL_STATE(143)] = 6749,
  [SMALL_STATE(144)] = 6796,
  [SMALL_STATE(145)] = 6825,
  [SMALL_STATE(146)] = 6858,
  [SMALL_STATE(147)] = 6899,
  [SMALL_STATE(148)] = 6938,
  [SMALL_STATE(149)] = 6967,
  [SMALL_STATE(150)] = 7000,
  [SMALL_STATE(151)] = 7029,
  [SMALL_STATE(152)] = 7058,
  [SMALL_STATE(153)] = 7102,
  [SMALL_STATE(154)] = 7146,
  [SMALL_STATE(155)] = 7190,
  [SMALL_STATE(156)] = 7234,
  [SMALL_STATE(157)] = 7271,
  [SMALL_STATE(158)] = 7308,
  [SMALL_STATE(159)] = 7345,
  [SMALL_STATE(160)] = 7382,
  [SMALL_STATE(161)] = 7419,
  [SMALL_STATE(162)] = 7456,
  [SMALL_STATE(163)] = 7493,
  [SMALL_STATE(164)] = 7530,
  [SMALL_STATE(165)] = 7567,
  [SMALL_STATE(166)] = 7604,
  [SMALL_STATE(167)] = 7641,
  [SMALL_STATE(168)] = 7678,
  [SMALL_STATE(169)] = 7715,
  [SMALL_STATE(170)] = 7752,
  [SMALL_STATE(171)] = 7789,
  [SMALL_STATE(172)] = 7826,
  [SMALL_STATE(173)] = 7863,
  [SMALL_STATE(174)] = 7900,
  [SMALL_STATE(175)] = 7937,
  [SMALL_STATE(176)] = 7974,
  [SMALL_STATE(177)] = 8011,
  [SMALL_STATE(178)] = 8048,
  [SMALL_STATE(179)] = 8085,
  [SMALL_STATE(180)] = 8122,
  [SMALL_STATE(181)] = 8159,
  [SMALL_STATE(182)] = 8196,
  [SMALL_STATE(183)] = 8233,
  [SMALL_STATE(184)] = 8270,
  [SMALL_STATE(185)] = 8307,
  [SMALL_STATE(186)] = 8344,
  [SMALL_STATE(187)] = 8381,
  [SMALL_STATE(188)] = 8418,
  [SMALL_STATE(189)] = 8455,
  [SMALL_STATE(190)] = 8492,
  [SMALL_STATE(191)] = 8529,
  [SMALL_STATE(192)] = 8566,
  [SMALL_STATE(193)] = 8603,
  [SMALL_STATE(194)] = 8640,
  [SMALL_STATE(195)] = 8677,
  [SMALL_STATE(196)] = 8714,
  [SMALL_STATE(197)] = 8751,
  [SMALL_STATE(198)] = 8788,
  [SMALL_STATE(199)] = 8825,
  [SMALL_STATE(200)] = 8862,
  [SMALL_STATE(201)] = 8899,
  [SMALL_STATE(202)] = 8936,
  [SMALL_STATE(203)] = 8973,
  [SMALL_STATE(204)] = 9010,
  [SMALL_STATE(205)] = 9047,
  [SMALL_STATE(206)] = 9084,
  [SMALL_STATE(207)] = 9121,
  [SMALL_STATE(208)] = 9148,
  [SMALL_STATE(209)] = 9175,
  [SMALL_STATE(210)] = 9212,
  [SMALL_STATE(211)] = 9238,
  [SMALL_STATE(212)] = 9264,
  [SMALL_STATE(213)] = 9290,
  [SMALL_STATE(214)] = 9316,
  [SMALL_STATE(215)] = 9335,
  [SMALL_STATE(216)] = 9354,
  [SMALL_STATE(217)] = 9373,
  [SMALL_STATE(218)] = 9392,
  [SMALL_STATE(219)] = 9411,
  [SMALL_STATE(220)] = 9430,
  [SMALL_STATE(221)] = 9452,
  [SMALL_STATE(222)] = 9474,
  [SMALL_STATE(223)] = 9496,
  [SMALL_STATE(224)] = 9518,
  [SMALL_STATE(225)] = 9539,
  [SMALL_STATE(226)] = 9566,
  [SMALL_STATE(227)] = 9587,
  [SMALL_STATE(228)] = 9608,
  [SMALL_STATE(229)] = 9635,
  [SMALL_STATE(230)] = 9662,
  [SMALL_STATE(231)] = 9681,
  [SMALL_STATE(232)] = 9702,
  [SMALL_STATE(233)] = 9729,
  [SMALL_STATE(234)] = 9753,
  [SMALL_STATE(235)] = 9777,
  [SMALL_STATE(236)] = 9801,
  [SMALL_STATE(237)] = 9825,
  [SMALL_STATE(238)] = 9849,
  [SMALL_STATE(239)] = 9873,
  [SMALL_STATE(240)] = 9889,
  [SMALL_STATE(241)] = 9913,
  [SMALL_STATE(242)] = 9937,
  [SMALL_STATE(243)] = 9961,
  [SMALL_STATE(244)] = 9985,
  [SMALL_STATE(245)] = 10009,
  [SMALL_STATE(246)] = 10033,
  [SMALL_STATE(247)] = 10049,
  [SMALL_STATE(248)] = 10073,
  [SMALL_STATE(249)] = 10088,
  [SMALL_STATE(250)] = 10103,
  [SMALL_STATE(251)] = 10117,
  [SMALL_STATE(252)] = 10131,
  [SMALL_STATE(253)] = 10145,
  [SMALL_STATE(254)] = 10159,
  [SMALL_STATE(255)] = 10173,
  [SMALL_STATE(256)] = 10187,
  [SMALL_STATE(257)] = 10201,
  [SMALL_STATE(258)] = 10215,
  [SMALL_STATE(259)] = 10229,
  [SMALL_STATE(260)] = 10255,
  [SMALL_STATE(261)] = 10269,
  [SMALL_STATE(262)] = 10295,
  [SMALL_STATE(263)] = 10309,
  [SMALL_STATE(264)] = 10335,
  [SMALL_STATE(265)] = 10361,
  [SMALL_STATE(266)] = 10375,
  [SMALL_STATE(267)] = 10401,
  [SMALL_STATE(268)] = 10415,
  [SMALL_STATE(269)] = 10429,
  [SMALL_STATE(270)] = 10443,
  [SMALL_STATE(271)] = 10457,
  [SMALL_STATE(272)] = 10471,
  [SMALL_STATE(273)] = 10485,
  [SMALL_STATE(274)] = 10499,
  [SMALL_STATE(275)] = 10513,
  [SMALL_STATE(276)] = 10539,
  [SMALL_STATE(277)] = 10553,
  [SMALL_STATE(278)] = 10567,
  [SMALL_STATE(279)] = 10581,
  [SMALL_STATE(280)] = 10595,
  [SMALL_STATE(281)] = 10609,
  [SMALL_STATE(282)] = 10623,
  [SMALL_STATE(283)] = 10637,
  [SMALL_STATE(284)] = 10650,
  [SMALL_STATE(285)] = 10667,
  [SMALL_STATE(286)] = 10680,
  [SMALL_STATE(287)] = 10693,
  [SMALL_STATE(288)] = 10706,
  [SMALL_STATE(289)] = 10727,
  [SMALL_STATE(290)] = 10748,
  [SMALL_STATE(291)] = 10769,
  [SMALL_STATE(292)] = 10790,
  [SMALL_STATE(293)] = 10803,
  [SMALL_STATE(294)] = 10816,
  [SMALL_STATE(295)] = 10829,
  [SMALL_STATE(296)] = 10842,
  [SMALL_STATE(297)] = 10855,
  [SMALL_STATE(298)] = 10874,
  [SMALL_STATE(299)] = 10889,
  [SMALL_STATE(300)] = 10903,
  [SMALL_STATE(301)] = 10921,
  [SMALL_STATE(302)] = 10935,
  [SMALL_STATE(303)] = 10947,
  [SMALL_STATE(304)] = 10967,
  [SMALL_STATE(305)] = 10979,
  [SMALL_STATE(306)] = 10997,
  [SMALL_STATE(307)] = 11017,
  [SMALL_STATE(308)] = 11029,
  [SMALL_STATE(309)] = 11041,
  [SMALL_STATE(310)] = 11053,
  [SMALL_STATE(311)] = 11073,
  [SMALL_STATE(312)] = 11085,
  [SMALL_STATE(313)] = 11105,
  [SMALL_STATE(314)] = 11121,
  [SMALL_STATE(315)] = 11141,
  [SMALL_STATE(316)] = 11161,
  [SMALL_STATE(317)] = 11173,
  [SMALL_STATE(318)] = 11193,
  [SMALL_STATE(319)] = 11205,
  [SMALL_STATE(320)] = 11217,
  [SMALL_STATE(321)] = 11233,
  [SMALL_STATE(322)] = 11245,
  [SMALL_STATE(323)] = 11257,
  [SMALL_STATE(324)] = 11277,
  [SMALL_STATE(325)] = 11289,
  [SMALL_STATE(326)] = 11304,
  [SMALL_STATE(327)] = 11321,
  [SMALL_STATE(328)] = 11334,
  [SMALL_STATE(329)] = 11349,
  [SMALL_STATE(330)] = 11362,
  [SMALL_STATE(331)] = 11377,
  [SMALL_STATE(332)] = 11392,
  [SMALL_STATE(333)] = 11409,
  [SMALL_STATE(334)] = 11424,
  [SMALL_STATE(335)] = 11439,
  [SMALL_STATE(336)] = 11452,
  [SMALL_STATE(337)] = 11467,
  [SMALL_STATE(338)] = 11482,
  [SMALL_STATE(339)] = 11497,
  [SMALL_STATE(340)] = 11512,
  [SMALL_STATE(341)] = 11527,
  [SMALL_STATE(342)] = 11542,
  [SMALL_STATE(343)] = 11559,
  [SMALL_STATE(344)] = 11574,
  [SMALL_STATE(345)] = 11589,
  [SMALL_STATE(346)] = 11604,
  [SMALL_STATE(347)] = 11619,
  [SMALL_STATE(348)] = 11632,
  [SMALL_STATE(349)] = 11645,
  [SMALL_STATE(350)] = 11658,
  [SMALL_STATE(351)] = 11671,
  [SMALL_STATE(352)] = 11685,
  [SMALL_STATE(353)] = 11699,
  [SMALL_STATE(354)] = 11713,
  [SMALL_STATE(355)] = 11727,
  [SMALL_STATE(356)] = 11739,
  [SMALL_STATE(357)] = 11753,
  [SMALL_STATE(358)] = 11767,
  [SMALL_STATE(359)] = 11781,
  [SMALL_STATE(360)] = 11795,
  [SMALL_STATE(361)] = 11809,
  [SMALL_STATE(362)] = 11823,
  [SMALL_STATE(363)] = 11837,
  [SMALL_STATE(364)] = 11851,
  [SMALL_STATE(365)] = 11865,
  [SMALL_STATE(366)] = 11879,
  [SMALL_STATE(367)] = 11893,
  [SMALL_STATE(368)] = 11907,
  [SMALL_STATE(369)] = 11919,
  [SMALL_STATE(370)] = 11933,
  [SMALL_STATE(371)] = 11947,
  [SMALL_STATE(372)] = 11961,
  [SMALL_STATE(373)] = 11975,
  [SMALL_STATE(374)] = 11989,
  [SMALL_STATE(375)] = 12003,
  [SMALL_STATE(376)] = 12017,
  [SMALL_STATE(377)] = 12031,
  [SMALL_STATE(378)] = 12045,
  [SMALL_STATE(379)] = 12059,
  [SMALL_STATE(380)] = 12073,
  [SMALL_STATE(381)] = 12087,
  [SMALL_STATE(382)] = 12101,
  [SMALL_STATE(383)] = 12115,
  [SMALL_STATE(384)] = 12129,
  [SMALL_STATE(385)] = 12139,
  [SMALL_STATE(386)] = 12153,
  [SMALL_STATE(387)] = 12167,
  [SMALL_STATE(388)] = 12181,
  [SMALL_STATE(389)] = 12195,
  [SMALL_STATE(390)] = 12209,
  [SMALL_STATE(391)] = 12223,
  [SMALL_STATE(392)] = 12237,
  [SMALL_STATE(393)] = 12251,
  [SMALL_STATE(394)] = 12265,
  [SMALL_STATE(395)] = 12279,
  [SMALL_STATE(396)] = 12293,
  [SMALL_STATE(397)] = 12307,
  [SMALL_STATE(398)] = 12321,
  [SMALL_STATE(399)] = 12335,
  [SMALL_STATE(400)] = 12349,
  [SMALL_STATE(401)] = 12363,
  [SMALL_STATE(402)] = 12377,
  [SMALL_STATE(403)] = 12391,
  [SMALL_STATE(404)] = 12401,
  [SMALL_STATE(405)] = 12415,
  [SMALL_STATE(406)] = 12429,
  [SMALL_STATE(407)] = 12443,
  [SMALL_STATE(408)] = 12457,
  [SMALL_STATE(409)] = 12471,
  [SMALL_STATE(410)] = 12485,
  [SMALL_STATE(411)] = 12499,
  [SMALL_STATE(412)] = 12513,
  [SMALL_STATE(413)] = 12527,
  [SMALL_STATE(414)] = 12541,
  [SMALL_STATE(415)] = 12555,
  [SMALL_STATE(416)] = 12569,
  [SMALL_STATE(417)] = 12583,
  [SMALL_STATE(418)] = 12597,
  [SMALL_STATE(419)] = 12611,
  [SMALL_STATE(420)] = 12625,
  [SMALL_STATE(421)] = 12639,
  [SMALL_STATE(422)] = 12653,
  [SMALL_STATE(423)] = 12667,
  [SMALL_STATE(424)] = 12681,
  [SMALL_STATE(425)] = 12695,
  [SMALL_STATE(426)] = 12709,
  [SMALL_STATE(427)] = 12723,
  [SMALL_STATE(428)] = 12737,
  [SMALL_STATE(429)] = 12751,
  [SMALL_STATE(430)] = 12761,
  [SMALL_STATE(431)] = 12775,
  [SMALL_STATE(432)] = 12789,
  [SMALL_STATE(433)] = 12801,
  [SMALL_STATE(434)] = 12815,
  [SMALL_STATE(435)] = 12829,
  [SMALL_STATE(436)] = 12839,
  [SMALL_STATE(437)] = 12853,
  [SMALL_STATE(438)] = 12864,
  [SMALL_STATE(439)] = 12875,
  [SMALL_STATE(440)] = 12886,
  [SMALL_STATE(441)] = 12897,
  [SMALL_STATE(442)] = 12908,
  [SMALL_STATE(443)] = 12919,
  [SMALL_STATE(444)] = 12930,
  [SMALL_STATE(445)] = 12941,
  [SMALL_STATE(446)] = 12952,
  [SMALL_STATE(447)] = 12963,
  [SMALL_STATE(448)] = 12974,
  [SMALL_STATE(449)] = 12985,
  [SMALL_STATE(450)] = 12996,
  [SMALL_STATE(451)] = 13007,
  [SMALL_STATE(452)] = 13018,
  [SMALL_STATE(453)] = 13029,
  [SMALL_STATE(454)] = 13040,
  [SMALL_STATE(455)] = 13051,
  [SMALL_STATE(456)] = 13062,
  [SMALL_STATE(457)] = 13073,
  [SMALL_STATE(458)] = 13084,
  [SMALL_STATE(459)] = 13095,
  [SMALL_STATE(460)] = 13106,
  [SMALL_STATE(461)] = 13117,
  [SMALL_STATE(462)] = 13128,
  [SMALL_STATE(463)] = 13139,
  [SMALL_STATE(464)] = 13150,
  [SMALL_STATE(465)] = 13161,
  [SMALL_STATE(466)] = 13172,
  [SMALL_STATE(467)] = 13183,
  [SMALL_STATE(468)] = 13194,
  [SMALL_STATE(469)] = 13205,
  [SMALL_STATE(470)] = 13216,
  [SMALL_STATE(471)] = 13227,
  [SMALL_STATE(472)] = 13238,
  [SMALL_STATE(473)] = 13247,
  [SMALL_STATE(474)] = 13258,
  [SMALL_STATE(475)] = 13269,
  [SMALL_STATE(476)] = 13278,
  [SMALL_STATE(477)] = 13287,
  [SMALL_STATE(478)] = 13298,
  [SMALL_STATE(479)] = 13309,
  [SMALL_STATE(480)] = 13320,
  [SMALL_STATE(481)] = 13331,
  [SMALL_STATE(482)] = 13340,
  [SMALL_STATE(483)] = 13349,
  [SMALL_STATE(484)] = 13360,
  [SMALL_STATE(485)] = 13371,
  [SMALL_STATE(486)] = 13382,
  [SMALL_STATE(487)] = 13391,
  [SMALL_STATE(488)] = 13402,
  [SMALL_STATE(489)] = 13411,
  [SMALL_STATE(490)] = 13422,
  [SMALL_STATE(491)] = 13433,
  [SMALL_STATE(492)] = 13444,
  [SMALL_STATE(493)] = 13455,
  [SMALL_STATE(494)] = 13466,
  [SMALL_STATE(495)] = 13475,
  [SMALL_STATE(496)] = 13484,
  [SMALL_STATE(497)] = 13493,
  [SMALL_STATE(498)] = 13504,
  [SMALL_STATE(499)] = 13515,
  [SMALL_STATE(500)] = 13526,
  [SMALL_STATE(501)] = 13537,
  [SMALL_STATE(502)] = 13548,
  [SMALL_STATE(503)] = 13556,
  [SMALL_STATE(504)] = 13564,
  [SMALL_STATE(505)] = 13572,
  [SMALL_STATE(506)] = 13580,
  [SMALL_STATE(507)] = 13588,
  [SMALL_STATE(508)] = 13596,
  [SMALL_STATE(509)] = 13604,
  [SMALL_STATE(510)] = 13612,
  [SMALL_STATE(511)] = 13620,
  [SMALL_STATE(512)] = 13628,
  [SMALL_STATE(513)] = 13636,
  [SMALL_STATE(514)] = 13644,
  [SMALL_STATE(515)] = 13652,
  [SMALL_STATE(516)] = 13660,
  [SMALL_STATE(517)] = 13668,
  [SMALL_STATE(518)] = 13676,
  [SMALL_STATE(519)] = 13684,
  [SMALL_STATE(520)] = 13692,
  [SMALL_STATE(521)] = 13700,
  [SMALL_STATE(522)] = 13708,
  [SMALL_STATE(523)] = 13716,
  [SMALL_STATE(524)] = 13724,
  [SMALL_STATE(525)] = 13732,
  [SMALL_STATE(526)] = 13740,
  [SMALL_STATE(527)] = 13748,
  [SMALL_STATE(528)] = 13756,
  [SMALL_STATE(529)] = 13764,
  [SMALL_STATE(530)] = 13772,
  [SMALL_STATE(531)] = 13780,
  [SMALL_STATE(532)] = 13788,
  [SMALL_STATE(533)] = 13796,
  [SMALL_STATE(534)] = 13804,
  [SMALL_STATE(535)] = 13812,
  [SMALL_STATE(536)] = 13820,
  [SMALL_STATE(537)] = 13828,
  [SMALL_STATE(538)] = 13836,
  [SMALL_STATE(539)] = 13844,
  [SMALL_STATE(540)] = 13852,
  [SMALL_STATE(541)] = 13860,
  [SMALL_STATE(542)] = 13868,
  [SMALL_STATE(543)] = 13876,
  [SMALL_STATE(544)] = 13884,
  [SMALL_STATE(545)] = 13892,
  [SMALL_STATE(546)] = 13900,
  [SMALL_STATE(547)] = 13908,
  [SMALL_STATE(548)] = 13916,
  [SMALL_STATE(549)] = 13924,
  [SMALL_STATE(550)] = 13932,
  [SMALL_STATE(551)] = 13940,
  [SMALL_STATE(552)] = 13948,
  [SMALL_STATE(553)] = 13956,
  [SMALL_STATE(554)] = 13964,
  [SMALL_STATE(555)] = 13972,
  [SMALL_STATE(556)] = 13980,
  [SMALL_STATE(557)] = 13988,
  [SMALL_STATE(558)] = 13996,
  [SMALL_STATE(559)] = 14004,
  [SMALL_STATE(560)] = 14012,
  [SMALL_STATE(561)] = 14020,
  [SMALL_STATE(562)] = 14028,
  [SMALL_STATE(563)] = 14036,
  [SMALL_STATE(564)] = 14044,
  [SMALL_STATE(565)] = 14052,
  [SMALL_STATE(566)] = 14060,
  [SMALL_STATE(567)] = 14068,
  [SMALL_STATE(568)] = 14076,
  [SMALL_STATE(569)] = 14084,
  [SMALL_STATE(570)] = 14092,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__named_expression_lhs, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 13),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 13),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 15),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 15),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 2, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 5),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 7),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, .production_id = 14),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 14),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, .production_id = 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, .production_id = 31),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 31),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 26),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 26),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(565),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(562),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(453),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(556),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(553),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(551),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16), SHIFT_REPEAT(166),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16), SHIFT_REPEAT(166),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 8),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16), SHIFT_REPEAT(182),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16), SHIFT_REPEAT(182),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16), SHIFT_REPEAT(175),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16), SHIFT_REPEAT(175),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5, .production_id = 23),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4, .production_id = 20),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3, .production_id = 11),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(535),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(443),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(546),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, .production_id = 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(544),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(400),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(329),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(534),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5, .production_id = 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 6, .production_id = 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 19),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 18),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 7, .production_id = 21),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, .production_id = 9),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait, 5, .production_id = 9),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait, 5, .production_id = 10),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 7, .production_id = 22),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 10, .production_id = 34),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 8, .production_id = 27),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 8, .production_id = 25),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 8, .production_id = 24),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait, 4, .production_id = 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait, 6, .production_id = 19),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 9, .production_id = 28),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 9, .production_id = 29),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 12, .production_id = 44),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 9, .production_id = 30),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 11, .production_id = 42),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 11, .production_id = 41),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 11, .production_id = 39),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 10, .production_id = 38),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 10, .production_id = 37),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 9, .production_id = 32),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 10, .production_id = 36),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 9, .production_id = 33),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 10, .production_id = 35),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_pattern, 3, .production_id = 12),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_argument, 3, .production_id = 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_argument, 3, .production_id = 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 6),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 13),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_expression, 3, .production_id = 2),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_named_expression, 3, .production_id = 2), SHIFT(63),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_named_expression, 3, .production_id = 2), SHIFT(45),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_named_expression, 3, .production_id = 2), SHIFT(52),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 7, .production_id = 30),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_field, 7, .production_id = 30),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 43),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 43),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 9, .production_id = 39),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass_statement, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_statement, 1),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat2, 2), SHIFT_REPEAT(490),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat2, 2),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2), SHIFT_REPEAT(558),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 6, .production_id = 25),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_field, 6, .production_id = 25),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 6, .production_id = 24),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 7, .production_id = 29),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 40),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 40),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 7, .production_id = 28),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 8, .production_id = 35),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 8, .production_id = 34),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type2_repeat1, 2),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_type2_repeat1, 2), SHIFT_REPEAT(564),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type2, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 5, .production_id = 22),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_field, 5, .production_id = 22),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_repeat1, 2),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_repeat1, 2), SHIFT_REPEAT(569),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type2, 4),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type2, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(478),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2), SHIFT_REPEAT(506),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_value, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat2, 2), SHIFT_REPEAT(448),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_list_repeat1, 2), SHIFT_REPEAT(492),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_list_repeat1, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat1, 2), SHIFT_REPEAT(465),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat1, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(22),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(407),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type2, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type2, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_field, 3, .production_id = 17),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, .production_id = 17),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_list, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_list, 4),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 5),
  [1014] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extension, 3),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pacos_external_scanner_create(void);
void tree_sitter_pacos_external_scanner_destroy(void *);
bool tree_sitter_pacos_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pacos_external_scanner_serialize(void *, char *);
void tree_sitter_pacos_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pacos(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_pacos_external_scanner_create,
      tree_sitter_pacos_external_scanner_destroy,
      tree_sitter_pacos_external_scanner_scan,
      tree_sitter_pacos_external_scanner_serialize,
      tree_sitter_pacos_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

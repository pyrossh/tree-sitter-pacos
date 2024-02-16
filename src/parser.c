#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 531
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 173
#define ALIAS_COUNT 1
#define TOKEN_COUNT 106
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 43

enum {
  sym_identifier = 1,
  anon_sym_module = 2,
  anon_sym_import = 3,
  aux_sym_url_token1 = 4,
  anon_sym_SLASH = 5,
  anon_sym_EQ = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LBRACK = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACK = 11,
  anon_sym_COLON = 12,
  anon_sym_AMP = 13,
  anon_sym_QMARK = 14,
  anon_sym_record = 15,
  anon_sym_trait = 16,
  anon_sym_fn = 17,
  anon_sym_enum = 18,
  anon_sym_PIPE = 19,
  anon_sym_POUND = 20,
  anon_sym_test = 21,
  anon_sym_assert = 22,
  anon_sym_return = 23,
  anon_sym_raise = 24,
  anon_sym_from = 25,
  anon_sym_pass = 26,
  anon_sym_break = 27,
  anon_sym_continue = 28,
  anon_sym_if = 29,
  anon_sym_elif = 30,
  anon_sym_else = 31,
  anon_sym_match = 32,
  anon_sym_case = 33,
  anon_sym_DOT = 34,
  anon_sym_for = 35,
  anon_sym_COLON_EQ = 36,
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
  anon_sym_DASH = 47,
  anon_sym__ = 48,
  anon_sym_LBRACE = 49,
  anon_sym_RBRACE = 50,
  anon_sym_STAR = 51,
  anon_sym_STAR_STAR = 52,
  anon_sym_PLUS = 53,
  anon_sym_BANG = 54,
  anon_sym_AMP_AMP = 55,
  anon_sym_PIPE_PIPE = 56,
  anon_sym_AT = 57,
  anon_sym_PERCENT = 58,
  anon_sym_SLASH_SLASH = 59,
  anon_sym_CARET = 60,
  anon_sym_LT_LT = 61,
  anon_sym_GT_GT = 62,
  anon_sym_LT = 63,
  anon_sym_LT_EQ = 64,
  anon_sym_EQ_EQ = 65,
  anon_sym_BANG_EQ = 66,
  anon_sym_GT_EQ = 67,
  anon_sym_GT = 68,
  anon_sym_LT_GT = 69,
  anon_sym_PLUS_EQ = 70,
  anon_sym_DASH_EQ = 71,
  anon_sym_STAR_EQ = 72,
  anon_sym_SLASH_EQ = 73,
  anon_sym_AT_EQ = 74,
  anon_sym_PERCENT_EQ = 75,
  anon_sym_STAR_STAR_EQ = 76,
  anon_sym_GT_GT_EQ = 77,
  anon_sym_LT_LT_EQ = 78,
  anon_sym_AMP_EQ = 79,
  anon_sym_CARET_EQ = 80,
  anon_sym_PIPE_EQ = 81,
  sym__not_escape_sequence = 82,
  anon_sym_EQ_GT = 83,
  sym__hex = 84,
  sym__decimal = 85,
  sym__octal = 86,
  sym__binary = 87,
  sym_integer = 88,
  sym_float = 89,
  sym_const_identifier = 90,
  anon_sym_print = 91,
  anon_sym_exec = 92,
  sym_true = 93,
  sym_false = 94,
  sym_nil = 95,
  sym_comment = 96,
  sym_doc_comment = 97,
  sym_line_continuation = 98,
  sym__newline = 99,
  sym__indent = 100,
  sym__dedent = 101,
  sym_string_start = 102,
  sym__string_content = 103,
  sym_escape_interpolation = 104,
  sym_string_end = 105,
  sym_source = 106,
  sym_module = 107,
  sym_import = 108,
  sym_url = 109,
  sym_const = 110,
  sym_const_literal = 111,
  sym_generic_list = 112,
  sym_generic_type2 = 113,
  sym_type2 = 114,
  sym_record = 115,
  sym_record_field = 116,
  sym_trait = 117,
  sym_trait_field = 118,
  sym_param = 119,
  sym_enum = 120,
  sym_enum_field = 121,
  sym_fn = 122,
  sym_decorator = 123,
  sym_body = 124,
  sym_test = 125,
  sym__statement = 126,
  sym_named_expression = 127,
  sym__named_expression_lhs = 128,
  sym_pass_statement = 129,
  sym_reference = 130,
  sym_range_value = 131,
  sym_for_statement = 132,
  sym_argument_list = 133,
  sym_keyword_argument = 134,
  sym_as_pattern = 135,
  sym_expression = 136,
  sym_primary_expression = 137,
  sym_not_operator = 138,
  sym_boolean_operator = 139,
  sym_binary_operator = 140,
  sym_unary_operator = 141,
  sym_comparison_operator = 142,
  sym_lambda = 143,
  sym_attribute = 144,
  sym_call = 145,
  sym_conditional_expression = 146,
  sym_string = 147,
  sym_list = 148,
  sym_symbol = 149,
  sym_key = 150,
  sym_value = 151,
  sym_key_value = 152,
  sym_map = 153,
  sym__extension = 154,
  aux_sym_source_repeat1 = 155,
  aux_sym_source_repeat2 = 156,
  aux_sym_source_repeat3 = 157,
  aux_sym_url_repeat1 = 158,
  aux_sym_generic_list_repeat1 = 159,
  aux_sym_generic_type2_repeat1 = 160,
  aux_sym_record_repeat1 = 161,
  aux_sym_trait_repeat1 = 162,
  aux_sym_trait_field_repeat1 = 163,
  aux_sym_trait_field_repeat2 = 164,
  aux_sym_enum_repeat1 = 165,
  aux_sym_enum_field_repeat1 = 166,
  aux_sym_body_repeat1 = 167,
  aux_sym_assert_statement_repeat1 = 168,
  aux_sym_argument_list_repeat1 = 169,
  aux_sym_comparison_operator_repeat1 = 170,
  aux_sym_string_repeat1 = 171,
  aux_sym_map_repeat1 = 172,
  alias_sym_as_pattern_target = 173,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_module] = "module",
  [anon_sym_import] = "import",
  [aux_sym_url_token1] = "url_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_AMP] = "&",
  [anon_sym_QMARK] = "\?",
  [anon_sym_record] = "record",
  [anon_sym_trait] = "trait",
  [anon_sym_fn] = "fn",
  [anon_sym_enum] = "enum",
  [anon_sym_PIPE] = "|",
  [anon_sym_POUND] = "#",
  [anon_sym_test] = "test",
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
  [anon_sym_COLON_EQ] = ":=",
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
  [anon_sym_DASH] = "-",
  [anon_sym__] = "_",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_STAR] = "*",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_PLUS] = "+",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AT] = "@",
  [anon_sym_PERCENT] = "%",
  [anon_sym_SLASH_SLASH] = "//",
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
  [sym__not_escape_sequence] = "_not_escape_sequence",
  [anon_sym_EQ_GT] = "=>",
  [sym__hex] = "_hex",
  [sym__decimal] = "_decimal",
  [sym__octal] = "_octal",
  [sym__binary] = "_binary",
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
  [sym_const_literal] = "const_literal",
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
  [sym_named_expression] = "named_expression",
  [sym__named_expression_lhs] = "_named_expression_lhs",
  [sym_pass_statement] = "pass_statement",
  [sym_reference] = "reference",
  [sym_range_value] = "range_value",
  [sym_for_statement] = "for_statement",
  [sym_argument_list] = "argument_list",
  [sym_keyword_argument] = "keyword_argument",
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
  [sym_list] = "list",
  [sym_symbol] = "symbol",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_key_value] = "key_value",
  [sym_map] = "map",
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
  [aux_sym_assert_statement_repeat1] = "assert_statement_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_comparison_operator_repeat1] = "comparison_operator_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_trait] = anon_sym_trait,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_test] = anon_sym_test,
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
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
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
  [sym__not_escape_sequence] = sym__not_escape_sequence,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym__hex] = sym__hex,
  [sym__decimal] = sym__decimal,
  [sym__octal] = sym__octal,
  [sym__binary] = sym__binary,
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
  [sym_const_literal] = sym_const_literal,
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
  [sym_named_expression] = sym_named_expression,
  [sym__named_expression_lhs] = sym__named_expression_lhs,
  [sym_pass_statement] = sym_pass_statement,
  [sym_reference] = sym_reference,
  [sym_range_value] = sym_range_value,
  [sym_for_statement] = sym_for_statement,
  [sym_argument_list] = sym_argument_list,
  [sym_keyword_argument] = sym_keyword_argument,
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
  [sym_list] = sym_list,
  [sym_symbol] = sym_symbol,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_key_value] = sym_key_value,
  [sym_map] = sym_map,
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
  [aux_sym_assert_statement_repeat1] = aux_sym_assert_statement_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_comparison_operator_repeat1] = aux_sym_comparison_operator_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_COLON_EQ] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
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
  [sym__not_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__octal] = {
    .visible = false,
    .named = true,
  },
  [sym__binary] = {
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
  [sym_const_literal] = {
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
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
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
  [aux_sym_assert_statement_repeat1] = {
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
  [aux_sym_map_repeat1] = {
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
  [26] = {.index = 66, .length = 3},
  [27] = {.index = 69, .length = 5},
  [28] = {.index = 74, .length = 5},
  [29] = {.index = 79, .length = 5},
  [30] = {.index = 84, .length = 4},
  [31] = {.index = 88, .length = 4},
  [32] = {.index = 92, .length = 6},
  [33] = {.index = 98, .length = 6},
  [34] = {.index = 104, .length = 5},
  [35] = {.index = 109, .length = 5},
  [36] = {.index = 114, .length = 5},
  [37] = {.index = 119, .length = 7},
  [38] = {.index = 126, .length = 3},
  [39] = {.index = 129, .length = 6},
  [40] = {.index = 135, .length = 6},
  [41] = {.index = 141, .length = 4},
  [42] = {.index = 145, .length = 7},
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
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
  [69] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_returns, 5},
    {field_returns, 6},
  [74] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_returns, 6},
  [79] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
  [84] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_returns, 6},
  [88] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
  [92] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_returns, 6},
    {field_returns, 7},
  [98] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_returns, 7},
  [104] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_returns, 6},
    {field_returns, 7},
  [109] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_returns, 7},
  [114] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_params, 6},
  [119] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_returns, 7},
    {field_returns, 8},
  [126] =
    {field_body, 5},
    {field_left, 1},
    {field_right, 4},
  [129] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_returns, 7},
    {field_returns, 8},
  [135] =
    {field_name, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_params, 6},
    {field_returns, 8},
  [141] =
    {field_body, 6},
    {field_left, 1},
    {field_left, 2},
    {field_right, 5},
  [145] =
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
  [7] = 7,
  [8] = 7,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 10,
  [14] = 10,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 22,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 23,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 39,
  [43] = 43,
  [44] = 39,
  [45] = 45,
  [46] = 43,
  [47] = 31,
  [48] = 29,
  [49] = 28,
  [50] = 32,
  [51] = 43,
  [52] = 33,
  [53] = 45,
  [54] = 34,
  [55] = 24,
  [56] = 36,
  [57] = 27,
  [58] = 22,
  [59] = 38,
  [60] = 37,
  [61] = 27,
  [62] = 28,
  [63] = 29,
  [64] = 35,
  [65] = 17,
  [66] = 37,
  [67] = 33,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 24,
  [72] = 23,
  [73] = 73,
  [74] = 45,
  [75] = 75,
  [76] = 76,
  [77] = 73,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 31,
  [83] = 79,
  [84] = 69,
  [85] = 81,
  [86] = 32,
  [87] = 87,
  [88] = 34,
  [89] = 38,
  [90] = 68,
  [91] = 35,
  [92] = 92,
  [93] = 93,
  [94] = 75,
  [95] = 76,
  [96] = 87,
  [97] = 92,
  [98] = 36,
  [99] = 93,
  [100] = 70,
  [101] = 78,
  [102] = 80,
  [103] = 69,
  [104] = 93,
  [105] = 68,
  [106] = 78,
  [107] = 87,
  [108] = 92,
  [109] = 81,
  [110] = 79,
  [111] = 75,
  [112] = 76,
  [113] = 70,
  [114] = 73,
  [115] = 80,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 119,
  [123] = 123,
  [124] = 124,
  [125] = 120,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 124,
  [130] = 119,
  [131] = 124,
  [132] = 132,
  [133] = 127,
  [134] = 128,
  [135] = 126,
  [136] = 120,
  [137] = 123,
  [138] = 132,
  [139] = 126,
  [140] = 121,
  [141] = 128,
  [142] = 121,
  [143] = 127,
  [144] = 132,
  [145] = 123,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 152,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 156,
  [160] = 156,
  [161] = 152,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 92,
  [183] = 68,
  [184] = 181,
  [185] = 181,
  [186] = 87,
  [187] = 75,
  [188] = 188,
  [189] = 93,
  [190] = 190,
  [191] = 181,
  [192] = 192,
  [193] = 76,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 198,
  [201] = 201,
  [202] = 202,
  [203] = 202,
  [204] = 204,
  [205] = 202,
  [206] = 206,
  [207] = 201,
  [208] = 198,
  [209] = 198,
  [210] = 194,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 213,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 194,
  [221] = 213,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 213,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 213,
  [233] = 201,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 202,
  [238] = 238,
  [239] = 201,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 163,
  [246] = 246,
  [247] = 163,
  [248] = 248,
  [249] = 164,
  [250] = 250,
  [251] = 251,
  [252] = 248,
  [253] = 167,
  [254] = 165,
  [255] = 167,
  [256] = 166,
  [257] = 164,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 260,
  [262] = 162,
  [263] = 251,
  [264] = 250,
  [265] = 259,
  [266] = 162,
  [267] = 166,
  [268] = 165,
  [269] = 269,
  [270] = 269,
  [271] = 271,
  [272] = 244,
  [273] = 273,
  [274] = 248,
  [275] = 259,
  [276] = 244,
  [277] = 260,
  [278] = 269,
  [279] = 279,
  [280] = 280,
  [281] = 280,
  [282] = 280,
  [283] = 283,
  [284] = 251,
  [285] = 250,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 308,
  [311] = 309,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 313,
  [324] = 324,
  [325] = 325,
  [326] = 315,
  [327] = 327,
  [328] = 316,
  [329] = 329,
  [330] = 318,
  [331] = 321,
  [332] = 332,
  [333] = 333,
  [334] = 313,
  [335] = 335,
  [336] = 315,
  [337] = 337,
  [338] = 316,
  [339] = 339,
  [340] = 318,
  [341] = 341,
  [342] = 342,
  [343] = 300,
  [344] = 321,
  [345] = 321,
  [346] = 346,
  [347] = 332,
  [348] = 333,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 313,
  [354] = 354,
  [355] = 315,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 316,
  [363] = 363,
  [364] = 364,
  [365] = 318,
  [366] = 297,
  [367] = 321,
  [368] = 368,
  [369] = 369,
  [370] = 162,
  [371] = 164,
  [372] = 301,
  [373] = 373,
  [374] = 332,
  [375] = 165,
  [376] = 376,
  [377] = 318,
  [378] = 378,
  [379] = 316,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 309,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 333,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 313,
  [398] = 315,
  [399] = 399,
  [400] = 308,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 413,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 438,
  [443] = 443,
  [444] = 368,
  [445] = 445,
  [446] = 412,
  [447] = 447,
  [448] = 448,
  [449] = 434,
  [450] = 450,
  [451] = 451,
  [452] = 378,
  [453] = 381,
  [454] = 454,
  [455] = 413,
  [456] = 438,
  [457] = 457,
  [458] = 458,
  [459] = 434,
  [460] = 443,
  [461] = 412,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 474,
  [477] = 68,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 474,
  [482] = 75,
  [483] = 483,
  [484] = 76,
  [485] = 87,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 92,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 468,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 487,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 93,
  [506] = 506,
  [507] = 487,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 478,
  [526] = 526,
  [527] = 527,
  [528] = 468,
  [529] = 529,
  [530] = 530,
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
      if (eof) ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(52)
      if (lookahead == '\r') SKIP(52)
      if (lookahead == '!') ADVANCE(106);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '^') ADVANCE(115);
      if (lookahead == '`') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(98);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(209);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(207);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(155);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(163);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == '|') ADVANCE(108);
      END_STATE();
    case 39:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 41:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
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
      if (lookahead == '!') ADVANCE(105);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(160);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '`') ADVANCE(208);
      if (lookahead == '|') ADVANCE(85);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(205);
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
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '^') ADVANCE(114);
      if (lookahead == '|') ADVANCE(87);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(205);
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
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '|') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(205);
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
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(189);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(205);
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
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(163);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 51:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 52:
      if (eof) ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(52)
      if (lookahead == '\r') SKIP(52)
      if (lookahead == '!') ADVANCE(106);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '%') ADVANCE(112);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '^') ADVANCE(115);
      if (lookahead == '`') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(98);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(53)
      if (lookahead == '\r') SKIP(53)
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '|') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(54)
      if (lookahead == '\r') SKIP(54)
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '|') ADVANCE(38);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_module);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(207);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '>') ADVANCE(144);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(144);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(107);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(107);
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_record);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_trait);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_trait);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_enum);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '|') ADVANCE(108);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(108);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_test);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_except_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
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
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '_') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(7);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(9);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '_') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '_') ADVANCE(161);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(10);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(11);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(12);
      if (lookahead == '_') ADVANCE(161);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(167);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(10);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(11);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(12);
      if (lookahead == '_') ADVANCE(167);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*') ADVANCE(94);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(205);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(183);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(205);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(182);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(192);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(78);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(202);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(174);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(176);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(199);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(193);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(84);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'x') ADVANCE(175);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(203);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(82);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(178);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(196);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(195);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(191);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(200);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(177);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(198);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(90);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(80);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(59);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(184);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(186);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_const_identifier);
      if (lookahead == '_') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 209:
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
  [2] = {.lex_state = 42, .external_lex_state = 3},
  [3] = {.lex_state = 42, .external_lex_state = 3},
  [4] = {.lex_state = 42, .external_lex_state = 3},
  [5] = {.lex_state = 42, .external_lex_state = 3},
  [6] = {.lex_state = 42, .external_lex_state = 3},
  [7] = {.lex_state = 42, .external_lex_state = 4},
  [8] = {.lex_state = 42, .external_lex_state = 4},
  [9] = {.lex_state = 42, .external_lex_state = 4},
  [10] = {.lex_state = 42, .external_lex_state = 4},
  [11] = {.lex_state = 42, .external_lex_state = 4},
  [12] = {.lex_state = 42, .external_lex_state = 4},
  [13] = {.lex_state = 42, .external_lex_state = 4},
  [14] = {.lex_state = 42, .external_lex_state = 4},
  [15] = {.lex_state = 42, .external_lex_state = 4},
  [16] = {.lex_state = 43, .external_lex_state = 5},
  [17] = {.lex_state = 43, .external_lex_state = 5},
  [18] = {.lex_state = 43, .external_lex_state = 6},
  [19] = {.lex_state = 42, .external_lex_state = 3},
  [20] = {.lex_state = 42, .external_lex_state = 3},
  [21] = {.lex_state = 43, .external_lex_state = 6},
  [22] = {.lex_state = 42, .external_lex_state = 3},
  [23] = {.lex_state = 43, .external_lex_state = 6},
  [24] = {.lex_state = 43, .external_lex_state = 6},
  [25] = {.lex_state = 42, .external_lex_state = 3},
  [26] = {.lex_state = 42, .external_lex_state = 3},
  [27] = {.lex_state = 42, .external_lex_state = 3},
  [28] = {.lex_state = 42, .external_lex_state = 3},
  [29] = {.lex_state = 42, .external_lex_state = 3},
  [30] = {.lex_state = 43, .external_lex_state = 5},
  [31] = {.lex_state = 43, .external_lex_state = 5},
  [32] = {.lex_state = 43, .external_lex_state = 5},
  [33] = {.lex_state = 43, .external_lex_state = 5},
  [34] = {.lex_state = 43, .external_lex_state = 5},
  [35] = {.lex_state = 43, .external_lex_state = 5},
  [36] = {.lex_state = 43, .external_lex_state = 5},
  [37] = {.lex_state = 42, .external_lex_state = 3},
  [38] = {.lex_state = 43, .external_lex_state = 5},
  [39] = {.lex_state = 42, .external_lex_state = 3},
  [40] = {.lex_state = 42, .external_lex_state = 3},
  [41] = {.lex_state = 42, .external_lex_state = 3},
  [42] = {.lex_state = 42, .external_lex_state = 3},
  [43] = {.lex_state = 42, .external_lex_state = 3},
  [44] = {.lex_state = 42, .external_lex_state = 3},
  [45] = {.lex_state = 43, .external_lex_state = 6},
  [46] = {.lex_state = 42, .external_lex_state = 3},
  [47] = {.lex_state = 43, .external_lex_state = 6},
  [48] = {.lex_state = 42, .external_lex_state = 3},
  [49] = {.lex_state = 42, .external_lex_state = 3},
  [50] = {.lex_state = 43, .external_lex_state = 6},
  [51] = {.lex_state = 42, .external_lex_state = 3},
  [52] = {.lex_state = 43, .external_lex_state = 6},
  [53] = {.lex_state = 43, .external_lex_state = 5},
  [54] = {.lex_state = 43, .external_lex_state = 6},
  [55] = {.lex_state = 43, .external_lex_state = 5},
  [56] = {.lex_state = 43, .external_lex_state = 6},
  [57] = {.lex_state = 42, .external_lex_state = 3},
  [58] = {.lex_state = 42, .external_lex_state = 3},
  [59] = {.lex_state = 43, .external_lex_state = 6},
  [60] = {.lex_state = 42, .external_lex_state = 3},
  [61] = {.lex_state = 42, .external_lex_state = 3},
  [62] = {.lex_state = 42, .external_lex_state = 3},
  [63] = {.lex_state = 42, .external_lex_state = 3},
  [64] = {.lex_state = 43, .external_lex_state = 6},
  [65] = {.lex_state = 43, .external_lex_state = 2},
  [66] = {.lex_state = 42, .external_lex_state = 3},
  [67] = {.lex_state = 43, .external_lex_state = 2},
  [68] = {.lex_state = 43, .external_lex_state = 5},
  [69] = {.lex_state = 43, .external_lex_state = 5},
  [70] = {.lex_state = 43, .external_lex_state = 5},
  [71] = {.lex_state = 43, .external_lex_state = 2},
  [72] = {.lex_state = 43, .external_lex_state = 2},
  [73] = {.lex_state = 43, .external_lex_state = 5},
  [74] = {.lex_state = 43, .external_lex_state = 2},
  [75] = {.lex_state = 43, .external_lex_state = 5},
  [76] = {.lex_state = 43, .external_lex_state = 5},
  [77] = {.lex_state = 43, .external_lex_state = 6},
  [78] = {.lex_state = 43, .external_lex_state = 5},
  [79] = {.lex_state = 43, .external_lex_state = 5},
  [80] = {.lex_state = 43, .external_lex_state = 5},
  [81] = {.lex_state = 43, .external_lex_state = 6},
  [82] = {.lex_state = 43, .external_lex_state = 2},
  [83] = {.lex_state = 43, .external_lex_state = 6},
  [84] = {.lex_state = 43, .external_lex_state = 6},
  [85] = {.lex_state = 43, .external_lex_state = 5},
  [86] = {.lex_state = 43, .external_lex_state = 2},
  [87] = {.lex_state = 43, .external_lex_state = 5},
  [88] = {.lex_state = 43, .external_lex_state = 2},
  [89] = {.lex_state = 43, .external_lex_state = 2},
  [90] = {.lex_state = 43, .external_lex_state = 6},
  [91] = {.lex_state = 43, .external_lex_state = 2},
  [92] = {.lex_state = 43, .external_lex_state = 5},
  [93] = {.lex_state = 43, .external_lex_state = 6},
  [94] = {.lex_state = 43, .external_lex_state = 6},
  [95] = {.lex_state = 43, .external_lex_state = 6},
  [96] = {.lex_state = 43, .external_lex_state = 6},
  [97] = {.lex_state = 43, .external_lex_state = 6},
  [98] = {.lex_state = 43, .external_lex_state = 2},
  [99] = {.lex_state = 43, .external_lex_state = 5},
  [100] = {.lex_state = 43, .external_lex_state = 6},
  [101] = {.lex_state = 43, .external_lex_state = 6},
  [102] = {.lex_state = 43, .external_lex_state = 6},
  [103] = {.lex_state = 43, .external_lex_state = 2},
  [104] = {.lex_state = 43, .external_lex_state = 2},
  [105] = {.lex_state = 43, .external_lex_state = 2},
  [106] = {.lex_state = 43, .external_lex_state = 2},
  [107] = {.lex_state = 43, .external_lex_state = 2},
  [108] = {.lex_state = 43, .external_lex_state = 2},
  [109] = {.lex_state = 43, .external_lex_state = 2},
  [110] = {.lex_state = 43, .external_lex_state = 2},
  [111] = {.lex_state = 43, .external_lex_state = 2},
  [112] = {.lex_state = 43, .external_lex_state = 2},
  [113] = {.lex_state = 43, .external_lex_state = 2},
  [114] = {.lex_state = 43, .external_lex_state = 2},
  [115] = {.lex_state = 43, .external_lex_state = 2},
  [116] = {.lex_state = 53, .external_lex_state = 2},
  [117] = {.lex_state = 53, .external_lex_state = 2},
  [118] = {.lex_state = 53, .external_lex_state = 2},
  [119] = {.lex_state = 42, .external_lex_state = 3},
  [120] = {.lex_state = 42, .external_lex_state = 3},
  [121] = {.lex_state = 42, .external_lex_state = 3},
  [122] = {.lex_state = 42, .external_lex_state = 3},
  [123] = {.lex_state = 42, .external_lex_state = 3},
  [124] = {.lex_state = 42, .external_lex_state = 3},
  [125] = {.lex_state = 42, .external_lex_state = 3},
  [126] = {.lex_state = 42, .external_lex_state = 3},
  [127] = {.lex_state = 42, .external_lex_state = 3},
  [128] = {.lex_state = 42, .external_lex_state = 3},
  [129] = {.lex_state = 42, .external_lex_state = 3},
  [130] = {.lex_state = 42, .external_lex_state = 3},
  [131] = {.lex_state = 42, .external_lex_state = 3},
  [132] = {.lex_state = 42, .external_lex_state = 3},
  [133] = {.lex_state = 42, .external_lex_state = 3},
  [134] = {.lex_state = 42, .external_lex_state = 3},
  [135] = {.lex_state = 42, .external_lex_state = 3},
  [136] = {.lex_state = 42, .external_lex_state = 3},
  [137] = {.lex_state = 42, .external_lex_state = 3},
  [138] = {.lex_state = 42, .external_lex_state = 3},
  [139] = {.lex_state = 42, .external_lex_state = 3},
  [140] = {.lex_state = 42, .external_lex_state = 3},
  [141] = {.lex_state = 42, .external_lex_state = 3},
  [142] = {.lex_state = 42, .external_lex_state = 3},
  [143] = {.lex_state = 42, .external_lex_state = 3},
  [144] = {.lex_state = 42, .external_lex_state = 3},
  [145] = {.lex_state = 42, .external_lex_state = 3},
  [146] = {.lex_state = 53, .external_lex_state = 2},
  [147] = {.lex_state = 53, .external_lex_state = 2},
  [148] = {.lex_state = 53, .external_lex_state = 2},
  [149] = {.lex_state = 53, .external_lex_state = 2},
  [150] = {.lex_state = 53, .external_lex_state = 2},
  [151] = {.lex_state = 53, .external_lex_state = 2},
  [152] = {.lex_state = 44, .external_lex_state = 6},
  [153] = {.lex_state = 53, .external_lex_state = 2},
  [154] = {.lex_state = 44, .external_lex_state = 5},
  [155] = {.lex_state = 53, .external_lex_state = 2},
  [156] = {.lex_state = 44, .external_lex_state = 5},
  [157] = {.lex_state = 53, .external_lex_state = 2},
  [158] = {.lex_state = 53, .external_lex_state = 2},
  [159] = {.lex_state = 44, .external_lex_state = 6},
  [160] = {.lex_state = 44, .external_lex_state = 2},
  [161] = {.lex_state = 44, .external_lex_state = 2},
  [162] = {.lex_state = 54, .external_lex_state = 2},
  [163] = {.lex_state = 54, .external_lex_state = 2},
  [164] = {.lex_state = 54, .external_lex_state = 2},
  [165] = {.lex_state = 54, .external_lex_state = 2},
  [166] = {.lex_state = 54, .external_lex_state = 2},
  [167] = {.lex_state = 54, .external_lex_state = 2},
  [168] = {.lex_state = 53, .external_lex_state = 2},
  [169] = {.lex_state = 53, .external_lex_state = 2},
  [170] = {.lex_state = 53, .external_lex_state = 2},
  [171] = {.lex_state = 53, .external_lex_state = 2},
  [172] = {.lex_state = 53, .external_lex_state = 2},
  [173] = {.lex_state = 53, .external_lex_state = 2},
  [174] = {.lex_state = 42, .external_lex_state = 3},
  [175] = {.lex_state = 53, .external_lex_state = 2},
  [176] = {.lex_state = 53, .external_lex_state = 2},
  [177] = {.lex_state = 53, .external_lex_state = 2},
  [178] = {.lex_state = 53, .external_lex_state = 2},
  [179] = {.lex_state = 53, .external_lex_state = 2},
  [180] = {.lex_state = 53, .external_lex_state = 2},
  [181] = {.lex_state = 42, .external_lex_state = 7},
  [182] = {.lex_state = 53, .external_lex_state = 2},
  [183] = {.lex_state = 53, .external_lex_state = 2},
  [184] = {.lex_state = 42, .external_lex_state = 7},
  [185] = {.lex_state = 42, .external_lex_state = 7},
  [186] = {.lex_state = 53, .external_lex_state = 2},
  [187] = {.lex_state = 53, .external_lex_state = 2},
  [188] = {.lex_state = 53, .external_lex_state = 2},
  [189] = {.lex_state = 53, .external_lex_state = 2},
  [190] = {.lex_state = 53, .external_lex_state = 2},
  [191] = {.lex_state = 42, .external_lex_state = 7},
  [192] = {.lex_state = 53, .external_lex_state = 2},
  [193] = {.lex_state = 53, .external_lex_state = 2},
  [194] = {.lex_state = 44, .external_lex_state = 6},
  [195] = {.lex_state = 44, .external_lex_state = 2},
  [196] = {.lex_state = 53, .external_lex_state = 2},
  [197] = {.lex_state = 53, .external_lex_state = 2},
  [198] = {.lex_state = 42, .external_lex_state = 7},
  [199] = {.lex_state = 53, .external_lex_state = 2},
  [200] = {.lex_state = 42, .external_lex_state = 7},
  [201] = {.lex_state = 42, .external_lex_state = 7},
  [202] = {.lex_state = 42, .external_lex_state = 7},
  [203] = {.lex_state = 42, .external_lex_state = 7},
  [204] = {.lex_state = 53, .external_lex_state = 2},
  [205] = {.lex_state = 42, .external_lex_state = 7},
  [206] = {.lex_state = 53, .external_lex_state = 2},
  [207] = {.lex_state = 42, .external_lex_state = 7},
  [208] = {.lex_state = 42, .external_lex_state = 7},
  [209] = {.lex_state = 42, .external_lex_state = 7},
  [210] = {.lex_state = 44, .external_lex_state = 6},
  [211] = {.lex_state = 53, .external_lex_state = 2},
  [212] = {.lex_state = 53, .external_lex_state = 2},
  [213] = {.lex_state = 44, .external_lex_state = 5},
  [214] = {.lex_state = 44, .external_lex_state = 5},
  [215] = {.lex_state = 53, .external_lex_state = 2},
  [216] = {.lex_state = 53, .external_lex_state = 2},
  [217] = {.lex_state = 53, .external_lex_state = 2},
  [218] = {.lex_state = 53, .external_lex_state = 2},
  [219] = {.lex_state = 53, .external_lex_state = 2},
  [220] = {.lex_state = 44, .external_lex_state = 6},
  [221] = {.lex_state = 44, .external_lex_state = 5},
  [222] = {.lex_state = 53, .external_lex_state = 2},
  [223] = {.lex_state = 53, .external_lex_state = 2},
  [224] = {.lex_state = 53, .external_lex_state = 2},
  [225] = {.lex_state = 44, .external_lex_state = 5},
  [226] = {.lex_state = 53, .external_lex_state = 2},
  [227] = {.lex_state = 53, .external_lex_state = 2},
  [228] = {.lex_state = 53, .external_lex_state = 2},
  [229] = {.lex_state = 53, .external_lex_state = 2},
  [230] = {.lex_state = 53, .external_lex_state = 2},
  [231] = {.lex_state = 53, .external_lex_state = 2},
  [232] = {.lex_state = 44, .external_lex_state = 5},
  [233] = {.lex_state = 42, .external_lex_state = 7},
  [234] = {.lex_state = 53, .external_lex_state = 2},
  [235] = {.lex_state = 53, .external_lex_state = 2},
  [236] = {.lex_state = 53, .external_lex_state = 2},
  [237] = {.lex_state = 42, .external_lex_state = 7},
  [238] = {.lex_state = 42, .external_lex_state = 7},
  [239] = {.lex_state = 42, .external_lex_state = 7},
  [240] = {.lex_state = 53, .external_lex_state = 2},
  [241] = {.lex_state = 53, .external_lex_state = 2},
  [242] = {.lex_state = 53, .external_lex_state = 2},
  [243] = {.lex_state = 44, .external_lex_state = 2},
  [244] = {.lex_state = 44, .external_lex_state = 5},
  [245] = {.lex_state = 44, .external_lex_state = 5},
  [246] = {.lex_state = 44, .external_lex_state = 6},
  [247] = {.lex_state = 44, .external_lex_state = 6},
  [248] = {.lex_state = 44, .external_lex_state = 5},
  [249] = {.lex_state = 44, .external_lex_state = 5},
  [250] = {.lex_state = 44, .external_lex_state = 6},
  [251] = {.lex_state = 44, .external_lex_state = 6},
  [252] = {.lex_state = 44, .external_lex_state = 6},
  [253] = {.lex_state = 44, .external_lex_state = 6},
  [254] = {.lex_state = 44, .external_lex_state = 6},
  [255] = {.lex_state = 44, .external_lex_state = 5},
  [256] = {.lex_state = 44, .external_lex_state = 6},
  [257] = {.lex_state = 44, .external_lex_state = 6},
  [258] = {.lex_state = 44, .external_lex_state = 6},
  [259] = {.lex_state = 44, .external_lex_state = 6},
  [260] = {.lex_state = 44, .external_lex_state = 5},
  [261] = {.lex_state = 44, .external_lex_state = 6},
  [262] = {.lex_state = 44, .external_lex_state = 6},
  [263] = {.lex_state = 44, .external_lex_state = 5},
  [264] = {.lex_state = 44, .external_lex_state = 5},
  [265] = {.lex_state = 44, .external_lex_state = 5},
  [266] = {.lex_state = 44, .external_lex_state = 5},
  [267] = {.lex_state = 44, .external_lex_state = 5},
  [268] = {.lex_state = 44, .external_lex_state = 5},
  [269] = {.lex_state = 44, .external_lex_state = 5},
  [270] = {.lex_state = 44, .external_lex_state = 6},
  [271] = {.lex_state = 44, .external_lex_state = 5},
  [272] = {.lex_state = 44, .external_lex_state = 6},
  [273] = {.lex_state = 44, .external_lex_state = 5},
  [274] = {.lex_state = 44, .external_lex_state = 2},
  [275] = {.lex_state = 44, .external_lex_state = 2},
  [276] = {.lex_state = 44, .external_lex_state = 2},
  [277] = {.lex_state = 44, .external_lex_state = 2},
  [278] = {.lex_state = 44, .external_lex_state = 2},
  [279] = {.lex_state = 44, .external_lex_state = 5},
  [280] = {.lex_state = 44, .external_lex_state = 2},
  [281] = {.lex_state = 44, .external_lex_state = 2},
  [282] = {.lex_state = 44, .external_lex_state = 2},
  [283] = {.lex_state = 42, .external_lex_state = 2},
  [284] = {.lex_state = 44, .external_lex_state = 2},
  [285] = {.lex_state = 44, .external_lex_state = 2},
  [286] = {.lex_state = 53, .external_lex_state = 5},
  [287] = {.lex_state = 53, .external_lex_state = 6},
  [288] = {.lex_state = 53, .external_lex_state = 6},
  [289] = {.lex_state = 45, .external_lex_state = 6},
  [290] = {.lex_state = 53, .external_lex_state = 6},
  [291] = {.lex_state = 45, .external_lex_state = 6},
  [292] = {.lex_state = 53, .external_lex_state = 6},
  [293] = {.lex_state = 53, .external_lex_state = 6},
  [294] = {.lex_state = 53, .external_lex_state = 6},
  [295] = {.lex_state = 53, .external_lex_state = 5},
  [296] = {.lex_state = 53, .external_lex_state = 6},
  [297] = {.lex_state = 53, .external_lex_state = 6},
  [298] = {.lex_state = 53, .external_lex_state = 6},
  [299] = {.lex_state = 53, .external_lex_state = 5},
  [300] = {.lex_state = 53, .external_lex_state = 6},
  [301] = {.lex_state = 53, .external_lex_state = 2},
  [302] = {.lex_state = 53, .external_lex_state = 6},
  [303] = {.lex_state = 53, .external_lex_state = 6},
  [304] = {.lex_state = 53, .external_lex_state = 6},
  [305] = {.lex_state = 45, .external_lex_state = 6},
  [306] = {.lex_state = 53, .external_lex_state = 2},
  [307] = {.lex_state = 53, .external_lex_state = 8},
  [308] = {.lex_state = 53, .external_lex_state = 2},
  [309] = {.lex_state = 53, .external_lex_state = 2},
  [310] = {.lex_state = 53, .external_lex_state = 2},
  [311] = {.lex_state = 53, .external_lex_state = 2},
  [312] = {.lex_state = 53, .external_lex_state = 2},
  [313] = {.lex_state = 53, .external_lex_state = 5},
  [314] = {.lex_state = 53, .external_lex_state = 2},
  [315] = {.lex_state = 53, .external_lex_state = 5},
  [316] = {.lex_state = 53, .external_lex_state = 5},
  [317] = {.lex_state = 42, .external_lex_state = 7},
  [318] = {.lex_state = 53, .external_lex_state = 8},
  [319] = {.lex_state = 53, .external_lex_state = 2},
  [320] = {.lex_state = 53, .external_lex_state = 2},
  [321] = {.lex_state = 53, .external_lex_state = 8},
  [322] = {.lex_state = 53, .external_lex_state = 2},
  [323] = {.lex_state = 53, .external_lex_state = 5},
  [324] = {.lex_state = 42, .external_lex_state = 7},
  [325] = {.lex_state = 53, .external_lex_state = 2},
  [326] = {.lex_state = 53, .external_lex_state = 5},
  [327] = {.lex_state = 42, .external_lex_state = 2},
  [328] = {.lex_state = 53, .external_lex_state = 5},
  [329] = {.lex_state = 53, .external_lex_state = 2},
  [330] = {.lex_state = 53, .external_lex_state = 8},
  [331] = {.lex_state = 53, .external_lex_state = 8},
  [332] = {.lex_state = 53, .external_lex_state = 6},
  [333] = {.lex_state = 53, .external_lex_state = 6},
  [334] = {.lex_state = 53, .external_lex_state = 5},
  [335] = {.lex_state = 53, .external_lex_state = 2},
  [336] = {.lex_state = 53, .external_lex_state = 5},
  [337] = {.lex_state = 53, .external_lex_state = 2},
  [338] = {.lex_state = 53, .external_lex_state = 5},
  [339] = {.lex_state = 53, .external_lex_state = 6},
  [340] = {.lex_state = 53, .external_lex_state = 8},
  [341] = {.lex_state = 53, .external_lex_state = 2},
  [342] = {.lex_state = 42, .external_lex_state = 6},
  [343] = {.lex_state = 53, .external_lex_state = 2},
  [344] = {.lex_state = 53, .external_lex_state = 8},
  [345] = {.lex_state = 53, .external_lex_state = 8},
  [346] = {.lex_state = 53, .external_lex_state = 6},
  [347] = {.lex_state = 53, .external_lex_state = 6},
  [348] = {.lex_state = 53, .external_lex_state = 6},
  [349] = {.lex_state = 53, .external_lex_state = 5},
  [350] = {.lex_state = 53, .external_lex_state = 6},
  [351] = {.lex_state = 42, .external_lex_state = 2},
  [352] = {.lex_state = 53, .external_lex_state = 2},
  [353] = {.lex_state = 53, .external_lex_state = 5},
  [354] = {.lex_state = 53, .external_lex_state = 6},
  [355] = {.lex_state = 53, .external_lex_state = 5},
  [356] = {.lex_state = 53, .external_lex_state = 2},
  [357] = {.lex_state = 53, .external_lex_state = 6},
  [358] = {.lex_state = 42, .external_lex_state = 2},
  [359] = {.lex_state = 53, .external_lex_state = 2},
  [360] = {.lex_state = 42, .external_lex_state = 5},
  [361] = {.lex_state = 53, .external_lex_state = 2},
  [362] = {.lex_state = 53, .external_lex_state = 5},
  [363] = {.lex_state = 53, .external_lex_state = 5},
  [364] = {.lex_state = 53, .external_lex_state = 6},
  [365] = {.lex_state = 53, .external_lex_state = 8},
  [366] = {.lex_state = 53, .external_lex_state = 2},
  [367] = {.lex_state = 53, .external_lex_state = 8},
  [368] = {.lex_state = 53, .external_lex_state = 6},
  [369] = {.lex_state = 53, .external_lex_state = 6},
  [370] = {.lex_state = 42, .external_lex_state = 7},
  [371] = {.lex_state = 42, .external_lex_state = 7},
  [372] = {.lex_state = 53, .external_lex_state = 6},
  [373] = {.lex_state = 42, .external_lex_state = 2},
  [374] = {.lex_state = 53, .external_lex_state = 6},
  [375] = {.lex_state = 42, .external_lex_state = 7},
  [376] = {.lex_state = 53, .external_lex_state = 6},
  [377] = {.lex_state = 53, .external_lex_state = 8},
  [378] = {.lex_state = 53, .external_lex_state = 2},
  [379] = {.lex_state = 53, .external_lex_state = 5},
  [380] = {.lex_state = 42, .external_lex_state = 7},
  [381] = {.lex_state = 53, .external_lex_state = 6},
  [382] = {.lex_state = 53, .external_lex_state = 5},
  [383] = {.lex_state = 53, .external_lex_state = 2},
  [384] = {.lex_state = 42, .external_lex_state = 6},
  [385] = {.lex_state = 53, .external_lex_state = 5},
  [386] = {.lex_state = 53, .external_lex_state = 6},
  [387] = {.lex_state = 53, .external_lex_state = 6},
  [388] = {.lex_state = 53, .external_lex_state = 5},
  [389] = {.lex_state = 53, .external_lex_state = 6},
  [390] = {.lex_state = 42, .external_lex_state = 2},
  [391] = {.lex_state = 42, .external_lex_state = 2},
  [392] = {.lex_state = 53, .external_lex_state = 2},
  [393] = {.lex_state = 53, .external_lex_state = 6},
  [394] = {.lex_state = 42, .external_lex_state = 6},
  [395] = {.lex_state = 53, .external_lex_state = 6},
  [396] = {.lex_state = 53, .external_lex_state = 5},
  [397] = {.lex_state = 53, .external_lex_state = 5},
  [398] = {.lex_state = 53, .external_lex_state = 5},
  [399] = {.lex_state = 53, .external_lex_state = 6},
  [400] = {.lex_state = 53, .external_lex_state = 2},
  [401] = {.lex_state = 53, .external_lex_state = 6},
  [402] = {.lex_state = 53, .external_lex_state = 6},
  [403] = {.lex_state = 42, .external_lex_state = 2},
  [404] = {.lex_state = 53, .external_lex_state = 3},
  [405] = {.lex_state = 46, .external_lex_state = 2},
  [406] = {.lex_state = 53, .external_lex_state = 5},
  [407] = {.lex_state = 53, .external_lex_state = 6},
  [408] = {.lex_state = 53, .external_lex_state = 6},
  [409] = {.lex_state = 42, .external_lex_state = 2},
  [410] = {.lex_state = 53, .external_lex_state = 9},
  [411] = {.lex_state = 53, .external_lex_state = 9},
  [412] = {.lex_state = 53, .external_lex_state = 9},
  [413] = {.lex_state = 42, .external_lex_state = 2},
  [414] = {.lex_state = 42, .external_lex_state = 2},
  [415] = {.lex_state = 53, .external_lex_state = 9},
  [416] = {.lex_state = 42, .external_lex_state = 2},
  [417] = {.lex_state = 53, .external_lex_state = 9},
  [418] = {.lex_state = 53, .external_lex_state = 9},
  [419] = {.lex_state = 53, .external_lex_state = 9},
  [420] = {.lex_state = 42, .external_lex_state = 2},
  [421] = {.lex_state = 53, .external_lex_state = 6},
  [422] = {.lex_state = 53, .external_lex_state = 6},
  [423] = {.lex_state = 53, .external_lex_state = 9},
  [424] = {.lex_state = 42, .external_lex_state = 2},
  [425] = {.lex_state = 53, .external_lex_state = 9},
  [426] = {.lex_state = 53, .external_lex_state = 9},
  [427] = {.lex_state = 42, .external_lex_state = 2},
  [428] = {.lex_state = 42, .external_lex_state = 2},
  [429] = {.lex_state = 53, .external_lex_state = 9},
  [430] = {.lex_state = 53, .external_lex_state = 2},
  [431] = {.lex_state = 53, .external_lex_state = 9},
  [432] = {.lex_state = 53, .external_lex_state = 9},
  [433] = {.lex_state = 53, .external_lex_state = 5},
  [434] = {.lex_state = 53, .external_lex_state = 9},
  [435] = {.lex_state = 53, .external_lex_state = 5},
  [436] = {.lex_state = 53, .external_lex_state = 9},
  [437] = {.lex_state = 53, .external_lex_state = 2},
  [438] = {.lex_state = 53, .external_lex_state = 9},
  [439] = {.lex_state = 53, .external_lex_state = 9},
  [440] = {.lex_state = 42, .external_lex_state = 2},
  [441] = {.lex_state = 53, .external_lex_state = 9},
  [442] = {.lex_state = 53, .external_lex_state = 9},
  [443] = {.lex_state = 42, .external_lex_state = 2},
  [444] = {.lex_state = 53, .external_lex_state = 2},
  [445] = {.lex_state = 42, .external_lex_state = 2},
  [446] = {.lex_state = 53, .external_lex_state = 9},
  [447] = {.lex_state = 42, .external_lex_state = 2},
  [448] = {.lex_state = 53, .external_lex_state = 9},
  [449] = {.lex_state = 53, .external_lex_state = 9},
  [450] = {.lex_state = 53, .external_lex_state = 9},
  [451] = {.lex_state = 53, .external_lex_state = 9},
  [452] = {.lex_state = 53, .external_lex_state = 6},
  [453] = {.lex_state = 53, .external_lex_state = 2},
  [454] = {.lex_state = 42, .external_lex_state = 2},
  [455] = {.lex_state = 42, .external_lex_state = 2},
  [456] = {.lex_state = 53, .external_lex_state = 9},
  [457] = {.lex_state = 53, .external_lex_state = 2},
  [458] = {.lex_state = 53, .external_lex_state = 9},
  [459] = {.lex_state = 53, .external_lex_state = 9},
  [460] = {.lex_state = 42, .external_lex_state = 2},
  [461] = {.lex_state = 53, .external_lex_state = 9},
  [462] = {.lex_state = 53, .external_lex_state = 9},
  [463] = {.lex_state = 53, .external_lex_state = 6},
  [464] = {.lex_state = 53, .external_lex_state = 9},
  [465] = {.lex_state = 42, .external_lex_state = 2},
  [466] = {.lex_state = 53, .external_lex_state = 6},
  [467] = {.lex_state = 42, .external_lex_state = 2},
  [468] = {.lex_state = 53, .external_lex_state = 6},
  [469] = {.lex_state = 42, .external_lex_state = 2},
  [470] = {.lex_state = 53, .external_lex_state = 2},
  [471] = {.lex_state = 42, .external_lex_state = 2},
  [472] = {.lex_state = 42, .external_lex_state = 2},
  [473] = {.lex_state = 42, .external_lex_state = 2},
  [474] = {.lex_state = 53, .external_lex_state = 2},
  [475] = {.lex_state = 42, .external_lex_state = 2},
  [476] = {.lex_state = 53, .external_lex_state = 2},
  [477] = {.lex_state = 53, .external_lex_state = 6},
  [478] = {.lex_state = 42, .external_lex_state = 2},
  [479] = {.lex_state = 42, .external_lex_state = 2},
  [480] = {.lex_state = 42, .external_lex_state = 2},
  [481] = {.lex_state = 53, .external_lex_state = 2},
  [482] = {.lex_state = 53, .external_lex_state = 9},
  [483] = {.lex_state = 53, .external_lex_state = 2},
  [484] = {.lex_state = 53, .external_lex_state = 9},
  [485] = {.lex_state = 53, .external_lex_state = 9},
  [486] = {.lex_state = 53, .external_lex_state = 2},
  [487] = {.lex_state = 42, .external_lex_state = 2},
  [488] = {.lex_state = 42, .external_lex_state = 2},
  [489] = {.lex_state = 53, .external_lex_state = 9},
  [490] = {.lex_state = 42, .external_lex_state = 2},
  [491] = {.lex_state = 42, .external_lex_state = 2},
  [492] = {.lex_state = 42, .external_lex_state = 2},
  [493] = {.lex_state = 53, .external_lex_state = 6},
  [494] = {.lex_state = 53, .external_lex_state = 2},
  [495] = {.lex_state = 46, .external_lex_state = 2},
  [496] = {.lex_state = 42, .external_lex_state = 2},
  [497] = {.lex_state = 42, .external_lex_state = 2},
  [498] = {.lex_state = 42, .external_lex_state = 2},
  [499] = {.lex_state = 53, .external_lex_state = 2},
  [500] = {.lex_state = 42, .external_lex_state = 2},
  [501] = {.lex_state = 53, .external_lex_state = 2},
  [502] = {.lex_state = 53, .external_lex_state = 2},
  [503] = {.lex_state = 53, .external_lex_state = 2},
  [504] = {.lex_state = 53, .external_lex_state = 10},
  [505] = {.lex_state = 53, .external_lex_state = 6},
  [506] = {.lex_state = 53, .external_lex_state = 9},
  [507] = {.lex_state = 42, .external_lex_state = 2},
  [508] = {.lex_state = 42, .external_lex_state = 2},
  [509] = {.lex_state = 53, .external_lex_state = 9},
  [510] = {.lex_state = 53, .external_lex_state = 2},
  [511] = {.lex_state = 53, .external_lex_state = 2},
  [512] = {.lex_state = 53, .external_lex_state = 2},
  [513] = {.lex_state = 42, .external_lex_state = 2},
  [514] = {.lex_state = 42, .external_lex_state = 2},
  [515] = {.lex_state = 53, .external_lex_state = 2},
  [516] = {.lex_state = 42, .external_lex_state = 2},
  [517] = {.lex_state = 42, .external_lex_state = 2},
  [518] = {.lex_state = 53, .external_lex_state = 2},
  [519] = {.lex_state = 53, .external_lex_state = 2},
  [520] = {.lex_state = 53, .external_lex_state = 2},
  [521] = {.lex_state = 42, .external_lex_state = 2},
  [522] = {.lex_state = 42, .external_lex_state = 2},
  [523] = {.lex_state = 53, .external_lex_state = 2},
  [524] = {.lex_state = 53, .external_lex_state = 2},
  [525] = {.lex_state = 42, .external_lex_state = 2},
  [526] = {.lex_state = 53, .external_lex_state = 2},
  [527] = {.lex_state = 42, .external_lex_state = 2},
  [528] = {.lex_state = 53, .external_lex_state = 6},
  [529] = {.lex_state = 42, .external_lex_state = 2},
  [530] = {.lex_state = 53, .external_lex_state = 2},
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
  },
  [4] = {
    [ts_external_token_string_start] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [5] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
  },
  [6] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
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
    [sym__not_escape_sequence] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [sym__decimal] = ACTIONS(1),
    [sym__octal] = ACTIONS(1),
    [sym__binary] = ACTIONS(1),
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
    [sym_source] = STATE(511),
    [sym_import] = STATE(116),
    [sym_const] = STATE(146),
    [sym_record] = STATE(150),
    [sym_trait] = STATE(150),
    [sym_enum] = STATE(150),
    [sym_fn] = STATE(150),
    [sym_decorator] = STATE(510),
    [sym_test] = STATE(150),
    [aux_sym_source_repeat1] = STATE(116),
    [aux_sym_source_repeat2] = STATE(146),
    [aux_sym_source_repeat3] = STATE(150),
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
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(17), 1,
      sym_primary_expression,
    STATE(225), 1,
      sym_expression,
    STATE(379), 1,
      sym_key_value,
    STATE(474), 1,
      sym__named_expression_lhs,
    STATE(502), 1,
      sym_symbol,
    STATE(503), 1,
      sym_key,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [72] = 18,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(17), 1,
      sym_primary_expression,
    STATE(213), 1,
      sym_expression,
    STATE(328), 1,
      sym_key_value,
    STATE(474), 1,
      sym__named_expression_lhs,
    STATE(502), 1,
      sym_symbol,
    STATE(503), 1,
      sym_key,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [144] = 18,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(17), 1,
      sym_primary_expression,
    STATE(232), 1,
      sym_expression,
    STATE(338), 1,
      sym_key_value,
    STATE(474), 1,
      sym__named_expression_lhs,
    STATE(502), 1,
      sym_symbol,
    STATE(503), 1,
      sym_key,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [216] = 18,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(17), 1,
      sym_primary_expression,
    STATE(221), 1,
      sym_expression,
    STATE(362), 1,
      sym_key_value,
    STATE(474), 1,
      sym__named_expression_lhs,
    STATE(502), 1,
      sym_symbol,
    STATE(503), 1,
      sym_key,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [288] = 18,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(17), 1,
      sym_primary_expression,
    STATE(214), 1,
      sym_expression,
    STATE(316), 1,
      sym_key_value,
    STATE(474), 1,
      sym__named_expression_lhs,
    STATE(502), 1,
      sym_symbol,
    STATE(503), 1,
      sym_key,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [360] = 17,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    STATE(18), 1,
      sym_primary_expression,
    STATE(220), 1,
      sym_expression,
    STATE(393), 1,
      sym_keyword_argument,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [429] = 17,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      sym_primary_expression,
    STATE(210), 1,
      sym_expression,
    STATE(348), 1,
      sym_keyword_argument,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [498] = 17,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      sym_primary_expression,
    STATE(194), 1,
      sym_expression,
    STATE(333), 1,
      sym_keyword_argument,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [567] = 16,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_primary_expression,
    STATE(246), 1,
      sym_expression,
    STATE(463), 1,
      sym_keyword_argument,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [633] = 16,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_primary_expression,
    STATE(246), 1,
      sym_expression,
    STATE(463), 1,
      sym_keyword_argument,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [699] = 16,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_primary_expression,
    STATE(246), 1,
      sym_expression,
    STATE(463), 1,
      sym_keyword_argument,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [765] = 16,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_primary_expression,
    STATE(246), 1,
      sym_expression,
    STATE(463), 1,
      sym_keyword_argument,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [831] = 16,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_primary_expression,
    STATE(246), 1,
      sym_expression,
    STATE(463), 1,
      sym_keyword_argument,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [897] = 16,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_primary_expression,
    STATE(246), 1,
      sym_expression,
    STATE(463), 1,
      sym_keyword_argument,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [963] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(91), 1,
      anon_sym_EQ_GT,
    ACTIONS(85), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [1008] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_STAR_STAR,
    ACTIONS(111), 1,
      anon_sym_CARET,
    STATE(79), 1,
      sym_argument_list,
    STATE(154), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(105), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(113), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(117), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(97), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1075] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_AMP,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 1,
      anon_sym_CARET,
    STATE(83), 1,
      sym_argument_list,
    STATE(152), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(133), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(137), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(97), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1142] = 15,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    STATE(18), 1,
      sym_primary_expression,
    STATE(246), 1,
      sym_expression,
    STATE(463), 1,
      sym_keyword_argument,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1205] = 15,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(271), 1,
      sym_expression,
    STATE(433), 1,
      sym_value,
    STATE(474), 1,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(145), 1,
      anon_sym_COLON,
    ACTIONS(85), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [1313] = 14,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(65), 1,
      sym_primary_expression,
    STATE(274), 1,
      sym_expression,
    STATE(476), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(278), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1373] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_AMP,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 1,
      anon_sym_CARET,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(133), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(137), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1435] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_STAR_STAR,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(167), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 18,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1483] = 14,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(279), 1,
      sym_expression,
    STATE(474), 1,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1543] = 14,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(18), 1,
      sym_primary_expression,
    STATE(252), 1,
      sym_expression,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1603] = 14,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(18), 1,
      sym_primary_expression,
    STATE(251), 1,
      sym_expression,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1663] = 14,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(18), 1,
      sym_primary_expression,
    STATE(250), 1,
      sym_expression,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1723] = 14,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(18), 1,
      sym_primary_expression,
    STATE(259), 1,
      sym_expression,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [1783] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_STAR_STAR,
    ACTIONS(111), 1,
      anon_sym_CARET,
    STATE(79), 1,
      sym_argument_list,
    ACTIONS(105), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(113), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 11,
      anon_sym_COMMA,
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
  [1845] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_STAR_STAR,
    STATE(79), 1,
      sym_argument_list,
    ACTIONS(105), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 14,
      anon_sym_COMMA,
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
  [1899] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_STAR_STAR,
    STATE(79), 1,
      sym_argument_list,
    ACTIONS(105), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(113), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 12,
      anon_sym_COMMA,
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
  [1955] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_STAR_STAR,
    STATE(79), 1,
      sym_argument_list,
    ACTIONS(175), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 18,
      anon_sym_COMMA,
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
  [2003] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_STAR_STAR,
    STATE(79), 1,
      sym_argument_list,
    ACTIONS(109), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 16,
      anon_sym_COMMA,
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
  [2055] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_STAR_STAR,
    ACTIONS(111), 1,
      anon_sym_CARET,
    STATE(79), 1,
      sym_argument_list,
    ACTIONS(105), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(113), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 11,
      anon_sym_COMMA,
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
  [2115] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_STAR_STAR,
    ACTIONS(111), 1,
      anon_sym_CARET,
    STATE(79), 1,
      sym_argument_list,
    ACTIONS(105), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(113), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 11,
      anon_sym_COMMA,
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
  [2173] = 14,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(65), 1,
      sym_primary_expression,
    STATE(281), 1,
      sym_expression,
    STATE(476), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(278), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2233] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_STAR_STAR,
    STATE(79), 1,
      sym_argument_list,
    ACTIONS(175), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 18,
      anon_sym_COMMA,
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
  [2281] = 14,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(260), 1,
      sym_expression,
    STATE(474), 1,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2341] = 14,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(18), 1,
      sym_primary_expression,
    STATE(258), 1,
      sym_expression,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2401] = 14,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(273), 1,
      sym_expression,
    STATE(474), 1,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2461] = 14,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(65), 1,
      sym_primary_expression,
    STATE(277), 1,
      sym_expression,
    STATE(476), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(278), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2521] = 14,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(18), 1,
      sym_primary_expression,
    STATE(272), 1,
      sym_expression,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2581] = 14,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(18), 1,
      sym_primary_expression,
    STATE(261), 1,
      sym_expression,
    STATE(481), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(270), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2641] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(85), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [2683] = 14,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(65), 1,
      sym_primary_expression,
    STATE(276), 1,
      sym_expression,
    STATE(476), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(278), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2743] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_STAR_STAR,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(133), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2797] = 14,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(65), 1,
      sym_primary_expression,
    STATE(275), 1,
      sym_expression,
    STATE(476), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(278), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2857] = 14,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(65), 1,
      sym_primary_expression,
    STATE(285), 1,
      sym_expression,
    STATE(476), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(278), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [2917] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_STAR_STAR,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(133), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(137), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(119), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 12,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2973] = 14,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(244), 1,
      sym_expression,
    STATE(474), 1,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3033] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_STAR_STAR,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(175), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 18,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(85), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [3123] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_STAR_STAR,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(133), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(119), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3175] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_STAR_STAR,
    STATE(79), 1,
      sym_argument_list,
    ACTIONS(167), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 18,
      anon_sym_COMMA,
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
  [3223] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 1,
      anon_sym_CARET,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(133), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(137), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(119), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3281] = 14,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(65), 1,
      sym_primary_expression,
    STATE(284), 1,
      sym_expression,
    STATE(476), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(278), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3341] = 14,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(248), 1,
      sym_expression,
    STATE(474), 1,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3401] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_STAR_STAR,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(175), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 18,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3449] = 14,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(65), 1,
      sym_primary_expression,
    STATE(282), 1,
      sym_expression,
    STATE(476), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(278), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3509] = 14,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(263), 1,
      sym_expression,
    STATE(474), 1,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3569] = 14,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(264), 1,
      sym_expression,
    STATE(474), 1,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3629] = 14,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primary_expression,
    STATE(265), 1,
      sym_expression,
    STATE(474), 1,
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
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(269), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3689] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_AMP,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_STAR_STAR,
    ACTIONS(135), 1,
      anon_sym_CARET,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(133), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(137), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(119), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3749] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_AMP,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(193), 1,
      anon_sym_CARET,
    STATE(110), 1,
      sym_argument_list,
    STATE(161), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(187), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(197), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(97), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(199), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [3815] = 14,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(65), 1,
      sym_primary_expression,
    STATE(280), 1,
      sym_expression,
    STATE(476), 1,
      sym__named_expression_lhs,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
    STATE(278), 7,
      sym_named_expression,
      sym_as_pattern,
      sym_not_operator,
      sym_boolean_operator,
      sym_comparison_operator,
      sym_lambda,
      sym_conditional_expression,
  [3875] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    STATE(110), 1,
      sym_argument_list,
    ACTIONS(175), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 17,
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
  [3922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(201), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [3961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(205), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(207), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(209), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(211), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4039] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    STATE(110), 1,
      sym_argument_list,
    ACTIONS(167), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 17,
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
  [4086] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_AMP,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(193), 1,
      anon_sym_CARET,
    STATE(110), 1,
      sym_argument_list,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(177), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 10,
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
  [4147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(85), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(85), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 20,
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(213), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(217), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(85), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(221), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(225), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4422] = 4,
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
    ACTIONS(231), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4461] = 4,
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
    ACTIONS(235), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4500] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    STATE(110), 1,
      sym_argument_list,
    ACTIONS(187), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(177), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 13,
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
  [4553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(225), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(205), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(207), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4631] = 4,
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
    ACTIONS(235), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4670] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    STATE(110), 1,
      sym_argument_list,
    ACTIONS(187), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(177), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 11,
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
  [4725] = 4,
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
    ACTIONS(239), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4764] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    STATE(110), 1,
      sym_argument_list,
    ACTIONS(191), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(177), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 15,
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
  [4815] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    STATE(110), 1,
      sym_argument_list,
    ACTIONS(175), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 17,
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
  [4862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(201), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4901] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(193), 1,
      anon_sym_CARET,
    STATE(110), 1,
      sym_argument_list,
    ACTIONS(187), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(175), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(173), 10,
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
  [4960] = 4,
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
    ACTIONS(243), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [4999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(245), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(213), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(217), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5116] = 4,
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
    ACTIONS(239), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5155] = 4,
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
    ACTIONS(243), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5194] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(193), 1,
      anon_sym_CARET,
    STATE(110), 1,
      sym_argument_list,
    ACTIONS(187), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(177), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 10,
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
  [5251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(245), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(209), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(211), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(221), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5368] = 4,
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
    ACTIONS(231), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(205), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(207), 20,
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(245), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 20,
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(201), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 20,
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(221), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 20,
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5559] = 4,
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
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5597] = 4,
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
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5635] = 4,
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
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(225), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 20,
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(213), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 20,
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(217), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 20,
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(209), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(211), 20,
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_line_continuation,
    ACTIONS(85), 7,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 20,
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5863] = 4,
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
      anon_sym_LPAREN,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
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
  [5901] = 14,
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
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(147), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(170), 2,
      sym_import,
      aux_sym_source_repeat1,
    STATE(158), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [5952] = 14,
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
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(118), 2,
      sym_import,
      aux_sym_source_repeat1,
    STATE(149), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(157), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [6003] = 14,
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
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(148), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(170), 2,
      sym_import,
      aux_sym_source_repeat1,
    STATE(153), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [6054] = 8,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(82), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6091] = 8,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    STATE(54), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6128] = 8,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(36), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6165] = 8,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    STATE(47), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6202] = 8,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(35), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6239] = 8,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(72), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6276] = 8,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(34), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6313] = 8,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(33), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6350] = 8,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(55), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6387] = 8,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(32), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6424] = 8,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    STATE(23), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6461] = 8,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(31), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6498] = 8,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(30), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6535] = 8,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_string_start,
    STATE(38), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(73), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6572] = 8,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    STATE(24), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6609] = 8,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(86), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6646] = 8,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(67), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6683] = 8,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(88), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6720] = 8,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(91), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6757] = 8,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    STATE(59), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6794] = 8,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    STATE(52), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6831] = 8,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    STATE(56), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6868] = 8,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    STATE(50), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6905] = 8,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(98), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6942] = 8,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(71), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [6979] = 8,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_float,
    ACTIONS(161), 1,
      sym_string_start,
    STATE(89), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(114), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [7016] = 8,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_string_start,
    STATE(64), 1,
      sym_primary_expression,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 5,
      sym_integer,
      sym_identifier,
      sym_true,
      sym_false,
      sym_nil,
    STATE(77), 7,
      sym_binary_operator,
      sym_unary_operator,
      sym_attribute,
      sym_call,
      sym_string,
      sym_list,
      sym_map,
  [7053] = 12,
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
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(173), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(158), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7097] = 12,
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
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(173), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(157), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7141] = 12,
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
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(173), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(155), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7185] = 12,
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
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(173), 2,
      sym_const,
      aux_sym_source_repeat2,
    STATE(153), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7229] = 10,
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
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(151), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7266] = 10,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 1,
      anon_sym_record,
    ACTIONS(262), 1,
      anon_sym_trait,
    ACTIONS(265), 1,
      anon_sym_fn,
    ACTIONS(268), 1,
      anon_sym_enum,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      anon_sym_test,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(151), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7303] = 5,
    STATE(159), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(277), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7330] = 10,
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
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(151), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7367] = 5,
    STATE(156), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(277), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7394] = 10,
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
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(151), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7431] = 5,
    STATE(156), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(283), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(281), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7458] = 10,
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
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(151), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7495] = 10,
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
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(510), 1,
      sym_decorator,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(151), 6,
      sym_record,
      sym_trait,
      sym_enum,
      sym_fn,
      sym_test,
      aux_sym_source_repeat3,
  [7532] = 5,
    STATE(159), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(281), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7559] = 5,
    STATE(160), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(295), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(281), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(298), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [7585] = 5,
    STATE(160), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(197), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(277), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7611] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(301), 12,
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
  [7630] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(303), 12,
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
  [7649] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 12,
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
  [7668] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(307), 12,
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
  [7687] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(309), 12,
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
  [7706] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(311), 12,
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
  [7725] = 4,
    ACTIONS(315), 1,
      anon_sym_SLASH,
    STATE(168), 1,
      aux_sym_url_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(313), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [7747] = 4,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    STATE(168), 1,
      aux_sym_url_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(318), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [7769] = 4,
    ACTIONS(324), 1,
      anon_sym_import,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(170), 2,
      sym_import,
      aux_sym_source_repeat1,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [7791] = 4,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      aux_sym_url_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [7813] = 4,
    ACTIONS(331), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(172), 2,
      sym_enum_field,
      aux_sym_enum_repeat1,
    ACTIONS(329), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [7834] = 4,
    ACTIONS(336), 1,
      sym_const_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(173), 2,
      sym_const,
      aux_sym_source_repeat2,
    ACTIONS(334), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [7855] = 7,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      sym_integer,
    ACTIONS(345), 1,
      sym_string_start,
    STATE(188), 1,
      sym_const_literal,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(343), 3,
      sym_float,
      sym_true,
      sym_false,
    STATE(190), 3,
      sym_string,
      sym_list,
      sym_map,
  [7882] = 3,
    ACTIONS(347), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(313), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [7901] = 4,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(177), 2,
      sym_enum_field,
      aux_sym_enum_repeat1,
    ACTIONS(349), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [7922] = 4,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(172), 2,
      sym_enum_field,
      aux_sym_enum_repeat1,
    ACTIONS(353), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [7943] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(355), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [7959] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(357), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [7975] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(359), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
  [7990] = 6,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(365), 1,
      sym_doc_comment,
    ACTIONS(367), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(209), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8013] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [8028] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [8043] = 6,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(369), 1,
      sym_doc_comment,
    ACTIONS(371), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(208), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8066] = 6,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(373), 1,
      sym_doc_comment,
    ACTIONS(375), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(198), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8089] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(239), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [8104] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(215), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [8119] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(377), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [8134] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(247), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [8149] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(379), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [8164] = 6,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(381), 1,
      sym_doc_comment,
    ACTIONS(383), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(200), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8187] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(385), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_test,
  [8202] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(219), 8,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
      sym_const_identifier,
  [8217] = 8,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_if,
    ACTIONS(393), 1,
      anon_sym_as,
    ACTIONS(395), 1,
      anon_sym_AMP_AMP,
    ACTIONS(397), 1,
      anon_sym_PIPE_PIPE,
    STATE(332), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [8243] = 6,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    ACTIONS(403), 1,
      sym_integer,
    STATE(436), 1,
      sym_range_value,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(506), 3,
      sym_reference,
      sym_list,
      sym_map,
  [8265] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(405), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8279] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(407), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8293] = 5,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(409), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(238), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8313] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(411), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8327] = 5,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(413), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(238), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8347] = 5,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(413), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(205), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8367] = 5,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(415), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(238), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8387] = 5,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(417), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(238), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8407] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(419), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8421] = 5,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(421), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(238), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8441] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(423), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8455] = 5,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(425), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(237), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8475] = 5,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(425), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(238), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8495] = 5,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(427), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(238), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8515] = 8,
    ACTIONS(391), 1,
      anon_sym_if,
    ACTIONS(393), 1,
      anon_sym_as,
    ACTIONS(395), 1,
      anon_sym_AMP_AMP,
    ACTIONS(397), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [8541] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(433), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8555] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(435), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8569] = 8,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_RBRACK,
    ACTIONS(441), 1,
      anon_sym_if,
    ACTIONS(443), 1,
      anon_sym_as,
    ACTIONS(445), 1,
      anon_sym_AMP_AMP,
    ACTIONS(447), 1,
      anon_sym_PIPE_PIPE,
    STATE(326), 1,
      aux_sym_assert_statement_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [8595] = 8,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_if,
    ACTIONS(443), 1,
      anon_sym_as,
    ACTIONS(445), 1,
      anon_sym_AMP_AMP,
    ACTIONS(447), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    STATE(315), 1,
      aux_sym_assert_statement_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [8621] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(451), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8635] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(453), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8649] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(455), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8663] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(457), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8677] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(459), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8691] = 8,
    ACTIONS(391), 1,
      anon_sym_if,
    ACTIONS(393), 1,
      anon_sym_as,
    ACTIONS(395), 1,
      anon_sym_AMP_AMP,
    ACTIONS(397), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [8717] = 8,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_if,
    ACTIONS(443), 1,
      anon_sym_as,
    ACTIONS(445), 1,
      anon_sym_AMP_AMP,
    ACTIONS(447), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      aux_sym_assert_statement_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [8743] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(467), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8757] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(469), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8771] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(471), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8785] = 8,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_if,
    ACTIONS(443), 1,
      anon_sym_as,
    ACTIONS(445), 1,
      anon_sym_AMP_AMP,
    ACTIONS(447), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    STATE(398), 1,
      aux_sym_assert_statement_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [8811] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(475), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8825] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(477), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8839] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(479), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8853] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(481), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8867] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(483), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8881] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(485), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8895] = 8,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_if,
    ACTIONS(443), 1,
      anon_sym_as,
    ACTIONS(445), 1,
      anon_sym_AMP_AMP,
    ACTIONS(447), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      aux_sym_assert_statement_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [8921] = 5,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(427), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(203), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [8941] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(489), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8955] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(491), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8969] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(493), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [8983] = 5,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(495), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(238), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9003] = 5,
    ACTIONS(497), 1,
      anon_sym_pass,
    ACTIONS(500), 1,
      anon_sym_for,
    ACTIONS(503), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(238), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9023] = 5,
    ACTIONS(361), 1,
      anon_sym_pass,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(409), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(202), 4,
      sym__statement,
      sym_pass_statement,
      sym_for_statement,
      aux_sym_body_repeat1,
  [9043] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(505), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [9057] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(507), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [9071] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(509), 7,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_fn,
      anon_sym_enum,
      anon_sym_POUND,
      anon_sym_test,
  [9085] = 6,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    ACTIONS(403), 1,
      sym_integer,
    STATE(425), 1,
      sym_range_value,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(506), 3,
      sym_reference,
      sym_list,
      sym_map,
  [9107] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(511), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9120] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(303), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9133] = 6,
    ACTIONS(391), 1,
      anon_sym_if,
    ACTIONS(393), 1,
      anon_sym_as,
    ACTIONS(395), 1,
      anon_sym_AMP_AMP,
    ACTIONS(397), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(513), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9154] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(303), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9167] = 5,
    ACTIONS(445), 1,
      anon_sym_AMP_AMP,
    ACTIONS(447), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(517), 1,
      anon_sym_as,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(515), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
  [9186] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9199] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(520), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9212] = 4,
    ACTIONS(395), 1,
      anon_sym_AMP_AMP,
    ACTIONS(397), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(522), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
  [9229] = 5,
    ACTIONS(395), 1,
      anon_sym_AMP_AMP,
    ACTIONS(397), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(524), 1,
      anon_sym_as,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(515), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
  [9248] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(311), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9261] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(307), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9274] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(311), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9287] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(309), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9300] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9313] = 6,
    ACTIONS(391), 1,
      anon_sym_if,
    ACTIONS(393), 1,
      anon_sym_as,
    ACTIONS(395), 1,
      anon_sym_AMP_AMP,
    ACTIONS(397), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(527), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9334] = 3,
    ACTIONS(395), 1,
      anon_sym_AMP_AMP,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(520), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
  [9349] = 6,
    ACTIONS(441), 1,
      anon_sym_if,
    ACTIONS(443), 1,
      anon_sym_as,
    ACTIONS(445), 1,
      anon_sym_AMP_AMP,
    ACTIONS(447), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(529), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9370] = 6,
    ACTIONS(391), 1,
      anon_sym_if,
    ACTIONS(393), 1,
      anon_sym_as,
    ACTIONS(395), 1,
      anon_sym_AMP_AMP,
    ACTIONS(397), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(529), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9391] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(301), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9404] = 4,
    ACTIONS(445), 1,
      anon_sym_AMP_AMP,
    ACTIONS(447), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(522), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
  [9421] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(520), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9434] = 3,
    ACTIONS(445), 1,
      anon_sym_AMP_AMP,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(520), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
  [9449] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(301), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9462] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(309), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9475] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(307), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9488] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(97), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9501] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(97), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9514] = 6,
    ACTIONS(441), 1,
      anon_sym_if,
    ACTIONS(443), 1,
      anon_sym_as,
    ACTIONS(445), 1,
      anon_sym_AMP_AMP,
    ACTIONS(447), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(531), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9535] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(511), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_if,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9548] = 6,
    ACTIONS(441), 1,
      anon_sym_if,
    ACTIONS(443), 1,
      anon_sym_as,
    ACTIONS(445), 1,
      anon_sym_AMP_AMP,
    ACTIONS(447), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(533), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9569] = 5,
    ACTIONS(535), 1,
      anon_sym_as,
    ACTIONS(538), 1,
      anon_sym_AMP_AMP,
    ACTIONS(540), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(515), 2,
      anon_sym_if,
      anon_sym_else,
  [9587] = 3,
    ACTIONS(538), 1,
      anon_sym_AMP_AMP,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(520), 4,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
  [9601] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(511), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9613] = 6,
    ACTIONS(529), 1,
      anon_sym_else,
    ACTIONS(538), 1,
      anon_sym_AMP_AMP,
    ACTIONS(540), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(542), 1,
      anon_sym_if,
    ACTIONS(544), 1,
      anon_sym_as,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [9633] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(97), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9645] = 6,
    ACTIONS(441), 1,
      anon_sym_if,
    ACTIONS(443), 1,
      anon_sym_as,
    ACTIONS(445), 1,
      anon_sym_AMP_AMP,
    ACTIONS(447), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [9665] = 6,
    ACTIONS(538), 1,
      anon_sym_AMP_AMP,
    ACTIONS(540), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(542), 1,
      anon_sym_if,
    ACTIONS(544), 1,
      anon_sym_as,
    ACTIONS(548), 1,
      anon_sym_else,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [9685] = 6,
    ACTIONS(538), 1,
      anon_sym_AMP_AMP,
    ACTIONS(540), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(542), 1,
      anon_sym_if,
    ACTIONS(544), 1,
      anon_sym_as,
    ACTIONS(550), 1,
      anon_sym_else,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [9705] = 6,
    ACTIONS(538), 1,
      anon_sym_AMP_AMP,
    ACTIONS(540), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(542), 1,
      anon_sym_if,
    ACTIONS(544), 1,
      anon_sym_as,
    ACTIONS(552), 1,
      anon_sym_else,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [9725] = 6,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(554), 1,
      sym_identifier,
    STATE(435), 1,
      sym_key_value,
    STATE(502), 1,
      sym_symbol,
    STATE(503), 1,
      sym_key,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [9745] = 4,
    ACTIONS(538), 1,
      anon_sym_AMP_AMP,
    ACTIONS(540), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(522), 3,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
  [9761] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(520), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_as,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9773] = 4,
    ACTIONS(558), 1,
      anon_sym_AMP,
    STATE(286), 1,
      aux_sym_generic_type2_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(556), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9788] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(561), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [9803] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(565), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [9818] = 5,
    ACTIONS(567), 1,
      sym_identifier,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(571), 1,
      anon_sym_fn,
    STATE(294), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [9835] = 4,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    ACTIONS(575), 1,
      anon_sym_fn,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(292), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [9850] = 5,
    ACTIONS(567), 1,
      sym_identifier,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    ACTIONS(579), 1,
      anon_sym_fn,
    STATE(288), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [9867] = 4,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(583), 1,
      anon_sym_fn,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(292), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [9882] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(586), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [9897] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(588), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [9912] = 4,
    ACTIONS(592), 1,
      anon_sym_AMP,
    STATE(286), 1,
      aux_sym_generic_type2_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(590), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9927] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(594), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [9942] = 3,
    ACTIONS(598), 1,
      anon_sym_QMARK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(596), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_fn,
  [9955] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(600), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [9970] = 4,
    ACTIONS(592), 1,
      anon_sym_AMP,
    STATE(295), 1,
      aux_sym_generic_type2_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(602), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9985] = 4,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(604), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [10000] = 4,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(612), 2,
      anon_sym_PIPE,
      anon_sym_COLON_EQ,
  [10015] = 4,
    ACTIONS(575), 1,
      anon_sym_fn,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(292), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [10030] = 4,
    ACTIONS(575), 1,
      anon_sym_fn,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(302), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [10045] = 4,
    ACTIONS(575), 1,
      anon_sym_fn,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    STATE(290), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [10060] = 5,
    ACTIONS(567), 1,
      sym_identifier,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    ACTIONS(622), 1,
      anon_sym_fn,
    STATE(296), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10077] = 4,
    ACTIONS(624), 1,
      anon_sym_EQ,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10091] = 4,
    ACTIONS(628), 1,
      sym__string_content,
    ACTIONS(631), 1,
      sym_string_end,
    STATE(307), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10105] = 4,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    STATE(301), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10119] = 4,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_PIPE,
    STATE(308), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10133] = 4,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_PIPE,
    STATE(301), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10147] = 4,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_PIPE,
    STATE(310), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10161] = 4,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_EQ,
    STATE(343), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10175] = 4,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_RBRACK,
    STATE(382), 1,
      aux_sym_map_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10189] = 4,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_EQ,
    STATE(343), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10203] = 4,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_assert_statement_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10217] = 4,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_RBRACK,
    STATE(313), 1,
      aux_sym_map_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10231] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(655), 3,
      sym__dedent,
      anon_sym_pass,
      anon_sym_for,
  [10241] = 4,
    ACTIONS(657), 1,
      sym__string_content,
    ACTIONS(659), 1,
      sym_string_end,
    STATE(307), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10255] = 4,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_EQ,
    STATE(312), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10269] = 4,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_EQ,
    STATE(314), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10283] = 4,
    ACTIONS(665), 1,
      sym__string_content,
    ACTIONS(667), 1,
      sym_string_end,
    STATE(318), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10297] = 4,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    ACTIONS(671), 1,
      anon_sym_LBRACK,
    STATE(499), 1,
      sym_generic_list,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10311] = 4,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RBRACK,
    STATE(382), 1,
      aux_sym_map_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10325] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(675), 3,
      sym__dedent,
      anon_sym_pass,
      anon_sym_for,
  [10335] = 4,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_EQ,
    STATE(343), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10349] = 4,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_assert_statement_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10363] = 4,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(683), 1,
      anon_sym_EQ,
    STATE(319), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10377] = 4,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      aux_sym_map_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10391] = 4,
    ACTIONS(671), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
    STATE(483), 1,
      sym_generic_list,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10405] = 4,
    ACTIONS(657), 1,
      sym__string_content,
    ACTIONS(689), 1,
      sym_string_end,
    STATE(307), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10419] = 4,
    ACTIONS(691), 1,
      sym__string_content,
    ACTIONS(693), 1,
      sym_string_end,
    STATE(330), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10433] = 4,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10447] = 4,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10461] = 4,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
    STATE(382), 1,
      aux_sym_map_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10475] = 4,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_EQ,
    STATE(343), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10489] = 4,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_assert_statement_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10503] = 4,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_COLON_EQ,
    STATE(301), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10517] = 4,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(705), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_map_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10531] = 4,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    STATE(372), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10545] = 4,
    ACTIONS(657), 1,
      sym__string_content,
    ACTIONS(711), 1,
      sym_string_end,
    STATE(307), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10559] = 4,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(713), 1,
      anon_sym_EQ,
    STATE(343), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10573] = 4,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      sym_param,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10587] = 4,
    ACTIONS(604), 1,
      anon_sym_EQ,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10601] = 4,
    ACTIONS(722), 1,
      sym__string_content,
    ACTIONS(724), 1,
      sym_string_end,
    STATE(340), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10615] = 4,
    ACTIONS(726), 1,
      sym__string_content,
    ACTIONS(728), 1,
      sym_string_end,
    STATE(377), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10629] = 4,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10643] = 4,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10657] = 4,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10671] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(556), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP,
  [10681] = 4,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      aux_sym_record_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10695] = 4,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(740), 1,
      anon_sym_EQ,
    STATE(320), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10709] = 4,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(742), 1,
      anon_sym_EQ,
    STATE(335), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10723] = 4,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(744), 1,
      anon_sym_RBRACK,
    STATE(382), 1,
      aux_sym_map_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10737] = 4,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10751] = 4,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_assert_statement_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10765] = 4,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_COLON_EQ,
    STATE(337), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10779] = 4,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10793] = 4,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(755), 1,
      anon_sym_EQ,
    STATE(306), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10807] = 4,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_EQ,
    STATE(341), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10821] = 3,
    ACTIONS(761), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(759), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10833] = 4,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(763), 1,
      anon_sym_EQ,
    STATE(343), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10847] = 4,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(765), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_map_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10861] = 4,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      anon_sym_RBRACK,
    STATE(388), 1,
      aux_sym_generic_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10875] = 4,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10889] = 4,
    ACTIONS(657), 1,
      sym__string_content,
    ACTIONS(773), 1,
      sym_string_end,
    STATE(307), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10903] = 3,
    ACTIONS(775), 1,
      anon_sym_QMARK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(596), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [10915] = 4,
    ACTIONS(777), 1,
      sym__string_content,
    ACTIONS(779), 1,
      sym_string_end,
    STATE(365), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10929] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(781), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_fn,
  [10939] = 4,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10953] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(301), 3,
      sym__dedent,
      anon_sym_pass,
      anon_sym_for,
  [10963] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(305), 3,
      sym__dedent,
      anon_sym_pass,
      anon_sym_for,
  [10973] = 4,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    STATE(372), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [10987] = 4,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(788), 1,
      anon_sym_EQ,
    STATE(352), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11001] = 4,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11015] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(307), 3,
      sym__dedent,
      anon_sym_pass,
      anon_sym_for,
  [11025] = 4,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11039] = 4,
    ACTIONS(657), 1,
      sym__string_content,
    ACTIONS(794), 1,
      sym_string_end,
    STATE(307), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11053] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(612), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON_EQ,
  [11063] = 4,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_RBRACK,
    STATE(397), 1,
      aux_sym_map_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11077] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(798), 3,
      sym__dedent,
      anon_sym_pass,
      anon_sym_for,
  [11087] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(604), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_fn,
  [11097] = 4,
    ACTIONS(800), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
    STATE(382), 1,
      aux_sym_map_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11111] = 4,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_PIPE,
    STATE(400), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11125] = 4,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      sym_param,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11139] = 4,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_assert_statement_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11153] = 4,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym_record_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11167] = 4,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11181] = 4,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_RBRACK,
    STATE(396), 1,
      aux_sym_generic_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11195] = 4,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      aux_sym_record_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11209] = 4,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(823), 1,
      anon_sym_EQ,
    STATE(359), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11223] = 4,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(825), 1,
      anon_sym_EQ,
    STATE(392), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11237] = 4,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_EQ,
    STATE(361), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11251] = 4,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11265] = 4,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      sym_param,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11279] = 4,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym_record_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11293] = 4,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
    STATE(396), 1,
      aux_sym_generic_list_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11307] = 4,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_RBRACK,
    STATE(382), 1,
      aux_sym_map_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11321] = 4,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_assert_statement_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11335] = 4,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_record_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11349] = 4,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(847), 1,
      anon_sym_PIPE,
    STATE(301), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11363] = 4,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11377] = 4,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11391] = 3,
    ACTIONS(853), 1,
      sym_identifier,
    STATE(117), 1,
      sym_module,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11402] = 3,
    ACTIONS(855), 1,
      sym_string_start,
    STATE(466), 1,
      sym_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11413] = 3,
    ACTIONS(857), 1,
      aux_sym_url_token1,
    STATE(178), 1,
      sym_url,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11424] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(836), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11433] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(842), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11442] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(859), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11451] = 3,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(421), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11462] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(217), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11473] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(241), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11484] = 3,
    ACTIONS(865), 1,
      sym__indent,
    STATE(267), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11495] = 3,
    ACTIONS(867), 1,
      sym_identifier,
    ACTIONS(869), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11506] = 3,
    ACTIONS(871), 1,
      sym_identifier,
    STATE(501), 1,
      sym__extension,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11517] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(215), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11528] = 3,
    ACTIONS(715), 1,
      sym_identifier,
    STATE(422), 1,
      sym_param,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11539] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(226), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11550] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(240), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11561] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(231), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11572] = 3,
    ACTIONS(873), 1,
      sym_identifier,
    ACTIONS(875), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11583] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(877), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11592] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(814), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11601] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(223), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11612] = 3,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(406), 1,
      sym_generic_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11623] = 3,
    ACTIONS(881), 1,
      sym__indent,
    STATE(324), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11634] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(212), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11645] = 3,
    ACTIONS(883), 1,
      sym_identifier,
    STATE(407), 1,
      sym_record_field,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11656] = 3,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(408), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11667] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(242), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11678] = 3,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    STATE(218), 1,
      sym_lambda,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11689] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(219), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11700] = 3,
    ACTIONS(885), 1,
      anon_sym_DOT,
    ACTIONS(887), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11711] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(889), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11720] = 3,
    ACTIONS(865), 1,
      sym__indent,
    STATE(255), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11731] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11740] = 3,
    ACTIONS(881), 1,
      sym__indent,
    STATE(317), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11751] = 3,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    ACTIONS(893), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11762] = 3,
    ACTIONS(895), 1,
      sym__indent,
    STATE(247), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11773] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(227), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11784] = 3,
    ACTIONS(897), 1,
      sym_identifier,
    STATE(470), 1,
      sym__extension,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11795] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(199), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11806] = 3,
    ACTIONS(865), 1,
      sym__indent,
    STATE(245), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11817] = 3,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(381), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11828] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(781), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [11837] = 3,
    ACTIONS(883), 1,
      sym_identifier,
    STATE(350), 1,
      sym_record_field,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11848] = 3,
    ACTIONS(895), 1,
      sym__indent,
    STATE(256), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11859] = 3,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(363), 1,
      sym_generic_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11870] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(235), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11881] = 3,
    ACTIONS(895), 1,
      sym__indent,
    STATE(253), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11892] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(196), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11903] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(197), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11914] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(612), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11923] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(604), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [11932] = 3,
    ACTIONS(883), 1,
      sym_identifier,
    STATE(389), 1,
      sym_record_field,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11943] = 3,
    ACTIONS(899), 1,
      sym_identifier,
    ACTIONS(901), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11954] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(163), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11965] = 3,
    ACTIONS(893), 1,
      anon_sym_DOT,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11976] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(229), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11987] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(167), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [11998] = 3,
    ACTIONS(681), 1,
      sym_identifier,
    STATE(453), 1,
      sym_type2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12009] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(166), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12020] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(228), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12031] = 2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(513), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12040] = 3,
    ACTIONS(863), 1,
      sym__indent,
    STATE(204), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12051] = 2,
    ACTIONS(905), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12059] = 2,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12067] = 2,
    ACTIONS(909), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12075] = 2,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12083] = 2,
    ACTIONS(911), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12091] = 2,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12099] = 2,
    ACTIONS(913), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12107] = 2,
    ACTIONS(915), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12115] = 2,
    ACTIONS(917), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12123] = 2,
    ACTIONS(919), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12131] = 2,
    ACTIONS(921), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12139] = 2,
    ACTIONS(923), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12147] = 2,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12155] = 2,
    ACTIONS(925), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12163] = 2,
    ACTIONS(927), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12171] = 2,
    ACTIONS(929), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12179] = 2,
    ACTIONS(931), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12187] = 2,
    ACTIONS(215), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12195] = 2,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12203] = 2,
    ACTIONS(219), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12211] = 2,
    ACTIONS(239), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12219] = 2,
    ACTIONS(935), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12227] = 2,
    ACTIONS(937), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12235] = 2,
    ACTIONS(939), 1,
      anon_sym_range,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12243] = 2,
    ACTIONS(243), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12251] = 2,
    ACTIONS(941), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12259] = 2,
    ACTIONS(943), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12267] = 2,
    ACTIONS(945), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12275] = 2,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12283] = 2,
    ACTIONS(947), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12291] = 2,
    ACTIONS(949), 1,
      aux_sym_url_token1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12299] = 2,
    ACTIONS(951), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12307] = 2,
    ACTIONS(953), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12315] = 2,
    ACTIONS(955), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12323] = 2,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12331] = 2,
    ACTIONS(959), 1,
      anon_sym_range,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12339] = 2,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12347] = 2,
    ACTIONS(91), 1,
      anon_sym_EQ_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12355] = 2,
    ACTIONS(961), 1,
      anon_sym_EQ_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12363] = 2,
    ACTIONS(963), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12371] = 2,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12379] = 2,
    ACTIONS(965), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12387] = 2,
    ACTIONS(967), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12395] = 2,
    ACTIONS(969), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12403] = 2,
    ACTIONS(971), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12411] = 2,
    ACTIONS(973), 1,
      anon_sym_fn,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12419] = 2,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12427] = 2,
    ACTIONS(977), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12435] = 2,
    ACTIONS(979), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12443] = 2,
    ACTIONS(981), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12451] = 2,
    ACTIONS(983), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12459] = 2,
    ACTIONS(985), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12467] = 2,
    ACTIONS(987), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12475] = 2,
    ACTIONS(989), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12483] = 2,
    ACTIONS(991), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12491] = 2,
    ACTIONS(993), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12499] = 2,
    ACTIONS(995), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12507] = 2,
    ACTIONS(997), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12515] = 2,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12523] = 2,
    ACTIONS(1001), 1,
      anon_sym_EQ_GT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12531] = 2,
    ACTIONS(1003), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12539] = 2,
    ACTIONS(1005), 1,
      anon_sym_fn,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12547] = 2,
    ACTIONS(1007), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12555] = 2,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12563] = 2,
    ACTIONS(1009), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
  [12571] = 2,
    ACTIONS(1011), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 288,
  [SMALL_STATE(7)] = 360,
  [SMALL_STATE(8)] = 429,
  [SMALL_STATE(9)] = 498,
  [SMALL_STATE(10)] = 567,
  [SMALL_STATE(11)] = 633,
  [SMALL_STATE(12)] = 699,
  [SMALL_STATE(13)] = 765,
  [SMALL_STATE(14)] = 831,
  [SMALL_STATE(15)] = 897,
  [SMALL_STATE(16)] = 963,
  [SMALL_STATE(17)] = 1008,
  [SMALL_STATE(18)] = 1075,
  [SMALL_STATE(19)] = 1142,
  [SMALL_STATE(20)] = 1205,
  [SMALL_STATE(21)] = 1268,
  [SMALL_STATE(22)] = 1313,
  [SMALL_STATE(23)] = 1373,
  [SMALL_STATE(24)] = 1435,
  [SMALL_STATE(25)] = 1483,
  [SMALL_STATE(26)] = 1543,
  [SMALL_STATE(27)] = 1603,
  [SMALL_STATE(28)] = 1663,
  [SMALL_STATE(29)] = 1723,
  [SMALL_STATE(30)] = 1783,
  [SMALL_STATE(31)] = 1845,
  [SMALL_STATE(32)] = 1899,
  [SMALL_STATE(33)] = 1955,
  [SMALL_STATE(34)] = 2003,
  [SMALL_STATE(35)] = 2055,
  [SMALL_STATE(36)] = 2115,
  [SMALL_STATE(37)] = 2173,
  [SMALL_STATE(38)] = 2233,
  [SMALL_STATE(39)] = 2281,
  [SMALL_STATE(40)] = 2341,
  [SMALL_STATE(41)] = 2401,
  [SMALL_STATE(42)] = 2461,
  [SMALL_STATE(43)] = 2521,
  [SMALL_STATE(44)] = 2581,
  [SMALL_STATE(45)] = 2641,
  [SMALL_STATE(46)] = 2683,
  [SMALL_STATE(47)] = 2743,
  [SMALL_STATE(48)] = 2797,
  [SMALL_STATE(49)] = 2857,
  [SMALL_STATE(50)] = 2917,
  [SMALL_STATE(51)] = 2973,
  [SMALL_STATE(52)] = 3033,
  [SMALL_STATE(53)] = 3081,
  [SMALL_STATE(54)] = 3123,
  [SMALL_STATE(55)] = 3175,
  [SMALL_STATE(56)] = 3223,
  [SMALL_STATE(57)] = 3281,
  [SMALL_STATE(58)] = 3341,
  [SMALL_STATE(59)] = 3401,
  [SMALL_STATE(60)] = 3449,
  [SMALL_STATE(61)] = 3509,
  [SMALL_STATE(62)] = 3569,
  [SMALL_STATE(63)] = 3629,
  [SMALL_STATE(64)] = 3689,
  [SMALL_STATE(65)] = 3749,
  [SMALL_STATE(66)] = 3815,
  [SMALL_STATE(67)] = 3875,
  [SMALL_STATE(68)] = 3922,
  [SMALL_STATE(69)] = 3961,
  [SMALL_STATE(70)] = 4000,
  [SMALL_STATE(71)] = 4039,
  [SMALL_STATE(72)] = 4086,
  [SMALL_STATE(73)] = 4147,
  [SMALL_STATE(74)] = 4186,
  [SMALL_STATE(75)] = 4227,
  [SMALL_STATE(76)] = 4266,
  [SMALL_STATE(77)] = 4305,
  [SMALL_STATE(78)] = 4344,
  [SMALL_STATE(79)] = 4383,
  [SMALL_STATE(80)] = 4422,
  [SMALL_STATE(81)] = 4461,
  [SMALL_STATE(82)] = 4500,
  [SMALL_STATE(83)] = 4553,
  [SMALL_STATE(84)] = 4592,
  [SMALL_STATE(85)] = 4631,
  [SMALL_STATE(86)] = 4670,
  [SMALL_STATE(87)] = 4725,
  [SMALL_STATE(88)] = 4764,
  [SMALL_STATE(89)] = 4815,
  [SMALL_STATE(90)] = 4862,
  [SMALL_STATE(91)] = 4901,
  [SMALL_STATE(92)] = 4960,
  [SMALL_STATE(93)] = 4999,
  [SMALL_STATE(94)] = 5038,
  [SMALL_STATE(95)] = 5077,
  [SMALL_STATE(96)] = 5116,
  [SMALL_STATE(97)] = 5155,
  [SMALL_STATE(98)] = 5194,
  [SMALL_STATE(99)] = 5251,
  [SMALL_STATE(100)] = 5290,
  [SMALL_STATE(101)] = 5329,
  [SMALL_STATE(102)] = 5368,
  [SMALL_STATE(103)] = 5407,
  [SMALL_STATE(104)] = 5445,
  [SMALL_STATE(105)] = 5483,
  [SMALL_STATE(106)] = 5521,
  [SMALL_STATE(107)] = 5559,
  [SMALL_STATE(108)] = 5597,
  [SMALL_STATE(109)] = 5635,
  [SMALL_STATE(110)] = 5673,
  [SMALL_STATE(111)] = 5711,
  [SMALL_STATE(112)] = 5749,
  [SMALL_STATE(113)] = 5787,
  [SMALL_STATE(114)] = 5825,
  [SMALL_STATE(115)] = 5863,
  [SMALL_STATE(116)] = 5901,
  [SMALL_STATE(117)] = 5952,
  [SMALL_STATE(118)] = 6003,
  [SMALL_STATE(119)] = 6054,
  [SMALL_STATE(120)] = 6091,
  [SMALL_STATE(121)] = 6128,
  [SMALL_STATE(122)] = 6165,
  [SMALL_STATE(123)] = 6202,
  [SMALL_STATE(124)] = 6239,
  [SMALL_STATE(125)] = 6276,
  [SMALL_STATE(126)] = 6313,
  [SMALL_STATE(127)] = 6350,
  [SMALL_STATE(128)] = 6387,
  [SMALL_STATE(129)] = 6424,
  [SMALL_STATE(130)] = 6461,
  [SMALL_STATE(131)] = 6498,
  [SMALL_STATE(132)] = 6535,
  [SMALL_STATE(133)] = 6572,
  [SMALL_STATE(134)] = 6609,
  [SMALL_STATE(135)] = 6646,
  [SMALL_STATE(136)] = 6683,
  [SMALL_STATE(137)] = 6720,
  [SMALL_STATE(138)] = 6757,
  [SMALL_STATE(139)] = 6794,
  [SMALL_STATE(140)] = 6831,
  [SMALL_STATE(141)] = 6868,
  [SMALL_STATE(142)] = 6905,
  [SMALL_STATE(143)] = 6942,
  [SMALL_STATE(144)] = 6979,
  [SMALL_STATE(145)] = 7016,
  [SMALL_STATE(146)] = 7053,
  [SMALL_STATE(147)] = 7097,
  [SMALL_STATE(148)] = 7141,
  [SMALL_STATE(149)] = 7185,
  [SMALL_STATE(150)] = 7229,
  [SMALL_STATE(151)] = 7266,
  [SMALL_STATE(152)] = 7303,
  [SMALL_STATE(153)] = 7330,
  [SMALL_STATE(154)] = 7367,
  [SMALL_STATE(155)] = 7394,
  [SMALL_STATE(156)] = 7431,
  [SMALL_STATE(157)] = 7458,
  [SMALL_STATE(158)] = 7495,
  [SMALL_STATE(159)] = 7532,
  [SMALL_STATE(160)] = 7559,
  [SMALL_STATE(161)] = 7585,
  [SMALL_STATE(162)] = 7611,
  [SMALL_STATE(163)] = 7630,
  [SMALL_STATE(164)] = 7649,
  [SMALL_STATE(165)] = 7668,
  [SMALL_STATE(166)] = 7687,
  [SMALL_STATE(167)] = 7706,
  [SMALL_STATE(168)] = 7725,
  [SMALL_STATE(169)] = 7747,
  [SMALL_STATE(170)] = 7769,
  [SMALL_STATE(171)] = 7791,
  [SMALL_STATE(172)] = 7813,
  [SMALL_STATE(173)] = 7834,
  [SMALL_STATE(174)] = 7855,
  [SMALL_STATE(175)] = 7882,
  [SMALL_STATE(176)] = 7901,
  [SMALL_STATE(177)] = 7922,
  [SMALL_STATE(178)] = 7943,
  [SMALL_STATE(179)] = 7959,
  [SMALL_STATE(180)] = 7975,
  [SMALL_STATE(181)] = 7990,
  [SMALL_STATE(182)] = 8013,
  [SMALL_STATE(183)] = 8028,
  [SMALL_STATE(184)] = 8043,
  [SMALL_STATE(185)] = 8066,
  [SMALL_STATE(186)] = 8089,
  [SMALL_STATE(187)] = 8104,
  [SMALL_STATE(188)] = 8119,
  [SMALL_STATE(189)] = 8134,
  [SMALL_STATE(190)] = 8149,
  [SMALL_STATE(191)] = 8164,
  [SMALL_STATE(192)] = 8187,
  [SMALL_STATE(193)] = 8202,
  [SMALL_STATE(194)] = 8217,
  [SMALL_STATE(195)] = 8243,
  [SMALL_STATE(196)] = 8265,
  [SMALL_STATE(197)] = 8279,
  [SMALL_STATE(198)] = 8293,
  [SMALL_STATE(199)] = 8313,
  [SMALL_STATE(200)] = 8327,
  [SMALL_STATE(201)] = 8347,
  [SMALL_STATE(202)] = 8367,
  [SMALL_STATE(203)] = 8387,
  [SMALL_STATE(204)] = 8407,
  [SMALL_STATE(205)] = 8421,
  [SMALL_STATE(206)] = 8441,
  [SMALL_STATE(207)] = 8455,
  [SMALL_STATE(208)] = 8475,
  [SMALL_STATE(209)] = 8495,
  [SMALL_STATE(210)] = 8515,
  [SMALL_STATE(211)] = 8541,
  [SMALL_STATE(212)] = 8555,
  [SMALL_STATE(213)] = 8569,
  [SMALL_STATE(214)] = 8595,
  [SMALL_STATE(215)] = 8621,
  [SMALL_STATE(216)] = 8635,
  [SMALL_STATE(217)] = 8649,
  [SMALL_STATE(218)] = 8663,
  [SMALL_STATE(219)] = 8677,
  [SMALL_STATE(220)] = 8691,
  [SMALL_STATE(221)] = 8717,
  [SMALL_STATE(222)] = 8743,
  [SMALL_STATE(223)] = 8757,
  [SMALL_STATE(224)] = 8771,
  [SMALL_STATE(225)] = 8785,
  [SMALL_STATE(226)] = 8811,
  [SMALL_STATE(227)] = 8825,
  [SMALL_STATE(228)] = 8839,
  [SMALL_STATE(229)] = 8853,
  [SMALL_STATE(230)] = 8867,
  [SMALL_STATE(231)] = 8881,
  [SMALL_STATE(232)] = 8895,
  [SMALL_STATE(233)] = 8921,
  [SMALL_STATE(234)] = 8941,
  [SMALL_STATE(235)] = 8955,
  [SMALL_STATE(236)] = 8969,
  [SMALL_STATE(237)] = 8983,
  [SMALL_STATE(238)] = 9003,
  [SMALL_STATE(239)] = 9023,
  [SMALL_STATE(240)] = 9043,
  [SMALL_STATE(241)] = 9057,
  [SMALL_STATE(242)] = 9071,
  [SMALL_STATE(243)] = 9085,
  [SMALL_STATE(244)] = 9107,
  [SMALL_STATE(245)] = 9120,
  [SMALL_STATE(246)] = 9133,
  [SMALL_STATE(247)] = 9154,
  [SMALL_STATE(248)] = 9167,
  [SMALL_STATE(249)] = 9186,
  [SMALL_STATE(250)] = 9199,
  [SMALL_STATE(251)] = 9212,
  [SMALL_STATE(252)] = 9229,
  [SMALL_STATE(253)] = 9248,
  [SMALL_STATE(254)] = 9261,
  [SMALL_STATE(255)] = 9274,
  [SMALL_STATE(256)] = 9287,
  [SMALL_STATE(257)] = 9300,
  [SMALL_STATE(258)] = 9313,
  [SMALL_STATE(259)] = 9334,
  [SMALL_STATE(260)] = 9349,
  [SMALL_STATE(261)] = 9370,
  [SMALL_STATE(262)] = 9391,
  [SMALL_STATE(263)] = 9404,
  [SMALL_STATE(264)] = 9421,
  [SMALL_STATE(265)] = 9434,
  [SMALL_STATE(266)] = 9449,
  [SMALL_STATE(267)] = 9462,
  [SMALL_STATE(268)] = 9475,
  [SMALL_STATE(269)] = 9488,
  [SMALL_STATE(270)] = 9501,
  [SMALL_STATE(271)] = 9514,
  [SMALL_STATE(272)] = 9535,
  [SMALL_STATE(273)] = 9548,
  [SMALL_STATE(274)] = 9569,
  [SMALL_STATE(275)] = 9587,
  [SMALL_STATE(276)] = 9601,
  [SMALL_STATE(277)] = 9613,
  [SMALL_STATE(278)] = 9633,
  [SMALL_STATE(279)] = 9645,
  [SMALL_STATE(280)] = 9665,
  [SMALL_STATE(281)] = 9685,
  [SMALL_STATE(282)] = 9705,
  [SMALL_STATE(283)] = 9725,
  [SMALL_STATE(284)] = 9745,
  [SMALL_STATE(285)] = 9761,
  [SMALL_STATE(286)] = 9773,
  [SMALL_STATE(287)] = 9788,
  [SMALL_STATE(288)] = 9803,
  [SMALL_STATE(289)] = 9818,
  [SMALL_STATE(290)] = 9835,
  [SMALL_STATE(291)] = 9850,
  [SMALL_STATE(292)] = 9867,
  [SMALL_STATE(293)] = 9882,
  [SMALL_STATE(294)] = 9897,
  [SMALL_STATE(295)] = 9912,
  [SMALL_STATE(296)] = 9927,
  [SMALL_STATE(297)] = 9942,
  [SMALL_STATE(298)] = 9955,
  [SMALL_STATE(299)] = 9970,
  [SMALL_STATE(300)] = 9985,
  [SMALL_STATE(301)] = 10000,
  [SMALL_STATE(302)] = 10015,
  [SMALL_STATE(303)] = 10030,
  [SMALL_STATE(304)] = 10045,
  [SMALL_STATE(305)] = 10060,
  [SMALL_STATE(306)] = 10077,
  [SMALL_STATE(307)] = 10091,
  [SMALL_STATE(308)] = 10105,
  [SMALL_STATE(309)] = 10119,
  [SMALL_STATE(310)] = 10133,
  [SMALL_STATE(311)] = 10147,
  [SMALL_STATE(312)] = 10161,
  [SMALL_STATE(313)] = 10175,
  [SMALL_STATE(314)] = 10189,
  [SMALL_STATE(315)] = 10203,
  [SMALL_STATE(316)] = 10217,
  [SMALL_STATE(317)] = 10231,
  [SMALL_STATE(318)] = 10241,
  [SMALL_STATE(319)] = 10255,
  [SMALL_STATE(320)] = 10269,
  [SMALL_STATE(321)] = 10283,
  [SMALL_STATE(322)] = 10297,
  [SMALL_STATE(323)] = 10311,
  [SMALL_STATE(324)] = 10325,
  [SMALL_STATE(325)] = 10335,
  [SMALL_STATE(326)] = 10349,
  [SMALL_STATE(327)] = 10363,
  [SMALL_STATE(328)] = 10377,
  [SMALL_STATE(329)] = 10391,
  [SMALL_STATE(330)] = 10405,
  [SMALL_STATE(331)] = 10419,
  [SMALL_STATE(332)] = 10433,
  [SMALL_STATE(333)] = 10447,
  [SMALL_STATE(334)] = 10461,
  [SMALL_STATE(335)] = 10475,
  [SMALL_STATE(336)] = 10489,
  [SMALL_STATE(337)] = 10503,
  [SMALL_STATE(338)] = 10517,
  [SMALL_STATE(339)] = 10531,
  [SMALL_STATE(340)] = 10545,
  [SMALL_STATE(341)] = 10559,
  [SMALL_STATE(342)] = 10573,
  [SMALL_STATE(343)] = 10587,
  [SMALL_STATE(344)] = 10601,
  [SMALL_STATE(345)] = 10615,
  [SMALL_STATE(346)] = 10629,
  [SMALL_STATE(347)] = 10643,
  [SMALL_STATE(348)] = 10657,
  [SMALL_STATE(349)] = 10671,
  [SMALL_STATE(350)] = 10681,
  [SMALL_STATE(351)] = 10695,
  [SMALL_STATE(352)] = 10709,
  [SMALL_STATE(353)] = 10723,
  [SMALL_STATE(354)] = 10737,
  [SMALL_STATE(355)] = 10751,
  [SMALL_STATE(356)] = 10765,
  [SMALL_STATE(357)] = 10779,
  [SMALL_STATE(358)] = 10793,
  [SMALL_STATE(359)] = 10807,
  [SMALL_STATE(360)] = 10821,
  [SMALL_STATE(361)] = 10833,
  [SMALL_STATE(362)] = 10847,
  [SMALL_STATE(363)] = 10861,
  [SMALL_STATE(364)] = 10875,
  [SMALL_STATE(365)] = 10889,
  [SMALL_STATE(366)] = 10903,
  [SMALL_STATE(367)] = 10915,
  [SMALL_STATE(368)] = 10929,
  [SMALL_STATE(369)] = 10939,
  [SMALL_STATE(370)] = 10953,
  [SMALL_STATE(371)] = 10963,
  [SMALL_STATE(372)] = 10973,
  [SMALL_STATE(373)] = 10987,
  [SMALL_STATE(374)] = 11001,
  [SMALL_STATE(375)] = 11015,
  [SMALL_STATE(376)] = 11025,
  [SMALL_STATE(377)] = 11039,
  [SMALL_STATE(378)] = 11053,
  [SMALL_STATE(379)] = 11063,
  [SMALL_STATE(380)] = 11077,
  [SMALL_STATE(381)] = 11087,
  [SMALL_STATE(382)] = 11097,
  [SMALL_STATE(383)] = 11111,
  [SMALL_STATE(384)] = 11125,
  [SMALL_STATE(385)] = 11139,
  [SMALL_STATE(386)] = 11153,
  [SMALL_STATE(387)] = 11167,
  [SMALL_STATE(388)] = 11181,
  [SMALL_STATE(389)] = 11195,
  [SMALL_STATE(390)] = 11209,
  [SMALL_STATE(391)] = 11223,
  [SMALL_STATE(392)] = 11237,
  [SMALL_STATE(393)] = 11251,
  [SMALL_STATE(394)] = 11265,
  [SMALL_STATE(395)] = 11279,
  [SMALL_STATE(396)] = 11293,
  [SMALL_STATE(397)] = 11307,
  [SMALL_STATE(398)] = 11321,
  [SMALL_STATE(399)] = 11335,
  [SMALL_STATE(400)] = 11349,
  [SMALL_STATE(401)] = 11363,
  [SMALL_STATE(402)] = 11377,
  [SMALL_STATE(403)] = 11391,
  [SMALL_STATE(404)] = 11402,
  [SMALL_STATE(405)] = 11413,
  [SMALL_STATE(406)] = 11424,
  [SMALL_STATE(407)] = 11433,
  [SMALL_STATE(408)] = 11442,
  [SMALL_STATE(409)] = 11451,
  [SMALL_STATE(410)] = 11462,
  [SMALL_STATE(411)] = 11473,
  [SMALL_STATE(412)] = 11484,
  [SMALL_STATE(413)] = 11495,
  [SMALL_STATE(414)] = 11506,
  [SMALL_STATE(415)] = 11517,
  [SMALL_STATE(416)] = 11528,
  [SMALL_STATE(417)] = 11539,
  [SMALL_STATE(418)] = 11550,
  [SMALL_STATE(419)] = 11561,
  [SMALL_STATE(420)] = 11572,
  [SMALL_STATE(421)] = 11583,
  [SMALL_STATE(422)] = 11592,
  [SMALL_STATE(423)] = 11601,
  [SMALL_STATE(424)] = 11612,
  [SMALL_STATE(425)] = 11623,
  [SMALL_STATE(426)] = 11634,
  [SMALL_STATE(427)] = 11645,
  [SMALL_STATE(428)] = 11656,
  [SMALL_STATE(429)] = 11667,
  [SMALL_STATE(430)] = 11678,
  [SMALL_STATE(431)] = 11689,
  [SMALL_STATE(432)] = 11700,
  [SMALL_STATE(433)] = 11711,
  [SMALL_STATE(434)] = 11720,
  [SMALL_STATE(435)] = 11731,
  [SMALL_STATE(436)] = 11740,
  [SMALL_STATE(437)] = 11751,
  [SMALL_STATE(438)] = 11762,
  [SMALL_STATE(439)] = 11773,
  [SMALL_STATE(440)] = 11784,
  [SMALL_STATE(441)] = 11795,
  [SMALL_STATE(442)] = 11806,
  [SMALL_STATE(443)] = 11817,
  [SMALL_STATE(444)] = 11828,
  [SMALL_STATE(445)] = 11837,
  [SMALL_STATE(446)] = 11848,
  [SMALL_STATE(447)] = 11859,
  [SMALL_STATE(448)] = 11870,
  [SMALL_STATE(449)] = 11881,
  [SMALL_STATE(450)] = 11892,
  [SMALL_STATE(451)] = 11903,
  [SMALL_STATE(452)] = 11914,
  [SMALL_STATE(453)] = 11923,
  [SMALL_STATE(454)] = 11932,
  [SMALL_STATE(455)] = 11943,
  [SMALL_STATE(456)] = 11954,
  [SMALL_STATE(457)] = 11965,
  [SMALL_STATE(458)] = 11976,
  [SMALL_STATE(459)] = 11987,
  [SMALL_STATE(460)] = 11998,
  [SMALL_STATE(461)] = 12009,
  [SMALL_STATE(462)] = 12020,
  [SMALL_STATE(463)] = 12031,
  [SMALL_STATE(464)] = 12040,
  [SMALL_STATE(465)] = 12051,
  [SMALL_STATE(466)] = 12059,
  [SMALL_STATE(467)] = 12067,
  [SMALL_STATE(468)] = 12075,
  [SMALL_STATE(469)] = 12083,
  [SMALL_STATE(470)] = 12091,
  [SMALL_STATE(471)] = 12099,
  [SMALL_STATE(472)] = 12107,
  [SMALL_STATE(473)] = 12115,
  [SMALL_STATE(474)] = 12123,
  [SMALL_STATE(475)] = 12131,
  [SMALL_STATE(476)] = 12139,
  [SMALL_STATE(477)] = 12147,
  [SMALL_STATE(478)] = 12155,
  [SMALL_STATE(479)] = 12163,
  [SMALL_STATE(480)] = 12171,
  [SMALL_STATE(481)] = 12179,
  [SMALL_STATE(482)] = 12187,
  [SMALL_STATE(483)] = 12195,
  [SMALL_STATE(484)] = 12203,
  [SMALL_STATE(485)] = 12211,
  [SMALL_STATE(486)] = 12219,
  [SMALL_STATE(487)] = 12227,
  [SMALL_STATE(488)] = 12235,
  [SMALL_STATE(489)] = 12243,
  [SMALL_STATE(490)] = 12251,
  [SMALL_STATE(491)] = 12259,
  [SMALL_STATE(492)] = 12267,
  [SMALL_STATE(493)] = 12275,
  [SMALL_STATE(494)] = 12283,
  [SMALL_STATE(495)] = 12291,
  [SMALL_STATE(496)] = 12299,
  [SMALL_STATE(497)] = 12307,
  [SMALL_STATE(498)] = 12315,
  [SMALL_STATE(499)] = 12323,
  [SMALL_STATE(500)] = 12331,
  [SMALL_STATE(501)] = 12339,
  [SMALL_STATE(502)] = 12347,
  [SMALL_STATE(503)] = 12355,
  [SMALL_STATE(504)] = 12363,
  [SMALL_STATE(505)] = 12371,
  [SMALL_STATE(506)] = 12379,
  [SMALL_STATE(507)] = 12387,
  [SMALL_STATE(508)] = 12395,
  [SMALL_STATE(509)] = 12403,
  [SMALL_STATE(510)] = 12411,
  [SMALL_STATE(511)] = 12419,
  [SMALL_STATE(512)] = 12427,
  [SMALL_STATE(513)] = 12435,
  [SMALL_STATE(514)] = 12443,
  [SMALL_STATE(515)] = 12451,
  [SMALL_STATE(516)] = 12459,
  [SMALL_STATE(517)] = 12467,
  [SMALL_STATE(518)] = 12475,
  [SMALL_STATE(519)] = 12483,
  [SMALL_STATE(520)] = 12491,
  [SMALL_STATE(521)] = 12499,
  [SMALL_STATE(522)] = 12507,
  [SMALL_STATE(523)] = 12515,
  [SMALL_STATE(524)] = 12523,
  [SMALL_STATE(525)] = 12531,
  [SMALL_STATE(526)] = 12539,
  [SMALL_STATE(527)] = 12547,
  [SMALL_STATE(528)] = 12555,
  [SMALL_STATE(529)] = 12563,
  [SMALL_STATE(530)] = 12571,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__named_expression_lhs, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 15),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 15),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 2, .production_id = 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 13),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 13),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, .production_id = 14),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 14),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 7),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 7),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(529),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(527),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(414),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(522),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(519),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(515),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2, .production_id = 8),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16), SHIFT_REPEAT(131),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16), SHIFT_REPEAT(131),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16), SHIFT_REPEAT(129),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16), SHIFT_REPEAT(129),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16), SHIFT_REPEAT(124),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2, .production_id = 16), SHIFT_REPEAT(124),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5, .production_id = 23),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4, .production_id = 20),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3, .production_id = 11),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(495),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(405),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(496),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(512),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, .production_id = 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5, .production_id = 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, .production_id = 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_literal, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 6, .production_id = 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 9, .production_id = 29),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 9, .production_id = 28),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 9, .production_id = 27),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 8, .production_id = 26),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait, 6, .production_id = 19),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 19),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 12, .production_id = 42),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 11, .production_id = 40),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 18),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 11, .production_id = 39),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 11, .production_id = 37),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait, 4, .production_id = 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 10, .production_id = 36),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 7, .production_id = 21),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 10, .production_id = 35),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 7, .production_id = 22),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 8, .production_id = 25),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 8, .production_id = 24),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, .production_id = 9),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 10, .production_id = 34),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait, 5, .production_id = 9),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 9, .production_id = 30),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait, 5, .production_id = 10),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(380),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(465),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 9, .production_id = 31),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 10, .production_id = 32),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 10, .production_id = 33),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 6),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_expression, 3, .production_id = 2),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_named_expression, 3, .production_id = 2), SHIFT(61),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 13),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_pattern, 3, .production_id = 12),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_named_expression, 3, .production_id = 2), SHIFT(27),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_argument, 3, .production_id = 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assert_statement_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_named_expression, 3, .production_id = 2), SHIFT(57),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type2_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_type2_repeat1, 2), SHIFT_REPEAT(473),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 7, .production_id = 27),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 7, .production_id = 28),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 7, .production_id = 29),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_field, 7, .production_id = 29),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 6, .production_id = 25),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_field, 6, .production_id = 25),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_repeat1, 2),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_repeat1, 2), SHIFT_REPEAT(497),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 8, .production_id = 32),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 8, .production_id = 33),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type2, 4),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 6, .production_id = 24),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type2, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 9, .production_id = 37),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type2, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat2, 2),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat2, 2), SHIFT_REPEAT(443),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2), SHIFT_REPEAT(525),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 5, .production_id = 22),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_field, 5, .production_id = 22),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(307),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 38),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 41),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat2, 2), SHIFT_REPEAT(460),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(19),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type2, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type2, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2), SHIFT_REPEAT(478),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_statement, 1),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(283),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_statement_repeat1, 2), SHIFT_REPEAT(41),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat1, 2),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat1, 2), SHIFT_REPEAT(416),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_list_repeat1, 2), SHIFT_REPEAT(424),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_list_repeat1, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(427),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_field, 3, .production_id = 17),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, .production_id = 17),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extension, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_value, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [975] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_list, 3),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 5),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_list, 4),
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

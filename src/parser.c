#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 19

enum {
  sym_identifier = 1,
  anon_sym_module = 2,
  anon_sym_import = 3,
  aux_sym_url_token1 = 4,
  anon_sym_SLASH = 5,
  anon_sym_LBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACK = 8,
  anon_sym_COLON = 9,
  anon_sym_AMP = 10,
  anon_sym_QMARK = 11,
  anon_sym_record = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_trait = 15,
  anon_sym_fn = 16,
  anon_sym_enum = 17,
  anon_sym_EQ = 18,
  anon_sym_PIPE = 19,
  anon_sym_SEMI = 20,
  anon_sym_DOT = 21,
  anon_sym_from = 22,
  anon_sym___future__ = 23,
  anon_sym_as = 24,
  anon_sym_STAR = 25,
  anon_sym_print = 26,
  anon_sym_GT_GT = 27,
  anon_sym_assert = 28,
  anon_sym_return = 29,
  anon_sym_del = 30,
  anon_sym_raise = 31,
  anon_sym_pass = 32,
  anon_sym_break = 33,
  anon_sym_continue = 34,
  anon_sym_if = 35,
  anon_sym_elif = 36,
  anon_sym_else = 37,
  anon_sym_match = 38,
  anon_sym_case = 39,
  anon_sym_async = 40,
  anon_sym_for = 41,
  anon_sym_in = 42,
  anon_sym_while = 43,
  anon_sym_try = 44,
  anon_sym_except = 45,
  anon_sym_finally = 46,
  anon_sym_with = 47,
  anon_sym_def = 48,
  anon_sym_DASH_GT = 49,
  anon_sym_global = 50,
  anon_sym_nonlocal = 51,
  anon_sym_exec = 52,
  anon_sym_type = 53,
  anon_sym_class = 54,
  anon_sym_AT = 55,
  anon_sym_DASH = 56,
  anon_sym__ = 57,
  anon_sym_LBRACE = 58,
  anon_sym_RBRACE = 59,
  anon_sym_PLUS = 60,
  anon_sym_not = 61,
  anon_sym_and = 62,
  anon_sym_or = 63,
  anon_sym_PERCENT = 64,
  anon_sym_SLASH_SLASH = 65,
  anon_sym_CARET = 66,
  anon_sym_LT_LT = 67,
  anon_sym_TILDE = 68,
  anon_sym_LT = 69,
  anon_sym_LT_EQ = 70,
  anon_sym_EQ_EQ = 71,
  anon_sym_BANG_EQ = 72,
  anon_sym_GT_EQ = 73,
  anon_sym_GT = 74,
  anon_sym_LT_GT = 75,
  anon_sym_is = 76,
  anon_sym_lambda = 77,
  anon_sym_PLUS_EQ = 78,
  anon_sym_DASH_EQ = 79,
  anon_sym_STAR_EQ = 80,
  anon_sym_SLASH_EQ = 81,
  anon_sym_AT_EQ = 82,
  anon_sym_SLASH_SLASH_EQ = 83,
  anon_sym_PERCENT_EQ = 84,
  anon_sym_GT_GT_EQ = 85,
  anon_sym_LT_LT_EQ = 86,
  anon_sym_AMP_EQ = 87,
  anon_sym_CARET_EQ = 88,
  anon_sym_PIPE_EQ = 89,
  anon_sym_yield = 90,
  sym__not_escape_sequence = 91,
  sym_type_conversion = 92,
  sym_integer = 93,
  anon_sym_await = 94,
  sym_true = 95,
  sym_false = 96,
  sym_none = 97,
  sym_comment = 98,
  sym_line_continuation = 99,
  sym__newline = 100,
  sym__indent = 101,
  sym__dedent = 102,
  sym_string_start = 103,
  sym__string_content = 104,
  sym_escape_interpolation = 105,
  sym_string_end = 106,
  sym_source_file = 107,
  sym_module = 108,
  sym_import = 109,
  sym_url = 110,
  sym_generic_list = 111,
  sym_generic_type2 = 112,
  sym_type2 = 113,
  sym_record = 114,
  sym_record_field = 115,
  sym_trait = 116,
  sym_trait_field = 117,
  sym_param = 118,
  sym_enum = 119,
  sym_enum_field = 120,
  aux_sym_source_file_repeat1 = 121,
  aux_sym_source_file_repeat2 = 122,
  aux_sym_url_repeat1 = 123,
  aux_sym_generic_list_repeat1 = 124,
  aux_sym_generic_type2_repeat1 = 125,
  aux_sym_record_repeat1 = 126,
  aux_sym_trait_repeat1 = 127,
  aux_sym_trait_field_repeat1 = 128,
  aux_sym_trait_field_repeat2 = 129,
  aux_sym_enum_repeat1 = 130,
  aux_sym_enum_field_repeat1 = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_module] = "module",
  [anon_sym_import] = "import",
  [aux_sym_url_token1] = "url_token1",
  [anon_sym_SLASH] = "/",
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
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_from] = "from",
  [anon_sym___future__] = "__future__",
  [anon_sym_as] = "as",
  [anon_sym_STAR] = "*",
  [anon_sym_print] = "print",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_assert] = "assert",
  [anon_sym_return] = "return",
  [anon_sym_del] = "del",
  [anon_sym_raise] = "raise",
  [anon_sym_pass] = "pass",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_match] = "match",
  [anon_sym_case] = "case",
  [anon_sym_async] = "async",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_try] = "try",
  [anon_sym_except] = "except",
  [anon_sym_finally] = "finally",
  [anon_sym_with] = "with",
  [anon_sym_def] = "def",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_global] = "global",
  [anon_sym_nonlocal] = "nonlocal",
  [anon_sym_exec] = "exec",
  [anon_sym_type] = "type",
  [anon_sym_class] = "class",
  [anon_sym_AT] = "@",
  [anon_sym_DASH] = "-",
  [anon_sym__] = "_",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_not] = "not",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_PERCENT] = "%",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_CARET] = "^",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_is] = "is",
  [anon_sym_lambda] = "lambda",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_AT_EQ] = "@=",
  [anon_sym_SLASH_SLASH_EQ] = "//=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_yield] = "yield",
  [sym__not_escape_sequence] = "_not_escape_sequence",
  [sym_type_conversion] = "type_conversion",
  [sym_integer] = "integer",
  [anon_sym_await] = "await",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_none] = "none",
  [sym_comment] = "comment",
  [sym_line_continuation] = "line_continuation",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_string_start] = "string_start",
  [sym__string_content] = "_string_content",
  [sym_escape_interpolation] = "escape_interpolation",
  [sym_string_end] = "string_end",
  [sym_source_file] = "source_file",
  [sym_module] = "module",
  [sym_import] = "import",
  [sym_url] = "url",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_url_repeat1] = "url_repeat1",
  [aux_sym_generic_list_repeat1] = "generic_list_repeat1",
  [aux_sym_generic_type2_repeat1] = "generic_type2_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
  [aux_sym_trait_repeat1] = "trait_repeat1",
  [aux_sym_trait_field_repeat1] = "trait_field_repeat1",
  [aux_sym_trait_field_repeat2] = "trait_field_repeat2",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_enum_field_repeat1] = "enum_field_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_import] = anon_sym_import,
  [aux_sym_url_token1] = aux_sym_url_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_from] = anon_sym_from,
  [anon_sym___future__] = anon_sym___future__,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_del] = anon_sym_del,
  [anon_sym_raise] = anon_sym_raise,
  [anon_sym_pass] = anon_sym_pass,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_finally] = anon_sym_finally,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_nonlocal] = anon_sym_nonlocal,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_lambda] = anon_sym_lambda,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_AT_EQ] = anon_sym_AT_EQ,
  [anon_sym_SLASH_SLASH_EQ] = anon_sym_SLASH_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_yield] = anon_sym_yield,
  [sym__not_escape_sequence] = sym__not_escape_sequence,
  [sym_type_conversion] = sym_type_conversion,
  [sym_integer] = sym_integer,
  [anon_sym_await] = anon_sym_await,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_none] = sym_none,
  [sym_comment] = sym_comment,
  [sym_line_continuation] = sym_line_continuation,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_string_start] = sym_string_start,
  [sym__string_content] = sym__string_content,
  [sym_escape_interpolation] = sym_escape_interpolation,
  [sym_string_end] = sym_string_end,
  [sym_source_file] = sym_source_file,
  [sym_module] = sym_module,
  [sym_import] = sym_import,
  [sym_url] = sym_url,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_url_repeat1] = aux_sym_url_repeat1,
  [aux_sym_generic_list_repeat1] = aux_sym_generic_list_repeat1,
  [aux_sym_generic_type2_repeat1] = aux_sym_generic_type2_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
  [aux_sym_trait_repeat1] = aux_sym_trait_repeat1,
  [aux_sym_trait_field_repeat1] = aux_sym_trait_field_repeat1,
  [aux_sym_trait_field_repeat2] = aux_sym_trait_field_repeat2,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_enum_field_repeat1] = aux_sym_enum_field_repeat1,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___future__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
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
  [anon_sym_del] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raise] = {
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
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
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
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
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
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
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
  [anon_sym_TILDE] = {
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
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
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
  [anon_sym_SLASH_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
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
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [sym__not_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_type_conversion] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_await] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [sym_source_file] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
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
};

enum {
  field_fields = 1,
  field_generics = 2,
  field_name = 3,
  field_params = 4,
  field_returns = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_fields] = "fields",
  [field_generics] = "generics",
  [field_name] = "name",
  [field_params] = "params",
  [field_returns] = "returns",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 4},
  [5] = {.index = 10, .length = 4},
  [6] = {.index = 14, .length = 2},
  [7] = {.index = 16, .length = 5},
  [8] = {.index = 21, .length = 5},
  [9] = {.index = 26, .length = 6},
  [10] = {.index = 32, .length = 3},
  [11] = {.index = 35, .length = 4},
  [12] = {.index = 39, .length = 4},
  [13] = {.index = 43, .length = 5},
  [14] = {.index = 48, .length = 5},
  [15] = {.index = 53, .length = 5},
  [16] = {.index = 58, .length = 6},
  [17] = {.index = 64, .length = 6},
  [18] = {.index = 70, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_fields, 2},
    {field_fields, 3},
    {field_name, 1},
  [4] =
    {field_fields, 3},
    {field_name, 1},
  [6] =
    {field_fields, 2},
    {field_fields, 3},
    {field_fields, 4},
    {field_name, 1},
  [10] =
    {field_fields, 3},
    {field_fields, 4},
    {field_generics, 2},
    {field_name, 1},
  [14] =
    {field_name, 0},
    {field_type, 2},
  [16] =
    {field_fields, 2},
    {field_fields, 3},
    {field_fields, 4},
    {field_fields, 5},
    {field_name, 1},
  [21] =
    {field_fields, 3},
    {field_fields, 4},
    {field_fields, 5},
    {field_generics, 2},
    {field_name, 1},
  [26] =
    {field_fields, 3},
    {field_fields, 4},
    {field_fields, 5},
    {field_fields, 6},
    {field_generics, 2},
    {field_name, 1},
  [32] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
  [35] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_returns, 5},
  [39] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
  [43] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_returns, 5},
    {field_returns, 6},
  [48] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_returns, 6},
  [53] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
  [58] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_returns, 6},
    {field_returns, 7},
  [64] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_returns, 7},
  [70] =
    {field_name, 1},
    {field_params, 2},
    {field_params, 3},
    {field_params, 4},
    {field_params, 5},
    {field_returns, 7},
    {field_returns, 8},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
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
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= '_')
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

static inline bool sym_identifier_character_set_2(int32_t c) {
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

static inline bool sym_identifier_character_set_3(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '^') ADVANCE(42);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(75);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '^') ADVANCE(42);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(73);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '|') ADVANCE(28);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AT_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_type_conversion);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(4);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(5);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
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
      if (lookahead == 'F') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '_') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'w') ADVANCE(20);
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_del);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 107:
      if (lookahead == 'k') ADVANCE(139);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_raise);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_trait);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 161:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_lambda);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 173:
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_nonlocal);
      END_STATE();
    case 176:
      if (lookahead == '_') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym___future__);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 12, .external_lex_state = 2},
  [2] = {.lex_state = 12, .external_lex_state = 2},
  [3] = {.lex_state = 12, .external_lex_state = 2},
  [4] = {.lex_state = 12, .external_lex_state = 2},
  [5] = {.lex_state = 12, .external_lex_state = 2},
  [6] = {.lex_state = 12, .external_lex_state = 2},
  [7] = {.lex_state = 12, .external_lex_state = 2},
  [8] = {.lex_state = 12, .external_lex_state = 2},
  [9] = {.lex_state = 12, .external_lex_state = 2},
  [10] = {.lex_state = 12, .external_lex_state = 2},
  [11] = {.lex_state = 12, .external_lex_state = 2},
  [12] = {.lex_state = 12, .external_lex_state = 2},
  [13] = {.lex_state = 12, .external_lex_state = 2},
  [14] = {.lex_state = 12, .external_lex_state = 2},
  [15] = {.lex_state = 12, .external_lex_state = 2},
  [16] = {.lex_state = 12, .external_lex_state = 2},
  [17] = {.lex_state = 12, .external_lex_state = 2},
  [18] = {.lex_state = 12, .external_lex_state = 2},
  [19] = {.lex_state = 12, .external_lex_state = 3},
  [20] = {.lex_state = 12, .external_lex_state = 4},
  [21] = {.lex_state = 12, .external_lex_state = 3},
  [22] = {.lex_state = 12, .external_lex_state = 2},
  [23] = {.lex_state = 12, .external_lex_state = 2},
  [24] = {.lex_state = 12, .external_lex_state = 3},
  [25] = {.lex_state = 12, .external_lex_state = 3},
  [26] = {.lex_state = 12, .external_lex_state = 3},
  [27] = {.lex_state = 12, .external_lex_state = 2},
  [28] = {.lex_state = 12, .external_lex_state = 3},
  [29] = {.lex_state = 12, .external_lex_state = 3},
  [30] = {.lex_state = 12, .external_lex_state = 3},
  [31] = {.lex_state = 12, .external_lex_state = 3},
  [32] = {.lex_state = 12, .external_lex_state = 2},
  [33] = {.lex_state = 12, .external_lex_state = 3},
  [34] = {.lex_state = 12, .external_lex_state = 4},
  [35] = {.lex_state = 12, .external_lex_state = 2},
  [36] = {.lex_state = 12, .external_lex_state = 2},
  [37] = {.lex_state = 12, .external_lex_state = 3},
  [38] = {.lex_state = 12, .external_lex_state = 3},
  [39] = {.lex_state = 12, .external_lex_state = 3},
  [40] = {.lex_state = 12, .external_lex_state = 3},
  [41] = {.lex_state = 12, .external_lex_state = 3},
  [42] = {.lex_state = 12, .external_lex_state = 2},
  [43] = {.lex_state = 12, .external_lex_state = 2},
  [44] = {.lex_state = 12, .external_lex_state = 3},
  [45] = {.lex_state = 12, .external_lex_state = 4},
  [46] = {.lex_state = 12, .external_lex_state = 4},
  [47] = {.lex_state = 12, .external_lex_state = 4},
  [48] = {.lex_state = 12, .external_lex_state = 3},
  [49] = {.lex_state = 12, .external_lex_state = 3},
  [50] = {.lex_state = 12, .external_lex_state = 4},
  [51] = {.lex_state = 12, .external_lex_state = 2},
  [52] = {.lex_state = 12, .external_lex_state = 3},
  [53] = {.lex_state = 12, .external_lex_state = 3},
  [54] = {.lex_state = 12, .external_lex_state = 3},
  [55] = {.lex_state = 12, .external_lex_state = 3},
  [56] = {.lex_state = 12, .external_lex_state = 3},
  [57] = {.lex_state = 12, .external_lex_state = 3},
  [58] = {.lex_state = 12, .external_lex_state = 3},
  [59] = {.lex_state = 12, .external_lex_state = 3},
  [60] = {.lex_state = 12, .external_lex_state = 4},
  [61] = {.lex_state = 12, .external_lex_state = 4},
  [62] = {.lex_state = 12, .external_lex_state = 3},
  [63] = {.lex_state = 12, .external_lex_state = 3},
  [64] = {.lex_state = 12, .external_lex_state = 3},
  [65] = {.lex_state = 12, .external_lex_state = 3},
  [66] = {.lex_state = 12, .external_lex_state = 2},
  [67] = {.lex_state = 12, .external_lex_state = 2},
  [68] = {.lex_state = 12, .external_lex_state = 2},
  [69] = {.lex_state = 12, .external_lex_state = 3},
  [70] = {.lex_state = 12, .external_lex_state = 2},
  [71] = {.lex_state = 12, .external_lex_state = 2},
  [72] = {.lex_state = 12, .external_lex_state = 3},
  [73] = {.lex_state = 12, .external_lex_state = 2},
  [74] = {.lex_state = 12, .external_lex_state = 4},
  [75] = {.lex_state = 12, .external_lex_state = 2},
  [76] = {.lex_state = 12, .external_lex_state = 3},
  [77] = {.lex_state = 12, .external_lex_state = 3},
  [78] = {.lex_state = 12, .external_lex_state = 3},
  [79] = {.lex_state = 12, .external_lex_state = 2},
  [80] = {.lex_state = 12, .external_lex_state = 2},
  [81] = {.lex_state = 12, .external_lex_state = 2},
  [82] = {.lex_state = 12, .external_lex_state = 2},
  [83] = {.lex_state = 8, .external_lex_state = 2},
  [84] = {.lex_state = 12, .external_lex_state = 2},
  [85] = {.lex_state = 12, .external_lex_state = 2},
  [86] = {.lex_state = 12, .external_lex_state = 2},
  [87] = {.lex_state = 12, .external_lex_state = 2},
  [88] = {.lex_state = 12, .external_lex_state = 2},
  [89] = {.lex_state = 12, .external_lex_state = 2},
  [90] = {.lex_state = 12, .external_lex_state = 2},
  [91] = {.lex_state = 12, .external_lex_state = 2},
  [92] = {.lex_state = 12, .external_lex_state = 2},
  [93] = {.lex_state = 12, .external_lex_state = 2},
  [94] = {.lex_state = 12, .external_lex_state = 2},
  [95] = {.lex_state = 12, .external_lex_state = 2},
  [96] = {.lex_state = 12, .external_lex_state = 2},
  [97] = {.lex_state = 12, .external_lex_state = 2},
  [98] = {.lex_state = 12, .external_lex_state = 2},
  [99] = {.lex_state = 12, .external_lex_state = 2},
  [100] = {.lex_state = 12, .external_lex_state = 2},
  [101] = {.lex_state = 12, .external_lex_state = 2},
  [102] = {.lex_state = 12, .external_lex_state = 2},
  [103] = {.lex_state = 12, .external_lex_state = 2},
  [104] = {.lex_state = 12, .external_lex_state = 2},
  [105] = {.lex_state = 8, .external_lex_state = 2},
  [106] = {.lex_state = 12, .external_lex_state = 2},
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

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [4] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym___future__] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_del] = ACTIONS(1),
    [anon_sym_raise] = ACTIONS(1),
    [anon_sym_pass] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_nonlocal] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_AT_EQ] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [sym__not_escape_sequence] = ACTIONS(1),
    [sym_type_conversion] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_await] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_string_start] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_escape_interpolation] = ACTIONS(1),
    [sym_string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(96),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(13), 1,
      anon_sym_trait,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(3), 2,
      sym_import,
      aux_sym_source_file_repeat1,
    STATE(5), 4,
      sym_record,
      sym_trait,
      sym_enum,
      aux_sym_source_file_repeat2,
  [30] = 8,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(13), 1,
      anon_sym_trait,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(13), 2,
      sym_import,
      aux_sym_source_file_repeat1,
    STATE(6), 4,
      sym_record,
      sym_trait,
      sym_enum,
      aux_sym_source_file_repeat2,
  [60] = 6,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_record,
    ACTIONS(24), 1,
      anon_sym_trait,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(4), 4,
      sym_record,
      sym_trait,
      sym_enum,
      aux_sym_source_file_repeat2,
  [83] = 6,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(13), 1,
      anon_sym_trait,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(4), 4,
      sym_record,
      sym_trait,
      sym_enum,
      aux_sym_source_file_repeat2,
  [106] = 6,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(13), 1,
      anon_sym_trait,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(4), 4,
      sym_record,
      sym_trait,
      sym_enum,
      aux_sym_source_file_repeat2,
  [129] = 4,
    ACTIONS(34), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(7), 2,
      sym_enum_field,
      aux_sym_enum_repeat1,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [147] = 4,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    STATE(8), 1,
      aux_sym_url_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [165] = 4,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    STATE(8), 1,
      aux_sym_url_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [183] = 4,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    STATE(9), 1,
      aux_sym_url_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [201] = 4,
    ACTIONS(50), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(7), 2,
      sym_enum_field,
      aux_sym_enum_repeat1,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [219] = 4,
    ACTIONS(50), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(11), 2,
      sym_enum_field,
      aux_sym_enum_repeat1,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [237] = 4,
    ACTIONS(56), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(13), 2,
      sym_import,
      aux_sym_source_file_repeat1,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [255] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_SLASH,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [268] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
      anon_sym_PIPE,
  [280] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
      anon_sym_PIPE,
  [292] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [304] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [316] = 4,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      anon_sym_fn,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(19), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [331] = 4,
    ACTIONS(74), 1,
      anon_sym_AMP,
    STATE(45), 1,
      aux_sym_generic_type2_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(72), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [346] = 4,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(78), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [361] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [372] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [383] = 4,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(84), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [398] = 4,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(86), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [413] = 4,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(91), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [428] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [439] = 5,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 1,
      anon_sym_fn,
    STATE(24), 1,
      sym_type2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [456] = 4,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_fn,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(38), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [471] = 4,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(105), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [486] = 3,
    ACTIONS(109), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(107), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
  [499] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [510] = 4,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(113), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [525] = 4,
    ACTIONS(74), 1,
      anon_sym_AMP,
    STATE(20), 1,
      aux_sym_generic_type2_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [540] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [551] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [562] = 4,
    ACTIONS(103), 1,
      anon_sym_fn,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(19), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [577] = 4,
    ACTIONS(103), 1,
      anon_sym_fn,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(19), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [592] = 4,
    ACTIONS(103), 1,
      anon_sym_fn,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(37), 2,
      sym_trait_field,
      aux_sym_trait_repeat1,
  [607] = 5,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(129), 1,
      anon_sym_fn,
    STATE(30), 1,
      sym_type2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [624] = 4,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_trait_field_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(131), 2,
      anon_sym_RPAREN,
      anon_sym_fn,
  [639] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [650] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_trait,
      anon_sym_enum,
  [661] = 5,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      anon_sym_fn,
    STATE(41), 1,
      sym_type2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [678] = 4,
    ACTIONS(143), 1,
      anon_sym_AMP,
    STATE(45), 1,
      aux_sym_generic_type2_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [693] = 3,
    ACTIONS(148), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [705] = 4,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_generic_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [719] = 4,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_record_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [733] = 4,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_record_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [747] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(141), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP,
  [757] = 4,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_generic_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [771] = 4,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [785] = 4,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [799] = 4,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [813] = 4,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [827] = 4,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_trait_field_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [841] = 4,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_enum_field_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [855] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(186), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
  [865] = 4,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_record_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [879] = 4,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_generic_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [893] = 4,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_generic_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [907] = 4,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_record_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [921] = 4,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_param,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [935] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(91), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_fn,
  [945] = 4,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_record_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [959] = 4,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_generic_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [973] = 3,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(77), 1,
      sym_param,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [984] = 3,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(72), 1,
      sym_type2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [995] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1004] = 3,
    ACTIONS(212), 1,
      sym_identifier,
    STATE(61), 1,
      sym_generic_type2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1015] = 3,
    ACTIONS(214), 1,
      sym_identifier,
    STATE(59), 1,
      sym_record_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1026] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1035] = 3,
    ACTIONS(214), 1,
      sym_identifier,
    STATE(49), 1,
      sym_record_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1046] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1055] = 3,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(64), 1,
      sym_type2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1066] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1075] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1084] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1093] = 3,
    ACTIONS(220), 1,
      sym_identifier,
    STATE(2), 1,
      sym_module,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1104] = 3,
    ACTIONS(212), 1,
      sym_identifier,
    STATE(74), 1,
      sym_generic_type2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1115] = 3,
    ACTIONS(214), 1,
      sym_identifier,
    STATE(69), 1,
      sym_record_field,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1126] = 3,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(78), 1,
      sym_type2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1137] = 3,
    ACTIONS(222), 1,
      aux_sym_url_token1,
    STATE(18), 1,
      sym_url,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1148] = 2,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1156] = 2,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1164] = 2,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1172] = 2,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1180] = 2,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1188] = 2,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1196] = 2,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1204] = 2,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1212] = 2,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1220] = 2,
    ACTIONS(242), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1228] = 2,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1236] = 2,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1244] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1252] = 2,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1260] = 2,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1268] = 2,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1276] = 2,
    ACTIONS(256), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1284] = 2,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1292] = 2,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1300] = 2,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1308] = 2,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1316] = 2,
    ACTIONS(266), 1,
      aux_sym_url_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1324] = 2,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 183,
  [SMALL_STATE(11)] = 201,
  [SMALL_STATE(12)] = 219,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 255,
  [SMALL_STATE(15)] = 268,
  [SMALL_STATE(16)] = 280,
  [SMALL_STATE(17)] = 292,
  [SMALL_STATE(18)] = 304,
  [SMALL_STATE(19)] = 316,
  [SMALL_STATE(20)] = 331,
  [SMALL_STATE(21)] = 346,
  [SMALL_STATE(22)] = 361,
  [SMALL_STATE(23)] = 372,
  [SMALL_STATE(24)] = 383,
  [SMALL_STATE(25)] = 398,
  [SMALL_STATE(26)] = 413,
  [SMALL_STATE(27)] = 428,
  [SMALL_STATE(28)] = 439,
  [SMALL_STATE(29)] = 456,
  [SMALL_STATE(30)] = 471,
  [SMALL_STATE(31)] = 486,
  [SMALL_STATE(32)] = 499,
  [SMALL_STATE(33)] = 510,
  [SMALL_STATE(34)] = 525,
  [SMALL_STATE(35)] = 540,
  [SMALL_STATE(36)] = 551,
  [SMALL_STATE(37)] = 562,
  [SMALL_STATE(38)] = 577,
  [SMALL_STATE(39)] = 592,
  [SMALL_STATE(40)] = 607,
  [SMALL_STATE(41)] = 624,
  [SMALL_STATE(42)] = 639,
  [SMALL_STATE(43)] = 650,
  [SMALL_STATE(44)] = 661,
  [SMALL_STATE(45)] = 678,
  [SMALL_STATE(46)] = 693,
  [SMALL_STATE(47)] = 705,
  [SMALL_STATE(48)] = 719,
  [SMALL_STATE(49)] = 733,
  [SMALL_STATE(50)] = 747,
  [SMALL_STATE(51)] = 757,
  [SMALL_STATE(52)] = 771,
  [SMALL_STATE(53)] = 785,
  [SMALL_STATE(54)] = 799,
  [SMALL_STATE(55)] = 813,
  [SMALL_STATE(56)] = 827,
  [SMALL_STATE(57)] = 841,
  [SMALL_STATE(58)] = 855,
  [SMALL_STATE(59)] = 865,
  [SMALL_STATE(60)] = 879,
  [SMALL_STATE(61)] = 893,
  [SMALL_STATE(62)] = 907,
  [SMALL_STATE(63)] = 921,
  [SMALL_STATE(64)] = 935,
  [SMALL_STATE(65)] = 945,
  [SMALL_STATE(66)] = 959,
  [SMALL_STATE(67)] = 973,
  [SMALL_STATE(68)] = 984,
  [SMALL_STATE(69)] = 995,
  [SMALL_STATE(70)] = 1004,
  [SMALL_STATE(71)] = 1015,
  [SMALL_STATE(72)] = 1026,
  [SMALL_STATE(73)] = 1035,
  [SMALL_STATE(74)] = 1046,
  [SMALL_STATE(75)] = 1055,
  [SMALL_STATE(76)] = 1066,
  [SMALL_STATE(77)] = 1075,
  [SMALL_STATE(78)] = 1084,
  [SMALL_STATE(79)] = 1093,
  [SMALL_STATE(80)] = 1104,
  [SMALL_STATE(81)] = 1115,
  [SMALL_STATE(82)] = 1126,
  [SMALL_STATE(83)] = 1137,
  [SMALL_STATE(84)] = 1148,
  [SMALL_STATE(85)] = 1156,
  [SMALL_STATE(86)] = 1164,
  [SMALL_STATE(87)] = 1172,
  [SMALL_STATE(88)] = 1180,
  [SMALL_STATE(89)] = 1188,
  [SMALL_STATE(90)] = 1196,
  [SMALL_STATE(91)] = 1204,
  [SMALL_STATE(92)] = 1212,
  [SMALL_STATE(93)] = 1220,
  [SMALL_STATE(94)] = 1228,
  [SMALL_STATE(95)] = 1236,
  [SMALL_STATE(96)] = 1244,
  [SMALL_STATE(97)] = 1252,
  [SMALL_STATE(98)] = 1260,
  [SMALL_STATE(99)] = 1268,
  [SMALL_STATE(100)] = 1276,
  [SMALL_STATE(101)] = 1284,
  [SMALL_STATE(102)] = 1292,
  [SMALL_STATE(103)] = 1300,
  [SMALL_STATE(104)] = 1308,
  [SMALL_STATE(105)] = 1316,
  [SMALL_STATE(106)] = 1324,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(84),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(89),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(85),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(94),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(105),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 6, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_repeat1, 2), SHIFT_REPEAT(97),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type2, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 9, .production_id = 18),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 7),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 8, .production_id = 17),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 8, .production_id = 16),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat2, 2), SHIFT_REPEAT(75),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat2, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait, 6, .production_id = 8),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 7, .production_id = 15),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_field, 7, .production_id = 15),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 7, .production_id = 14),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type2, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, .production_id = 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 7, .production_id = 13),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type2, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 7, .production_id = 9),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait, 4, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 6, .production_id = 12),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_field, 6, .production_id = 12),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 6, .production_id = 11),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait, 5, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait, 5, .production_id = 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_field, 5, .production_id = 10),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_field, 5, .production_id = 10),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type2_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_type2_repeat1, 2), SHIFT_REPEAT(104),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type2, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat1, 2), SHIFT_REPEAT(67),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_field_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2), SHIFT_REPEAT(86),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type2, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_list_repeat1, 2), SHIFT_REPEAT(80),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_list_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(81),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_field, 3, .production_id = 6),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, .production_id = 6),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_list, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [248] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_list, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 157
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_AMP = 1,
  anon_sym_SEMI = 2,
  anon_sym_func = 3,
  anon_sym_LBRACE = 4,
  aux_sym_block_token1 = 5,
  anon_sym_PIPE = 6,
  anon_sym_RBRACE = 7,
  sym_identifier = 8,
  anon_sym_COLON = 9,
  sym_number = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token1 = 12,
  aux_sym_string_token2 = 13,
  anon_sym_LT_LBRACE = 14,
  anon_sym_with = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  sym_operation = 18,
  anon_sym_def = 19,
  anon_sym_EQ = 20,
  anon_sym_construct = 21,
  anon_sym_namespace = 22,
  sym__spacing = 23,
  anon_sym_if = 24,
  anon_sym_while = 25,
  anon_sym_catch = 26,
  anon_sym_include = 27,
  anon_sym_in = 28,
  anon_sym_use = 29,
  sym_source_file = 30,
  sym__statement = 31,
  sym_function_definition = 32,
  sym_func = 33,
  sym_block = 34,
  sym_call = 35,
  sym_string = 36,
  sym_expression = 37,
  sym_with_expr = 38,
  sym_array = 39,
  sym_type_definition = 40,
  sym_if = 41,
  sym_while = 42,
  sym_catch = 43,
  sym_include = 44,
  sym_use = 45,
  sym_def = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym__statement_repeat1 = 48,
  aux_sym_block_repeat1 = 49,
  aux_sym_string_repeat1 = 50,
  aux_sym_with_expr_repeat1 = 51,
  aux_sym_type_definition_repeat1 = 52,
  aux_sym_type_definition_repeat2 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AMP] = "&",
  [anon_sym_SEMI] = ";",
  [anon_sym_func] = "func",
  [anon_sym_LBRACE] = "{",
  [aux_sym_block_token1] = "block_token1",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_LT_LBRACE] = "<{",
  [anon_sym_with] = "with",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_operation] = "operation",
  [anon_sym_def] = "def",
  [anon_sym_EQ] = "=",
  [anon_sym_construct] = "construct",
  [anon_sym_namespace] = "namespace",
  [sym__spacing] = "_spacing",
  [anon_sym_if] = "if",
  [anon_sym_while] = "while",
  [anon_sym_catch] = "catch",
  [anon_sym_include] = "include",
  [anon_sym_in] = "in",
  [anon_sym_use] = "use",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_function_definition] = "function_definition",
  [sym_func] = "func",
  [sym_block] = "block",
  [sym_call] = "call",
  [sym_string] = "string",
  [sym_expression] = "expression",
  [sym_with_expr] = "with_expr",
  [sym_array] = "array",
  [sym_type_definition] = "type_definition",
  [sym_if] = "if",
  [sym_while] = "while",
  [sym_catch] = "catch",
  [sym_include] = "include",
  [sym_use] = "use",
  [sym_def] = "def",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_with_expr_repeat1] = "with_expr_repeat1",
  [aux_sym_type_definition_repeat1] = "type_definition_repeat1",
  [aux_sym_type_definition_repeat2] = "type_definition_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_block_token1] = aux_sym_block_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_LT_LBRACE] = anon_sym_LT_LBRACE,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_operation] = sym_operation,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_construct] = anon_sym_construct,
  [anon_sym_namespace] = anon_sym_namespace,
  [sym__spacing] = sym__spacing,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_use] = anon_sym_use,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_function_definition] = sym_function_definition,
  [sym_func] = sym_func,
  [sym_block] = sym_block,
  [sym_call] = sym_call,
  [sym_string] = sym_string,
  [sym_expression] = sym_expression,
  [sym_with_expr] = sym_with_expr,
  [sym_array] = sym_array,
  [sym_type_definition] = sym_type_definition,
  [sym_if] = sym_if,
  [sym_while] = sym_while,
  [sym_catch] = sym_catch,
  [sym_include] = sym_include,
  [sym_use] = sym_use,
  [sym_def] = sym_def,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__statement_repeat1] = aux_sym__statement_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_with_expr_repeat1] = aux_sym_with_expr_repeat1,
  [aux_sym_type_definition_repeat1] = aux_sym_type_definition_repeat1,
  [aux_sym_type_definition_repeat2] = aux_sym_type_definition_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_construct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [sym__spacing] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_catch] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_with_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
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
  [6] = 2,
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
  [30] = 29,
  [31] = 27,
  [32] = 28,
  [33] = 33,
  [34] = 33,
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
  [62] = 50,
  [63] = 63,
  [64] = 64,
  [65] = 45,
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
  [81] = 73,
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
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 125,
  [154] = 154,
  [155] = 151,
  [156] = 156,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '{'
      ? (c < ':'
        ? (c >= '&' && c <= '\'')
        : c <= ';')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '&') ADVANCE(44);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(19);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '|') ADVANCE(50);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '&') ADVANCE(44);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(65);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(44);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{') ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(102);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == '{') ADVANCE(94);
      END_STATE();
    case 39:
      if (lookahead == '|') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '&') ADVANCE(44);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(65);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ';') ADVANCE(85);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_func);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_block_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(71);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(69);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(47);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(67);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(78);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(62);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(64);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(118);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(112);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(54);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(103);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(76);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(96);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(114);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(70);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(80);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(61);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(75);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(55);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(82);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(60);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(77);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(66);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(73);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(106);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(56);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(58);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(72);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(57);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '&' &&
          lookahead != '\'' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_LBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_with);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_operation);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_def);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_construct);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_construct);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__spacing);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_if);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_while);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_catch);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_include);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_use);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 42},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 42},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 42},
  [11] = {.lex_state = 42},
  [12] = {.lex_state = 42},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 42},
  [15] = {.lex_state = 42},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 42},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 42},
  [25] = {.lex_state = 42},
  [26] = {.lex_state = 42},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 39},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 39},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_LT_LBRACE] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_operation] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_construct] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(138),
    [sym__statement] = STATE(21),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_func] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(50),
    [anon_sym_COLON] = ACTIONS(53),
    [sym_number] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_LT_LBRACE] = ACTIONS(62),
    [anon_sym_with] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_def] = ACTIONS(71),
    [anon_sym_construct] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(80),
    [anon_sym_catch] = ACTIONS(83),
    [anon_sym_include] = ACTIONS(86),
    [anon_sym_use] = ACTIONS(89),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(92),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [4] = {
    [sym__statement] = STATE(5),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [5] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(96),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym_function_definition] = STATE(73),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(45),
    [sym_string] = STATE(73),
    [sym_expression] = STATE(73),
    [sym_with_expr] = STATE(73),
    [sym_array] = STATE(73),
    [sym_type_definition] = STATE(73),
    [sym_if] = STATE(73),
    [sym_while] = STATE(73),
    [sym_catch] = STATE(73),
    [sym_include] = STATE(73),
    [sym_use] = STATE(73),
    [sym_def] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym__statement_repeat1] = STATE(34),
    [anon_sym_AMP] = ACTIONS(98),
    [anon_sym_func] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(50),
    [anon_sym_COLON] = ACTIONS(53),
    [sym_number] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_LT_LBRACE] = ACTIONS(62),
    [anon_sym_with] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_def] = ACTIONS(71),
    [anon_sym_construct] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(80),
    [anon_sym_catch] = ACTIONS(83),
    [anon_sym_include] = ACTIONS(86),
    [anon_sym_use] = ACTIONS(89),
  },
  [7] = {
    [sym__statement] = STATE(6),
    [sym_function_definition] = STATE(73),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(45),
    [sym_string] = STATE(73),
    [sym_expression] = STATE(73),
    [sym_with_expr] = STATE(73),
    [sym_array] = STATE(73),
    [sym_type_definition] = STATE(73),
    [sym_if] = STATE(73),
    [sym_while] = STATE(73),
    [sym_catch] = STATE(73),
    [sym_include] = STATE(73),
    [sym_use] = STATE(73),
    [sym_def] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym__statement_repeat1] = STATE(34),
    [anon_sym_AMP] = ACTIONS(106),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(110),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [8] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(112),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [9] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(114),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [10] = {
    [sym__statement] = STATE(8),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(116),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [11] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(118),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [12] = {
    [sym__statement] = STATE(9),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(120),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [13] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(120),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [14] = {
    [sym__statement] = STATE(19),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(122),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [15] = {
    [sym__statement] = STATE(13),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(124),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [16] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(126),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [17] = {
    [sym__statement] = STATE(7),
    [sym_function_definition] = STATE(73),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(45),
    [sym_string] = STATE(73),
    [sym_expression] = STATE(73),
    [sym_with_expr] = STATE(73),
    [sym_array] = STATE(73),
    [sym_type_definition] = STATE(73),
    [sym_if] = STATE(73),
    [sym_while] = STATE(73),
    [sym_catch] = STATE(73),
    [sym_include] = STATE(73),
    [sym_use] = STATE(73),
    [sym_def] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym__statement_repeat1] = STATE(34),
    [anon_sym_AMP] = ACTIONS(106),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [18] = {
    [sym__statement] = STATE(16),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(130),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [19] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(116),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [20] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(132),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [21] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [22] = {
    [sym__statement] = STATE(25),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(136),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [23] = {
    [sym__statement] = STATE(3),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(138),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [24] = {
    [sym__statement] = STATE(11),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(11),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(96),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [25] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(140),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [26] = {
    [sym__statement] = STATE(20),
    [sym_function_definition] = STATE(81),
    [sym_func] = STATE(89),
    [sym_block] = STATE(89),
    [sym_call] = STATE(65),
    [sym_string] = STATE(81),
    [sym_expression] = STATE(81),
    [sym_with_expr] = STATE(81),
    [sym_array] = STATE(81),
    [sym_type_definition] = STATE(81),
    [sym_if] = STATE(81),
    [sym_while] = STATE(81),
    [sym_catch] = STATE(81),
    [sym_include] = STATE(81),
    [sym_use] = STATE(81),
    [sym_def] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(20),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(142),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(144), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LT_LBRACE,
    ACTIONS(146), 12,
      anon_sym_func,
      sym_identifier,
      sym_number,
      anon_sym_with,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_construct,
      anon_sym_if,
      anon_sym_while,
      anon_sym_catch,
      anon_sym_include,
      anon_sym_use,
  [24] = 2,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LT_LBRACE,
    ACTIONS(150), 12,
      anon_sym_func,
      sym_identifier,
      sym_number,
      anon_sym_with,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_construct,
      anon_sym_if,
      anon_sym_while,
      anon_sym_catch,
      anon_sym_include,
      anon_sym_use,
  [48] = 2,
    ACTIONS(152), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LT_LBRACE,
    ACTIONS(154), 12,
      anon_sym_func,
      sym_identifier,
      sym_number,
      anon_sym_with,
      anon_sym_LBRACK,
      anon_sym_def,
      anon_sym_construct,
      anon_sym_if,
      anon_sym_while,
      anon_sym_catch,
      anon_sym_include,
      anon_sym_use,
  [72] = 2,
    ACTIONS(152), 5,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LT_LBRACE,
    ACTIONS(154), 13,
      anon_sym_func,
      sym_identifier,
      sym_number,
      anon_sym_with,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_def,
      anon_sym_construct,
      anon_sym_if,
      anon_sym_while,
      anon_sym_catch,
      anon_sym_include,
      anon_sym_use,
  [95] = 2,
    ACTIONS(144), 5,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LT_LBRACE,
    ACTIONS(146), 13,
      anon_sym_func,
      sym_identifier,
      sym_number,
      anon_sym_with,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_def,
      anon_sym_construct,
      anon_sym_if,
      anon_sym_while,
      anon_sym_catch,
      anon_sym_include,
      anon_sym_use,
  [118] = 2,
    ACTIONS(148), 5,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LT_LBRACE,
    ACTIONS(150), 13,
      anon_sym_func,
      sym_identifier,
      sym_number,
      anon_sym_with,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_def,
      anon_sym_construct,
      anon_sym_if,
      anon_sym_while,
      anon_sym_catch,
      anon_sym_include,
      anon_sym_use,
  [141] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(156), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(42), 1,
      aux_sym__statement_repeat1,
    STATE(50), 1,
      sym_call,
  [157] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(156), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(42), 1,
      aux_sym__statement_repeat1,
    STATE(62), 1,
      sym_call,
  [173] = 3,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_type_definition_repeat1,
    ACTIONS(160), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [184] = 3,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_string_repeat1,
    ACTIONS(167), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [195] = 4,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_type_definition_repeat1,
  [208] = 4,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_type_definition_repeat1,
  [221] = 3,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(181), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [232] = 3,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(186), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [243] = 4,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_type_definition_repeat1,
  [256] = 3,
    ACTIONS(192), 1,
      anon_sym_AMP,
    STATE(42), 1,
      aux_sym__statement_repeat1,
    ACTIONS(195), 2,
      sym_identifier,
      anon_sym_COLON,
  [267] = 4,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_type_definition_repeat1,
  [280] = 3,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(48), 1,
      aux_sym_type_definition_repeat2,
  [290] = 3,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(207), 1,
      sym__spacing,
  [300] = 3,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_type_definition_repeat2,
  [310] = 3,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_type_definition_repeat2,
  [320] = 3,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_type_definition_repeat2,
  [330] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(67), 1,
      sym_call,
  [340] = 3,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      sym__spacing,
  [350] = 2,
    ACTIONS(219), 1,
      sym__spacing,
    ACTIONS(217), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [358] = 2,
    ACTIONS(223), 1,
      sym__spacing,
    ACTIONS(221), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [366] = 3,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(55), 1,
      aux_sym_type_definition_repeat2,
  [376] = 3,
    ACTIONS(225), 1,
      aux_sym_block_token1,
    ACTIONS(227), 1,
      anon_sym_PIPE,
    STATE(69), 1,
      aux_sym_block_repeat1,
  [386] = 3,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(55), 1,
      aux_sym_type_definition_repeat2,
  [396] = 3,
    ACTIONS(234), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      sym_identifier,
    STATE(59), 1,
      aux_sym_with_expr_repeat1,
  [406] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(104), 1,
      sym_call,
  [416] = 3,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_type_definition_repeat2,
  [426] = 3,
    ACTIONS(238), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_with_expr_repeat1,
  [436] = 1,
    ACTIONS(160), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
  [442] = 3,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(55), 1,
      aux_sym_type_definition_repeat2,
  [452] = 3,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(242), 1,
      anon_sym_SEMI,
    ACTIONS(244), 1,
      sym__spacing,
  [462] = 3,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(61), 1,
      aux_sym_type_definition_repeat2,
  [472] = 3,
    ACTIONS(225), 1,
      aux_sym_block_token1,
    ACTIONS(246), 1,
      anon_sym_PIPE,
    STATE(54), 1,
      aux_sym_block_repeat1,
  [482] = 3,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    ACTIONS(250), 1,
      sym__spacing,
  [492] = 3,
    ACTIONS(252), 1,
      anon_sym_SEMI,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_with_expr_repeat1,
  [502] = 3,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(259), 1,
      sym__spacing,
  [512] = 2,
    ACTIONS(263), 1,
      sym__spacing,
    ACTIONS(261), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [520] = 3,
    ACTIONS(265), 1,
      aux_sym_block_token1,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    STATE(69), 1,
      aux_sym_block_repeat1,
  [530] = 2,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      sym__spacing,
  [537] = 2,
    ACTIONS(274), 1,
      anon_sym_SEMI,
    ACTIONS(276), 1,
      sym__spacing,
  [544] = 2,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      sym__spacing,
  [551] = 2,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      sym__spacing,
  [558] = 2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
  [565] = 1,
    ACTIONS(268), 2,
      aux_sym_block_token1,
      anon_sym_PIPE,
  [570] = 2,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      sym__spacing,
  [577] = 2,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    ACTIONS(288), 1,
      sym__spacing,
  [584] = 2,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      sym__spacing,
  [591] = 2,
    ACTIONS(294), 1,
      anon_sym_SEMI,
    ACTIONS(296), 1,
      sym__spacing,
  [598] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_namespace,
  [605] = 2,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    ACTIONS(250), 1,
      sym__spacing,
  [612] = 2,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      sym__spacing,
  [619] = 2,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      sym__spacing,
  [626] = 2,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      sym__spacing,
  [633] = 2,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      sym__spacing,
  [640] = 2,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    ACTIONS(320), 1,
      sym__spacing,
  [647] = 2,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    ACTIONS(324), 1,
      sym__spacing,
  [654] = 2,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    ACTIONS(328), 1,
      sym__spacing,
  [661] = 2,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    ACTIONS(332), 1,
      sym__spacing,
  [668] = 2,
    ACTIONS(334), 1,
      anon_sym_SEMI,
    ACTIONS(336), 1,
      sym__spacing,
  [675] = 2,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(340), 1,
      sym__spacing,
  [682] = 1,
    ACTIONS(342), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [687] = 2,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      sym__spacing,
  [694] = 2,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    ACTIONS(350), 1,
      sym__spacing,
  [701] = 2,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(354), 1,
      sym__spacing,
  [708] = 2,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(358), 1,
      sym__spacing,
  [715] = 2,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      sym__spacing,
  [722] = 2,
    ACTIONS(364), 1,
      anon_sym_SEMI,
    ACTIONS(366), 1,
      sym__spacing,
  [729] = 2,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      sym__spacing,
  [736] = 2,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(374), 1,
      sym__spacing,
  [743] = 2,
    ACTIONS(376), 1,
      anon_sym_SEMI,
    ACTIONS(378), 1,
      sym__spacing,
  [750] = 2,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    ACTIONS(382), 1,
      sym__spacing,
  [757] = 2,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      sym__spacing,
  [764] = 2,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(388), 1,
      sym__spacing,
  [771] = 2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_block,
  [778] = 2,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      sym__spacing,
  [785] = 1,
    ACTIONS(394), 1,
      sym__spacing,
  [789] = 1,
    ACTIONS(396), 1,
      sym_identifier,
  [793] = 1,
    ACTIONS(398), 1,
      sym__spacing,
  [797] = 1,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
  [801] = 1,
    ACTIONS(402), 1,
      sym__spacing,
  [805] = 1,
    ACTIONS(404), 1,
      sym__spacing,
  [809] = 1,
    ACTIONS(406), 1,
      sym__spacing,
  [813] = 1,
    ACTIONS(408), 1,
      sym__spacing,
  [817] = 1,
    ACTIONS(410), 1,
      sym__spacing,
  [821] = 1,
    ACTIONS(412), 1,
      sym_identifier,
  [825] = 1,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
  [829] = 1,
    ACTIONS(416), 1,
      sym__spacing,
  [833] = 1,
    ACTIONS(418), 1,
      sym__spacing,
  [837] = 1,
    ACTIONS(420), 1,
      sym__spacing,
  [841] = 1,
    ACTIONS(422), 1,
      sym__spacing,
  [845] = 1,
    ACTIONS(424), 1,
      sym__spacing,
  [849] = 1,
    ACTIONS(426), 1,
      sym__spacing,
  [853] = 1,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
  [857] = 1,
    ACTIONS(215), 1,
      sym__spacing,
  [861] = 1,
    ACTIONS(430), 1,
      sym__spacing,
  [865] = 1,
    ACTIONS(432), 1,
      sym__spacing,
  [869] = 1,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
  [873] = 1,
    ACTIONS(436), 1,
      sym__spacing,
  [877] = 1,
    ACTIONS(438), 1,
      sym__spacing,
  [881] = 1,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
  [885] = 1,
    ACTIONS(442), 1,
      sym__spacing,
  [889] = 1,
    ACTIONS(444), 1,
      sym__spacing,
  [893] = 1,
    ACTIONS(446), 1,
      sym__spacing,
  [897] = 1,
    ACTIONS(448), 1,
      sym__spacing,
  [901] = 1,
    ACTIONS(450), 1,
      sym_identifier,
  [905] = 1,
    ACTIONS(452), 1,
      sym__spacing,
  [909] = 1,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
  [913] = 1,
    ACTIONS(456), 1,
      sym__spacing,
  [917] = 1,
    ACTIONS(458), 1,
      sym__spacing,
  [921] = 1,
    ACTIONS(460), 1,
      sym__spacing,
  [925] = 1,
    ACTIONS(462), 1,
      sym__spacing,
  [929] = 1,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
  [933] = 1,
    ACTIONS(466), 1,
      sym__spacing,
  [937] = 1,
    ACTIONS(468), 1,
      sym_identifier,
  [941] = 1,
    ACTIONS(470), 1,
      sym_identifier,
  [945] = 1,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
  [949] = 1,
    ACTIONS(474), 1,
      sym__spacing,
  [953] = 1,
    ACTIONS(476), 1,
      sym__spacing,
  [957] = 1,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
  [961] = 1,
    ACTIONS(480), 1,
      sym__spacing,
  [965] = 1,
    ACTIONS(482), 1,
      sym_identifier,
  [969] = 1,
    ACTIONS(244), 1,
      sym__spacing,
  [973] = 1,
    ACTIONS(484), 1,
      anon_sym_in,
  [977] = 1,
    ACTIONS(486), 1,
      sym__spacing,
  [981] = 1,
    ACTIONS(488), 1,
      sym__spacing,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 24,
  [SMALL_STATE(29)] = 48,
  [SMALL_STATE(30)] = 72,
  [SMALL_STATE(31)] = 95,
  [SMALL_STATE(32)] = 118,
  [SMALL_STATE(33)] = 141,
  [SMALL_STATE(34)] = 157,
  [SMALL_STATE(35)] = 173,
  [SMALL_STATE(36)] = 184,
  [SMALL_STATE(37)] = 195,
  [SMALL_STATE(38)] = 208,
  [SMALL_STATE(39)] = 221,
  [SMALL_STATE(40)] = 232,
  [SMALL_STATE(41)] = 243,
  [SMALL_STATE(42)] = 256,
  [SMALL_STATE(43)] = 267,
  [SMALL_STATE(44)] = 280,
  [SMALL_STATE(45)] = 290,
  [SMALL_STATE(46)] = 300,
  [SMALL_STATE(47)] = 310,
  [SMALL_STATE(48)] = 320,
  [SMALL_STATE(49)] = 330,
  [SMALL_STATE(50)] = 340,
  [SMALL_STATE(51)] = 350,
  [SMALL_STATE(52)] = 358,
  [SMALL_STATE(53)] = 366,
  [SMALL_STATE(54)] = 376,
  [SMALL_STATE(55)] = 386,
  [SMALL_STATE(56)] = 396,
  [SMALL_STATE(57)] = 406,
  [SMALL_STATE(58)] = 416,
  [SMALL_STATE(59)] = 426,
  [SMALL_STATE(60)] = 436,
  [SMALL_STATE(61)] = 442,
  [SMALL_STATE(62)] = 452,
  [SMALL_STATE(63)] = 462,
  [SMALL_STATE(64)] = 472,
  [SMALL_STATE(65)] = 482,
  [SMALL_STATE(66)] = 492,
  [SMALL_STATE(67)] = 502,
  [SMALL_STATE(68)] = 512,
  [SMALL_STATE(69)] = 520,
  [SMALL_STATE(70)] = 530,
  [SMALL_STATE(71)] = 537,
  [SMALL_STATE(72)] = 544,
  [SMALL_STATE(73)] = 551,
  [SMALL_STATE(74)] = 558,
  [SMALL_STATE(75)] = 565,
  [SMALL_STATE(76)] = 570,
  [SMALL_STATE(77)] = 577,
  [SMALL_STATE(78)] = 584,
  [SMALL_STATE(79)] = 591,
  [SMALL_STATE(80)] = 598,
  [SMALL_STATE(81)] = 605,
  [SMALL_STATE(82)] = 612,
  [SMALL_STATE(83)] = 619,
  [SMALL_STATE(84)] = 626,
  [SMALL_STATE(85)] = 633,
  [SMALL_STATE(86)] = 640,
  [SMALL_STATE(87)] = 647,
  [SMALL_STATE(88)] = 654,
  [SMALL_STATE(89)] = 661,
  [SMALL_STATE(90)] = 668,
  [SMALL_STATE(91)] = 675,
  [SMALL_STATE(92)] = 682,
  [SMALL_STATE(93)] = 687,
  [SMALL_STATE(94)] = 694,
  [SMALL_STATE(95)] = 701,
  [SMALL_STATE(96)] = 708,
  [SMALL_STATE(97)] = 715,
  [SMALL_STATE(98)] = 722,
  [SMALL_STATE(99)] = 729,
  [SMALL_STATE(100)] = 736,
  [SMALL_STATE(101)] = 743,
  [SMALL_STATE(102)] = 750,
  [SMALL_STATE(103)] = 757,
  [SMALL_STATE(104)] = 764,
  [SMALL_STATE(105)] = 771,
  [SMALL_STATE(106)] = 778,
  [SMALL_STATE(107)] = 785,
  [SMALL_STATE(108)] = 789,
  [SMALL_STATE(109)] = 793,
  [SMALL_STATE(110)] = 797,
  [SMALL_STATE(111)] = 801,
  [SMALL_STATE(112)] = 805,
  [SMALL_STATE(113)] = 809,
  [SMALL_STATE(114)] = 813,
  [SMALL_STATE(115)] = 817,
  [SMALL_STATE(116)] = 821,
  [SMALL_STATE(117)] = 825,
  [SMALL_STATE(118)] = 829,
  [SMALL_STATE(119)] = 833,
  [SMALL_STATE(120)] = 837,
  [SMALL_STATE(121)] = 841,
  [SMALL_STATE(122)] = 845,
  [SMALL_STATE(123)] = 849,
  [SMALL_STATE(124)] = 853,
  [SMALL_STATE(125)] = 857,
  [SMALL_STATE(126)] = 861,
  [SMALL_STATE(127)] = 865,
  [SMALL_STATE(128)] = 869,
  [SMALL_STATE(129)] = 873,
  [SMALL_STATE(130)] = 877,
  [SMALL_STATE(131)] = 881,
  [SMALL_STATE(132)] = 885,
  [SMALL_STATE(133)] = 889,
  [SMALL_STATE(134)] = 893,
  [SMALL_STATE(135)] = 897,
  [SMALL_STATE(136)] = 901,
  [SMALL_STATE(137)] = 905,
  [SMALL_STATE(138)] = 909,
  [SMALL_STATE(139)] = 913,
  [SMALL_STATE(140)] = 917,
  [SMALL_STATE(141)] = 921,
  [SMALL_STATE(142)] = 925,
  [SMALL_STATE(143)] = 929,
  [SMALL_STATE(144)] = 933,
  [SMALL_STATE(145)] = 937,
  [SMALL_STATE(146)] = 941,
  [SMALL_STATE(147)] = 945,
  [SMALL_STATE(148)] = 949,
  [SMALL_STATE(149)] = 953,
  [SMALL_STATE(150)] = 957,
  [SMALL_STATE(151)] = 961,
  [SMALL_STATE(152)] = 965,
  [SMALL_STATE(153)] = 969,
  [SMALL_STATE(154)] = 973,
  [SMALL_STATE(155)] = 977,
  [SMALL_STATE(156)] = 981,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(113),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(39),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(42),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat2, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat2, 2), SHIFT_REPEAT(105),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_expr_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_expr_repeat1, 2), SHIFT_REPEAT(66),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(126),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 10),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 10),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_expr, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_expr, 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 12),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 12),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch, 11),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch, 11),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 11),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 11),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 11),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 11),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch, 10),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch, 10),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 10),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 10),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat2, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch, 9),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch, 9),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 5),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 9),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 9),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 9),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 9),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_expr, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_expr, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 7),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 7),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 8),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 8),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [454] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_SPL(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

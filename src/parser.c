#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_AMP = 1,
  anon_sym_SEMI = 2,
  anon_sym_func = 3,
  anon_sym_AT = 4,
  anon_sym_BANG_LBRACE = 5,
  aux_sym_func_token1 = 6,
  anon_sym_RBRACE = 7,
  anon_sym_LBRACE = 8,
  aux_sym_block_token1 = 9,
  anon_sym_PIPE = 10,
  sym_identifier = 11,
  anon_sym_COLON = 12,
  sym_number = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_string_token1 = 15,
  anon_sym_LT_LBRACE = 16,
  anon_sym_with = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym_operation = 20,
  anon_sym_def = 21,
  anon_sym_EQ = 22,
  anon_sym_construct = 23,
  anon_sym_namespace = 24,
  sym__spacing = 25,
  anon_sym_if = 26,
  anon_sym_while = 27,
  anon_sym_catch = 28,
  anon_sym_include = 29,
  anon_sym_in = 30,
  anon_sym_use = 31,
  sym_source_file = 32,
  sym__statement = 33,
  sym_function_definition = 34,
  sym_func = 35,
  sym_block = 36,
  sym_call = 37,
  sym_string = 38,
  sym_expression = 39,
  sym_with_expr = 40,
  sym_array = 41,
  sym_type_definition = 42,
  sym_if = 43,
  sym_while = 44,
  sym_catch = 45,
  sym_include = 46,
  sym_use = 47,
  sym_def = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym__statement_repeat1 = 50,
  aux_sym_func_repeat1 = 51,
  aux_sym_block_repeat1 = 52,
  aux_sym_string_repeat1 = 53,
  aux_sym_with_expr_repeat1 = 54,
  aux_sym_type_definition_repeat1 = 55,
  aux_sym_type_definition_repeat2 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AMP] = "&",
  [anon_sym_SEMI] = ";",
  [anon_sym_func] = "func",
  [anon_sym_AT] = "@",
  [anon_sym_BANG_LBRACE] = "!{",
  [aux_sym_func_token1] = "func_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [aux_sym_block_token1] = "block_token1",
  [anon_sym_PIPE] = "|",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
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
  [aux_sym_func_repeat1] = "func_repeat1",
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
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_BANG_LBRACE] = anon_sym_BANG_LBRACE,
  [aux_sym_func_token1] = aux_sym_func_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_block_token1] = aux_sym_block_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
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
  [aux_sym_func_repeat1] = aux_sym_func_repeat1,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_func_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [aux_sym_func_repeat1] = {
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
  [5] = 2,
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
  [30] = 28,
  [31] = 27,
  [32] = 29,
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
  [47] = 44,
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
  [68] = 49,
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
  [85] = 84,
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
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 154,
  [164] = 164,
  [165] = 147,
  [166] = 166,
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
      if (eof) ADVANCE(46);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '&') ADVANCE(47);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == 'w') ADVANCE(21);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '&') ADVANCE(47);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(95);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(47);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{') ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == '{') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == '{') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '&') ADVANCE(47);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ';') ADVANCE(95);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_func);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BANG_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_func_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_func_token1);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_func_token1);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_func_token1);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_func_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_block_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(81);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(79);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(50);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(77);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(88);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(72);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(64);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(110);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(86);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(103);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(123);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(80);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(90);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(71);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(85);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(65);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(70);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(87);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(83);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(113);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(66);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(68);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(82);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(67);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(101);
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
          lookahead != '}') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_LBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_with);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_operation);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_def);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_construct);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_construct);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__spacing);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__spacing);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__spacing);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_if);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_while);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_catch);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_include);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_use);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 45},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 45},
  [13] = {.lex_state = 45},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 45},
  [21] = {.lex_state = 45},
  [22] = {.lex_state = 45},
  [23] = {.lex_state = 45},
  [24] = {.lex_state = 45},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 45},
  [28] = {.lex_state = 45},
  [29] = {.lex_state = 45},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 42},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 42},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 42},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 42},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_BANG_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
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
    [sym_source_file] = STATE(121),
    [sym__statement] = STATE(21),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
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
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_func] = ACTIONS(44),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(47),
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
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(92),
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
  [4] = {
    [sym__statement] = STATE(24),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(94),
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
  [5] = {
    [sym__statement] = STATE(5),
    [sym_function_definition] = STATE(84),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(49),
    [sym_string] = STATE(84),
    [sym_expression] = STATE(84),
    [sym_with_expr] = STATE(84),
    [sym_array] = STATE(84),
    [sym_type_definition] = STATE(84),
    [sym_if] = STATE(84),
    [sym_while] = STATE(84),
    [sym_catch] = STATE(84),
    [sym_include] = STATE(84),
    [sym_use] = STATE(84),
    [sym_def] = STATE(84),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym__statement_repeat1] = STATE(34),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_func] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(50),
    [anon_sym_COLON] = ACTIONS(53),
    [sym_number] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_LT_LBRACE] = ACTIONS(62),
    [anon_sym_with] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(102),
    [anon_sym_def] = ACTIONS(71),
    [anon_sym_construct] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(80),
    [anon_sym_catch] = ACTIONS(83),
    [anon_sym_include] = ACTIONS(86),
    [anon_sym_use] = ACTIONS(89),
  },
  [6] = {
    [sym__statement] = STATE(25),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(25),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(104),
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
  [7] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(106),
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
  [8] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(108),
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
  [9] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(110),
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
  [10] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(112),
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
  [11] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(114),
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
  [12] = {
    [sym__statement] = STATE(9),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(116),
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
  [13] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(116),
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
  [14] = {
    [sym__statement] = STATE(5),
    [sym_function_definition] = STATE(84),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(49),
    [sym_string] = STATE(84),
    [sym_expression] = STATE(84),
    [sym_with_expr] = STATE(84),
    [sym_array] = STATE(84),
    [sym_type_definition] = STATE(84),
    [sym_if] = STATE(84),
    [sym_while] = STATE(84),
    [sym_catch] = STATE(84),
    [sym_include] = STATE(84),
    [sym_use] = STATE(84),
    [sym_def] = STATE(84),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym__statement_repeat1] = STATE(34),
    [anon_sym_AMP] = ACTIONS(118),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [15] = {
    [sym__statement] = STATE(11),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(11),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(124),
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
  [16] = {
    [sym__statement] = STATE(13),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(126),
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
  [17] = {
    [sym__statement] = STATE(26),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(92),
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
  [18] = {
    [sym__statement] = STATE(10),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(128),
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
  [19] = {
    [sym__statement] = STATE(14),
    [sym_function_definition] = STATE(84),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(49),
    [sym_string] = STATE(84),
    [sym_expression] = STATE(84),
    [sym_with_expr] = STATE(84),
    [sym_array] = STATE(84),
    [sym_type_definition] = STATE(84),
    [sym_if] = STATE(84),
    [sym_while] = STATE(84),
    [sym_catch] = STATE(84),
    [sym_include] = STATE(84),
    [sym_use] = STATE(84),
    [sym_def] = STATE(84),
    [aux_sym_source_file_repeat1] = STATE(14),
    [aux_sym__statement_repeat1] = STATE(34),
    [anon_sym_AMP] = ACTIONS(118),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [20] = {
    [sym__statement] = STATE(3),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(132),
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
  [21] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
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
    [sym__statement] = STATE(7),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(136),
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
  [23] = {
    [sym__statement] = STATE(8),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(114),
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
  [24] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(138),
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
  [25] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(140),
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
  [26] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(85),
    [sym_func] = STATE(77),
    [sym_block] = STATE(77),
    [sym_call] = STATE(68),
    [sym_string] = STATE(85),
    [sym_expression] = STATE(85),
    [sym_with_expr] = STATE(85),
    [sym_array] = STATE(85),
    [sym_type_definition] = STATE(85),
    [sym_if] = STATE(85),
    [sym_while] = STATE(85),
    [sym_catch] = STATE(85),
    [sym_include] = STATE(85),
    [sym_use] = STATE(85),
    [sym_def] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(33),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(142),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(144), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
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
      anon_sym_RBRACE,
      anon_sym_LBRACE,
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
      anon_sym_RBRACE,
      anon_sym_LBRACE,
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
  [141] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(156), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym__statement_repeat1,
    STATE(44), 1,
      sym_call,
  [157] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(156), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym__statement_repeat1,
    STATE(47), 1,
      sym_call,
  [173] = 3,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(160), 2,
      aux_sym_func_token1,
      aux_sym_string_token1,
  [184] = 4,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(37), 1,
      aux_sym_type_definition_repeat1,
  [197] = 4,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_type_definition_repeat1,
  [210] = 3,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(38), 1,
      aux_sym_type_definition_repeat1,
    ACTIONS(174), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [221] = 3,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(179), 2,
      aux_sym_func_token1,
      aux_sym_string_token1,
  [232] = 4,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_SEMI,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_type_definition_repeat1,
  [245] = 4,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_type_definition_repeat1,
  [258] = 3,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym_string_repeat1,
    ACTIONS(192), 2,
      aux_sym_func_token1,
      aux_sym_string_token1,
  [269] = 3,
    ACTIONS(196), 1,
      anon_sym_AMP,
    STATE(43), 1,
      aux_sym__statement_repeat1,
    ACTIONS(199), 2,
      sym_identifier,
      anon_sym_COLON,
  [280] = 3,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(205), 1,
      sym__spacing,
  [290] = 3,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_type_definition_repeat2,
  [300] = 3,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    ACTIONS(211), 1,
      sym_identifier,
    STATE(61), 1,
      aux_sym_with_expr_repeat1,
  [310] = 3,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      sym__spacing,
  [320] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(111), 1,
      sym_call,
  [330] = 3,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    ACTIONS(219), 1,
      sym__spacing,
  [340] = 2,
    ACTIONS(223), 1,
      sym__spacing,
    ACTIONS(221), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [348] = 3,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_type_definition_repeat2,
  [358] = 3,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_type_definition_repeat2,
  [368] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(69), 1,
      sym_call,
  [378] = 3,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_type_definition_repeat2,
  [388] = 2,
    STATE(55), 1,
      aux_sym_func_repeat1,
    ACTIONS(229), 2,
      aux_sym_func_token1,
      sym__spacing,
  [396] = 2,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 2,
      aux_sym_func_token1,
      sym__spacing,
  [404] = 3,
    ACTIONS(236), 1,
      aux_sym_block_token1,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    STATE(75), 1,
      aux_sym_block_repeat1,
  [414] = 3,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(54), 1,
      aux_sym_type_definition_repeat2,
  [424] = 3,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(60), 1,
      aux_sym_type_definition_repeat2,
  [434] = 3,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(60), 1,
      aux_sym_type_definition_repeat2,
  [444] = 3,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(73), 1,
      aux_sym_with_expr_repeat1,
  [454] = 3,
    ACTIONS(249), 1,
      aux_sym_func_token1,
    ACTIONS(251), 1,
      sym__spacing,
    STATE(55), 1,
      aux_sym_func_repeat1,
  [464] = 2,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 2,
      aux_sym_func_token1,
      sym__spacing,
  [472] = 3,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(59), 1,
      aux_sym_type_definition_repeat2,
  [482] = 1,
    ACTIONS(174), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
  [488] = 3,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(60), 1,
      aux_sym_type_definition_repeat2,
  [498] = 3,
    ACTIONS(255), 1,
      aux_sym_func_token1,
    ACTIONS(257), 1,
      sym__spacing,
    STATE(62), 1,
      aux_sym_func_repeat1,
  [508] = 3,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(261), 1,
      sym__spacing,
  [518] = 3,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    ACTIONS(265), 1,
      sym__spacing,
  [528] = 2,
    ACTIONS(269), 1,
      sym__spacing,
    ACTIONS(267), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [536] = 3,
    ACTIONS(236), 1,
      aux_sym_block_token1,
    ACTIONS(271), 1,
      anon_sym_PIPE,
    STATE(57), 1,
      aux_sym_block_repeat1,
  [546] = 3,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      anon_sym_AT,
    STATE(86), 1,
      sym_block,
  [556] = 3,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(73), 1,
      aux_sym_with_expr_repeat1,
  [566] = 2,
    ACTIONS(282), 1,
      sym__spacing,
    ACTIONS(280), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [574] = 3,
    ACTIONS(284), 1,
      aux_sym_block_token1,
    ACTIONS(287), 1,
      anon_sym_PIPE,
    STATE(75), 1,
      aux_sym_block_repeat1,
  [584] = 2,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(291), 1,
      sym__spacing,
  [591] = 2,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      sym__spacing,
  [598] = 1,
    ACTIONS(287), 2,
      aux_sym_block_token1,
      anon_sym_PIPE,
  [603] = 2,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(299), 1,
      sym__spacing,
  [610] = 2,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    ACTIONS(303), 1,
      sym__spacing,
  [617] = 2,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    ACTIONS(307), 1,
      sym__spacing,
  [624] = 2,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__spacing,
  [631] = 2,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 1,
      anon_sym_namespace,
  [638] = 2,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    ACTIONS(219), 1,
      sym__spacing,
  [645] = 2,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(261), 1,
      sym__spacing,
  [652] = 2,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      sym__spacing,
  [659] = 2,
    ACTIONS(321), 1,
      anon_sym_SEMI,
    ACTIONS(323), 1,
      sym__spacing,
  [666] = 2,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    ACTIONS(327), 1,
      sym__spacing,
  [673] = 2,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    ACTIONS(331), 1,
      sym__spacing,
  [680] = 2,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(335), 1,
      sym__spacing,
  [687] = 2,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    ACTIONS(339), 1,
      sym__spacing,
  [694] = 2,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(343), 1,
      sym__spacing,
  [701] = 2,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    ACTIONS(347), 1,
      sym__spacing,
  [708] = 2,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      sym__spacing,
  [715] = 2,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    ACTIONS(355), 1,
      sym__spacing,
  [722] = 2,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    ACTIONS(359), 1,
      sym__spacing,
  [729] = 2,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    ACTIONS(363), 1,
      sym__spacing,
  [736] = 2,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(367), 1,
      sym__spacing,
  [743] = 1,
    ACTIONS(369), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [748] = 2,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(373), 1,
      sym__spacing,
  [755] = 2,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    ACTIONS(377), 1,
      sym__spacing,
  [762] = 2,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    ACTIONS(381), 1,
      sym__spacing,
  [769] = 2,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    ACTIONS(385), 1,
      sym__spacing,
  [776] = 2,
    ACTIONS(387), 1,
      anon_sym_SEMI,
    ACTIONS(389), 1,
      sym__spacing,
  [783] = 2,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    ACTIONS(393), 1,
      sym__spacing,
  [790] = 2,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    ACTIONS(397), 1,
      sym__spacing,
  [797] = 2,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    ACTIONS(401), 1,
      sym__spacing,
  [804] = 2,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    ACTIONS(405), 1,
      sym__spacing,
  [811] = 2,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    ACTIONS(409), 1,
      sym__spacing,
  [818] = 2,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    ACTIONS(413), 1,
      sym__spacing,
  [825] = 2,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      sym__spacing,
  [832] = 2,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    ACTIONS(419), 1,
      sym__spacing,
  [839] = 2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_block,
  [846] = 1,
    ACTIONS(421), 1,
      sym_identifier,
  [850] = 1,
    ACTIONS(423), 1,
      sym__spacing,
  [854] = 1,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
  [858] = 1,
    ACTIONS(427), 1,
      anon_sym_in,
  [862] = 1,
    ACTIONS(429), 1,
      sym__spacing,
  [866] = 1,
    ACTIONS(431), 1,
      sym__spacing,
  [870] = 1,
    ACTIONS(433), 1,
      sym__spacing,
  [874] = 1,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
  [878] = 1,
    ACTIONS(437), 1,
      sym__spacing,
  [882] = 1,
    ACTIONS(439), 1,
      sym__spacing,
  [886] = 1,
    ACTIONS(441), 1,
      sym_identifier,
  [890] = 1,
    ACTIONS(443), 1,
      sym__spacing,
  [894] = 1,
    ACTIONS(445), 1,
      sym_identifier,
  [898] = 1,
    ACTIONS(447), 1,
      anon_sym_LBRACE,
  [902] = 1,
    ACTIONS(449), 1,
      sym__spacing,
  [906] = 1,
    ACTIONS(451), 1,
      sym__spacing,
  [910] = 1,
    ACTIONS(453), 1,
      sym__spacing,
  [914] = 1,
    ACTIONS(455), 1,
      sym_identifier,
  [918] = 1,
    ACTIONS(457), 1,
      sym__spacing,
  [922] = 1,
    ACTIONS(459), 1,
      sym__spacing,
  [926] = 1,
    ACTIONS(461), 1,
      sym__spacing,
  [930] = 1,
    ACTIONS(463), 1,
      sym__spacing,
  [934] = 1,
    ACTIONS(465), 1,
      sym__spacing,
  [938] = 1,
    ACTIONS(467), 1,
      sym__spacing,
  [942] = 1,
    ACTIONS(469), 1,
      sym__spacing,
  [946] = 1,
    ACTIONS(471), 1,
      sym__spacing,
  [950] = 1,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
  [954] = 1,
    ACTIONS(475), 1,
      sym__spacing,
  [958] = 1,
    ACTIONS(477), 1,
      sym__spacing,
  [962] = 1,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
  [966] = 1,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
  [970] = 1,
    ACTIONS(483), 1,
      sym__spacing,
  [974] = 1,
    ACTIONS(485), 1,
      sym_identifier,
  [978] = 1,
    ACTIONS(487), 1,
      sym__spacing,
  [982] = 1,
    ACTIONS(489), 1,
      sym__spacing,
  [986] = 1,
    ACTIONS(491), 1,
      anon_sym_BANG_LBRACE,
  [990] = 1,
    ACTIONS(493), 1,
      sym__spacing,
  [994] = 1,
    ACTIONS(495), 1,
      sym__spacing,
  [998] = 1,
    ACTIONS(497), 1,
      sym__spacing,
  [1002] = 1,
    ACTIONS(499), 1,
      sym__spacing,
  [1006] = 1,
    ACTIONS(205), 1,
      sym__spacing,
  [1010] = 1,
    ACTIONS(501), 1,
      sym__spacing,
  [1014] = 1,
    ACTIONS(503), 1,
      sym__spacing,
  [1018] = 1,
    ACTIONS(505), 1,
      sym__spacing,
  [1022] = 1,
    ACTIONS(507), 1,
      sym__spacing,
  [1026] = 1,
    ACTIONS(509), 1,
      sym_identifier,
  [1030] = 1,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
  [1034] = 1,
    ACTIONS(513), 1,
      sym_identifier,
  [1038] = 1,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
  [1042] = 1,
    ACTIONS(215), 1,
      sym__spacing,
  [1046] = 1,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
  [1050] = 1,
    ACTIONS(519), 1,
      sym__spacing,
  [1054] = 1,
    ACTIONS(521), 1,
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
  [SMALL_STATE(37)] = 197,
  [SMALL_STATE(38)] = 210,
  [SMALL_STATE(39)] = 221,
  [SMALL_STATE(40)] = 232,
  [SMALL_STATE(41)] = 245,
  [SMALL_STATE(42)] = 258,
  [SMALL_STATE(43)] = 269,
  [SMALL_STATE(44)] = 280,
  [SMALL_STATE(45)] = 290,
  [SMALL_STATE(46)] = 300,
  [SMALL_STATE(47)] = 310,
  [SMALL_STATE(48)] = 320,
  [SMALL_STATE(49)] = 330,
  [SMALL_STATE(50)] = 340,
  [SMALL_STATE(51)] = 348,
  [SMALL_STATE(52)] = 358,
  [SMALL_STATE(53)] = 368,
  [SMALL_STATE(54)] = 378,
  [SMALL_STATE(55)] = 388,
  [SMALL_STATE(56)] = 396,
  [SMALL_STATE(57)] = 404,
  [SMALL_STATE(58)] = 414,
  [SMALL_STATE(59)] = 424,
  [SMALL_STATE(60)] = 434,
  [SMALL_STATE(61)] = 444,
  [SMALL_STATE(62)] = 454,
  [SMALL_STATE(63)] = 464,
  [SMALL_STATE(64)] = 472,
  [SMALL_STATE(65)] = 482,
  [SMALL_STATE(66)] = 488,
  [SMALL_STATE(67)] = 498,
  [SMALL_STATE(68)] = 508,
  [SMALL_STATE(69)] = 518,
  [SMALL_STATE(70)] = 528,
  [SMALL_STATE(71)] = 536,
  [SMALL_STATE(72)] = 546,
  [SMALL_STATE(73)] = 556,
  [SMALL_STATE(74)] = 566,
  [SMALL_STATE(75)] = 574,
  [SMALL_STATE(76)] = 584,
  [SMALL_STATE(77)] = 591,
  [SMALL_STATE(78)] = 598,
  [SMALL_STATE(79)] = 603,
  [SMALL_STATE(80)] = 610,
  [SMALL_STATE(81)] = 617,
  [SMALL_STATE(82)] = 624,
  [SMALL_STATE(83)] = 631,
  [SMALL_STATE(84)] = 638,
  [SMALL_STATE(85)] = 645,
  [SMALL_STATE(86)] = 652,
  [SMALL_STATE(87)] = 659,
  [SMALL_STATE(88)] = 666,
  [SMALL_STATE(89)] = 673,
  [SMALL_STATE(90)] = 680,
  [SMALL_STATE(91)] = 687,
  [SMALL_STATE(92)] = 694,
  [SMALL_STATE(93)] = 701,
  [SMALL_STATE(94)] = 708,
  [SMALL_STATE(95)] = 715,
  [SMALL_STATE(96)] = 722,
  [SMALL_STATE(97)] = 729,
  [SMALL_STATE(98)] = 736,
  [SMALL_STATE(99)] = 743,
  [SMALL_STATE(100)] = 748,
  [SMALL_STATE(101)] = 755,
  [SMALL_STATE(102)] = 762,
  [SMALL_STATE(103)] = 769,
  [SMALL_STATE(104)] = 776,
  [SMALL_STATE(105)] = 783,
  [SMALL_STATE(106)] = 790,
  [SMALL_STATE(107)] = 797,
  [SMALL_STATE(108)] = 804,
  [SMALL_STATE(109)] = 811,
  [SMALL_STATE(110)] = 818,
  [SMALL_STATE(111)] = 825,
  [SMALL_STATE(112)] = 832,
  [SMALL_STATE(113)] = 839,
  [SMALL_STATE(114)] = 846,
  [SMALL_STATE(115)] = 850,
  [SMALL_STATE(116)] = 854,
  [SMALL_STATE(117)] = 858,
  [SMALL_STATE(118)] = 862,
  [SMALL_STATE(119)] = 866,
  [SMALL_STATE(120)] = 870,
  [SMALL_STATE(121)] = 874,
  [SMALL_STATE(122)] = 878,
  [SMALL_STATE(123)] = 882,
  [SMALL_STATE(124)] = 886,
  [SMALL_STATE(125)] = 890,
  [SMALL_STATE(126)] = 894,
  [SMALL_STATE(127)] = 898,
  [SMALL_STATE(128)] = 902,
  [SMALL_STATE(129)] = 906,
  [SMALL_STATE(130)] = 910,
  [SMALL_STATE(131)] = 914,
  [SMALL_STATE(132)] = 918,
  [SMALL_STATE(133)] = 922,
  [SMALL_STATE(134)] = 926,
  [SMALL_STATE(135)] = 930,
  [SMALL_STATE(136)] = 934,
  [SMALL_STATE(137)] = 938,
  [SMALL_STATE(138)] = 942,
  [SMALL_STATE(139)] = 946,
  [SMALL_STATE(140)] = 950,
  [SMALL_STATE(141)] = 954,
  [SMALL_STATE(142)] = 958,
  [SMALL_STATE(143)] = 962,
  [SMALL_STATE(144)] = 966,
  [SMALL_STATE(145)] = 970,
  [SMALL_STATE(146)] = 974,
  [SMALL_STATE(147)] = 978,
  [SMALL_STATE(148)] = 982,
  [SMALL_STATE(149)] = 986,
  [SMALL_STATE(150)] = 990,
  [SMALL_STATE(151)] = 994,
  [SMALL_STATE(152)] = 998,
  [SMALL_STATE(153)] = 1002,
  [SMALL_STATE(154)] = 1006,
  [SMALL_STATE(155)] = 1010,
  [SMALL_STATE(156)] = 1014,
  [SMALL_STATE(157)] = 1018,
  [SMALL_STATE(158)] = 1022,
  [SMALL_STATE(159)] = 1026,
  [SMALL_STATE(160)] = 1030,
  [SMALL_STATE(161)] = 1034,
  [SMALL_STATE(162)] = 1038,
  [SMALL_STATE(163)] = 1042,
  [SMALL_STATE(164)] = 1046,
  [SMALL_STATE(165)] = 1050,
  [SMALL_STATE(166)] = 1054,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(132),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(39),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(43),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(55),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat2, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat2, 2), SHIFT_REPEAT(113),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_expr_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_expr_repeat1, 2), SHIFT_REPEAT(73),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(142),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 7),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 7),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_expr, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_expr, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 12),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 12),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch, 11),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch, 11),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 11),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 11),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 11),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 11),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 11),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 11),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch, 10),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch, 10),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 5),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 10),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 10),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 10),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 10),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat2, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 10),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 10),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch, 9),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch, 9),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 9),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 9),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_expr, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_expr, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 9),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 9),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 8),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 8),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [435] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_spl(void) {
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

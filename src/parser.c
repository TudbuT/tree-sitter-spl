#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 170
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 58
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
  anon_sym_BANG = 5,
  anon_sym_LBRACE = 6,
  aux_sym_blocky_token1 = 7,
  anon_sym_RBRACE = 8,
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
  sym_blocky = 36,
  sym_block = 37,
  sym_call = 38,
  sym_string = 39,
  sym_expression = 40,
  sym_with_expr = 41,
  sym_array = 42,
  sym_type_definition = 43,
  sym_if = 44,
  sym_while = 45,
  sym_catch = 46,
  sym_include = 47,
  sym_use = 48,
  sym_def = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym__statement_repeat1 = 51,
  aux_sym_blocky_repeat1 = 52,
  aux_sym_block_repeat1 = 53,
  aux_sym_string_repeat1 = 54,
  aux_sym_with_expr_repeat1 = 55,
  aux_sym_type_definition_repeat1 = 56,
  aux_sym_type_definition_repeat2 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AMP] = "&",
  [anon_sym_SEMI] = ";",
  [anon_sym_func] = "func",
  [anon_sym_AT] = "@",
  [anon_sym_BANG] = "!",
  [anon_sym_LBRACE] = "{",
  [aux_sym_blocky_token1] = "blocky_token1",
  [anon_sym_RBRACE] = "}",
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
  [sym_blocky] = "blocky",
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
  [aux_sym_blocky_repeat1] = "blocky_repeat1",
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
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_blocky_token1] = aux_sym_blocky_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_blocky] = sym_blocky,
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
  [aux_sym_blocky_repeat1] = aux_sym_blocky_repeat1,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_blocky_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_blocky] = {
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
  [aux_sym_blocky_repeat1] = {
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 2,
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
  [30] = 27,
  [31] = 29,
  [32] = 28,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 33,
  [38] = 36,
  [39] = 35,
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
  [76] = 68,
  [77] = 52,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 83,
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
  [101] = 75,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 73,
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
  [146] = 119,
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
  [163] = 163,
  [164] = 122,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
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
      if (eof) ADVANCE(44);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(20);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '[') ADVANCE(102);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(72);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{') ADVANCE(92);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 39:
      if (lookahead == '{') ADVANCE(98);
      END_STATE();
    case 40:
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 42:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '[') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(72);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ';') ADVANCE(92);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_func);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_blocky_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_blocky_token1);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_blocky_token1);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_blocky_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_block_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(78);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(76);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(48);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(74);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(85);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(69);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(61);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(107);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(83);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(100);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(118);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(77);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(87);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(68);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(82);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(62);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(89);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(67);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(84);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(73);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(80);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(63);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(65);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(79);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(64);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(98);
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
          lookahead != '}') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_LBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_with);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_operation);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_def);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_construct);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_construct);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__spacing);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_if);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_while);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_catch);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_include);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_use);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 43},
  [20] = {.lex_state = 43},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 40},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 40},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(148),
    [sym__statement] = STATE(21),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym__statement_repeat1] = STATE(35),
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
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(35),
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
    [sym__statement] = STATE(24),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym__statement_repeat1] = STATE(35),
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
    [sym__statement] = STATE(11),
    [sym_function_definition] = STATE(84),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(76),
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
    [aux_sym_source_file_repeat1] = STATE(11),
    [aux_sym__statement_repeat1] = STATE(39),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT_LBRACE] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(98),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_construct] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(31),
    [anon_sym_catch] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(37),
  },
  [5] = {
    [sym__statement] = STATE(18),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym__statement_repeat1] = STATE(35),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(100),
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
    [sym__statement] = STATE(26),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym__statement_repeat1] = STATE(35),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(102),
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
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(35),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(104),
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
    [sym__statement] = STATE(19),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym__statement_repeat1] = STATE(35),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(106),
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
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(35),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(108),
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
    [sym__statement] = STATE(4),
    [sym_function_definition] = STATE(84),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(76),
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
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym__statement_repeat1] = STATE(39),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_number] = ACTIONS(96),
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
  [11] = {
    [sym__statement] = STATE(11),
    [sym_function_definition] = STATE(84),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(76),
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
    [aux_sym_source_file_repeat1] = STATE(11),
    [aux_sym__statement_repeat1] = STATE(39),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_func] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(50),
    [anon_sym_COLON] = ACTIONS(53),
    [sym_number] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_LT_LBRACE] = ACTIONS(62),
    [anon_sym_with] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_def] = ACTIONS(71),
    [anon_sym_construct] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(80),
    [anon_sym_catch] = ACTIONS(83),
    [anon_sym_include] = ACTIONS(86),
    [anon_sym_use] = ACTIONS(89),
  },
  [12] = {
    [sym__statement] = STATE(20),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(20),
    [aux_sym__statement_repeat1] = STATE(35),
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
    [sym__statement] = STATE(23),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym__statement_repeat1] = STATE(35),
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
  [14] = {
    [sym__statement] = STATE(17),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(17),
    [aux_sym__statement_repeat1] = STATE(35),
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
  [15] = {
    [sym__statement] = STATE(9),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym__statement_repeat1] = STATE(35),
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
  [16] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(35),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(128),
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
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(35),
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
  [18] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(35),
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
  [19] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(35),
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
  [20] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(35),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_func] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(134),
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
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(136),
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
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym__statement_repeat1] = STATE(35),
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
  [23] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(35),
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
  [24] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(35),
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
  [25] = {
    [sym__statement] = STATE(16),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(35),
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
  [26] = {
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(83),
    [sym_func] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(68),
    [sym_string] = STATE(83),
    [sym_expression] = STATE(83),
    [sym_with_expr] = STATE(83),
    [sym_array] = STATE(83),
    [sym_type_definition] = STATE(83),
    [sym_if] = STATE(83),
    [sym_while] = STATE(83),
    [sym_catch] = STATE(83),
    [sym_include] = STATE(83),
    [sym_use] = STATE(83),
    [sym_def] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__statement_repeat1] = STATE(35),
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
  [95] = 2,
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
  [141] = 4,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      aux_sym_blocky_token1,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(36), 2,
      sym_blocky,
      aux_sym_blocky_repeat1,
  [155] = 4,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      aux_sym_blocky_token1,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_blocky,
      aux_sym_blocky_repeat1,
  [169] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(170), 1,
      anon_sym_AMP,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(48), 1,
      aux_sym__statement_repeat1,
    STATE(52), 1,
      sym_call,
  [185] = 4,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      aux_sym_blocky_token1,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_blocky,
      aux_sym_blocky_repeat1,
  [199] = 4,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      aux_sym_blocky_token1,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_blocky,
      aux_sym_blocky_repeat1,
  [213] = 4,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      aux_sym_blocky_token1,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_blocky,
      aux_sym_blocky_repeat1,
  [227] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(170), 1,
      anon_sym_AMP,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(48), 1,
      aux_sym__statement_repeat1,
    STATE(77), 1,
      sym_call,
  [243] = 4,
    ACTIONS(184), 1,
      anon_sym_SEMI,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(44), 1,
      aux_sym_type_definition_repeat1,
  [256] = 3,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(190), 2,
      aux_sym_blocky_token1,
      aux_sym_string_token1,
  [267] = 4,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_type_definition_repeat1,
  [280] = 4,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_type_definition_repeat1,
  [293] = 3,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(44), 1,
      aux_sym_type_definition_repeat1,
    ACTIONS(202), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [304] = 3,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(207), 2,
      aux_sym_blocky_token1,
      aux_sym_string_token1,
  [315] = 3,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_string_repeat1,
    ACTIONS(212), 2,
      aux_sym_blocky_token1,
      aux_sym_string_token1,
  [326] = 4,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_type_definition_repeat1,
  [339] = 3,
    ACTIONS(220), 1,
      anon_sym_AMP,
    STATE(48), 1,
      aux_sym__statement_repeat1,
    ACTIONS(223), 2,
      sym_identifier,
      anon_sym_COLON,
  [350] = 3,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_type_definition_repeat2,
  [360] = 3,
    ACTIONS(227), 1,
      aux_sym_block_token1,
    ACTIONS(229), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_block_repeat1,
  [370] = 2,
    ACTIONS(233), 1,
      sym__spacing,
    ACTIONS(231), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [378] = 3,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(239), 1,
      sym__spacing,
  [388] = 3,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_type_definition_repeat2,
  [398] = 3,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(74), 1,
      aux_sym_with_expr_repeat1,
  [408] = 3,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym_type_definition_repeat2,
  [418] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(63), 1,
      sym_call,
  [428] = 1,
    ACTIONS(202), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
  [434] = 3,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_type_definition_repeat2,
  [444] = 3,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(69), 1,
      aux_sym_type_definition_repeat2,
  [454] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(114), 1,
      sym_call,
  [464] = 3,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(58), 1,
      aux_sym_type_definition_repeat2,
  [474] = 3,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      sym_identifier,
    STATE(54), 1,
      aux_sym_with_expr_repeat1,
  [484] = 3,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(256), 1,
      sym__spacing,
  [494] = 2,
    ACTIONS(260), 1,
      sym__spacing,
    ACTIONS(258), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [502] = 2,
    ACTIONS(264), 1,
      sym__spacing,
    ACTIONS(262), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [510] = 3,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      anon_sym_AT,
    STATE(78), 1,
      sym_block,
  [520] = 3,
    ACTIONS(227), 1,
      aux_sym_block_token1,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_block_repeat1,
  [530] = 3,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      sym__spacing,
  [540] = 3,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_type_definition_repeat2,
  [550] = 3,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_type_definition_repeat2,
  [560] = 3,
    ACTIONS(276), 1,
      aux_sym_block_token1,
    ACTIONS(279), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_block_repeat1,
  [570] = 3,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_type_definition_repeat2,
  [580] = 1,
    ACTIONS(283), 3,
      anon_sym_LBRACE,
      aux_sym_blocky_token1,
      anon_sym_RBRACE,
  [586] = 3,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(74), 1,
      aux_sym_with_expr_repeat1,
  [596] = 1,
    ACTIONS(290), 3,
      anon_sym_LBRACE,
      aux_sym_blocky_token1,
      anon_sym_RBRACE,
  [602] = 3,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(292), 1,
      anon_sym_SEMI,
    ACTIONS(294), 1,
      sym__spacing,
  [612] = 3,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    ACTIONS(298), 1,
      sym__spacing,
  [622] = 2,
    ACTIONS(300), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      sym__spacing,
  [629] = 2,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    ACTIONS(306), 1,
      sym__spacing,
  [636] = 2,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    ACTIONS(310), 1,
      sym__spacing,
  [643] = 2,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    ACTIONS(314), 1,
      sym__spacing,
  [650] = 2,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_namespace,
  [657] = 2,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      sym__spacing,
  [664] = 2,
    ACTIONS(292), 1,
      anon_sym_SEMI,
    ACTIONS(294), 1,
      sym__spacing,
  [671] = 2,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    ACTIONS(322), 1,
      sym__spacing,
  [678] = 2,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      sym__spacing,
  [685] = 2,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    ACTIONS(330), 1,
      sym__spacing,
  [692] = 2,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    ACTIONS(334), 1,
      sym__spacing,
  [699] = 2,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    ACTIONS(338), 1,
      sym__spacing,
  [706] = 2,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      sym__spacing,
  [713] = 2,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      sym__spacing,
  [720] = 2,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    ACTIONS(350), 1,
      sym__spacing,
  [727] = 1,
    ACTIONS(279), 2,
      aux_sym_block_token1,
      anon_sym_PIPE,
  [732] = 2,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(354), 1,
      sym__spacing,
  [739] = 2,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(358), 1,
      sym__spacing,
  [746] = 2,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      sym__spacing,
  [753] = 2,
    ACTIONS(364), 1,
      anon_sym_SEMI,
    ACTIONS(366), 1,
      sym__spacing,
  [760] = 2,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      sym__spacing,
  [767] = 2,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(374), 1,
      sym__spacing,
  [774] = 1,
    ACTIONS(376), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [779] = 2,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(378), 1,
      sym__spacing,
  [786] = 2,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    ACTIONS(382), 1,
      sym__spacing,
  [793] = 2,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      sym__spacing,
  [800] = 2,
    ACTIONS(388), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_blocky,
  [807] = 2,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      sym__spacing,
  [814] = 2,
    ACTIONS(394), 1,
      anon_sym_SEMI,
    ACTIONS(396), 1,
      sym__spacing,
  [821] = 2,
    ACTIONS(398), 1,
      anon_sym_SEMI,
    ACTIONS(400), 1,
      sym__spacing,
  [828] = 2,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    ACTIONS(402), 1,
      sym__spacing,
  [835] = 2,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    ACTIONS(406), 1,
      sym__spacing,
  [842] = 2,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      sym__spacing,
  [849] = 2,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      sym__spacing,
  [856] = 2,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      sym__spacing,
  [863] = 2,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(422), 1,
      sym__spacing,
  [870] = 2,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(424), 1,
      sym__spacing,
  [877] = 2,
    ACTIONS(426), 1,
      anon_sym_SEMI,
    ACTIONS(428), 1,
      sym__spacing,
  [884] = 2,
    ACTIONS(430), 1,
      anon_sym_SEMI,
    ACTIONS(432), 1,
      sym__spacing,
  [891] = 2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_block,
  [898] = 1,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
  [902] = 1,
    ACTIONS(436), 1,
      sym__spacing,
  [906] = 1,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
  [910] = 1,
    ACTIONS(440), 1,
      sym__spacing,
  [914] = 1,
    ACTIONS(239), 1,
      sym__spacing,
  [918] = 1,
    ACTIONS(442), 1,
      sym__spacing,
  [922] = 1,
    ACTIONS(444), 1,
      sym__spacing,
  [926] = 1,
    ACTIONS(446), 1,
      sym__spacing,
  [930] = 1,
    ACTIONS(448), 1,
      sym__spacing,
  [934] = 1,
    ACTIONS(450), 1,
      sym__spacing,
  [938] = 1,
    ACTIONS(452), 1,
      sym__spacing,
  [942] = 1,
    ACTIONS(454), 1,
      sym__spacing,
  [946] = 1,
    ACTIONS(456), 1,
      sym__spacing,
  [950] = 1,
    ACTIONS(458), 1,
      sym__spacing,
  [954] = 1,
    ACTIONS(460), 1,
      sym_identifier,
  [958] = 1,
    ACTIONS(462), 1,
      sym__spacing,
  [962] = 1,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
  [966] = 1,
    ACTIONS(466), 1,
      anon_sym_in,
  [970] = 1,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
  [974] = 1,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
  [978] = 1,
    ACTIONS(472), 1,
      sym__spacing,
  [982] = 1,
    ACTIONS(474), 1,
      sym_identifier,
  [986] = 1,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
  [990] = 1,
    ACTIONS(478), 1,
      sym__spacing,
  [994] = 1,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
  [998] = 1,
    ACTIONS(482), 1,
      sym__spacing,
  [1002] = 1,
    ACTIONS(484), 1,
      sym__spacing,
  [1006] = 1,
    ACTIONS(486), 1,
      sym_identifier,
  [1010] = 1,
    ACTIONS(488), 1,
      sym__spacing,
  [1014] = 1,
    ACTIONS(490), 1,
      anon_sym_BANG,
  [1018] = 1,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
  [1022] = 1,
    ACTIONS(494), 1,
      sym__spacing,
  [1026] = 1,
    ACTIONS(496), 1,
      sym__spacing,
  [1030] = 1,
    ACTIONS(498), 1,
      sym__spacing,
  [1034] = 1,
    ACTIONS(500), 1,
      sym_identifier,
  [1038] = 1,
    ACTIONS(502), 1,
      sym__spacing,
  [1042] = 1,
    ACTIONS(504), 1,
      sym__spacing,
  [1046] = 1,
    ACTIONS(506), 1,
      sym__spacing,
  [1050] = 1,
    ACTIONS(508), 1,
      sym__spacing,
  [1054] = 1,
    ACTIONS(510), 1,
      sym__spacing,
  [1058] = 1,
    ACTIONS(512), 1,
      sym__spacing,
  [1062] = 1,
    ACTIONS(514), 1,
      sym__spacing,
  [1066] = 1,
    ACTIONS(516), 1,
      sym__spacing,
  [1070] = 1,
    ACTIONS(518), 1,
      sym__spacing,
  [1074] = 1,
    ACTIONS(520), 1,
      sym_identifier,
  [1078] = 1,
    ACTIONS(522), 1,
      sym__spacing,
  [1082] = 1,
    ACTIONS(298), 1,
      sym__spacing,
  [1086] = 1,
    ACTIONS(524), 1,
      sym__spacing,
  [1090] = 1,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
  [1094] = 1,
    ACTIONS(528), 1,
      sym_identifier,
  [1098] = 1,
    ACTIONS(530), 1,
      sym_identifier,
  [1102] = 1,
    ACTIONS(532), 1,
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
  [SMALL_STATE(34)] = 155,
  [SMALL_STATE(35)] = 169,
  [SMALL_STATE(36)] = 185,
  [SMALL_STATE(37)] = 199,
  [SMALL_STATE(38)] = 213,
  [SMALL_STATE(39)] = 227,
  [SMALL_STATE(40)] = 243,
  [SMALL_STATE(41)] = 256,
  [SMALL_STATE(42)] = 267,
  [SMALL_STATE(43)] = 280,
  [SMALL_STATE(44)] = 293,
  [SMALL_STATE(45)] = 304,
  [SMALL_STATE(46)] = 315,
  [SMALL_STATE(47)] = 326,
  [SMALL_STATE(48)] = 339,
  [SMALL_STATE(49)] = 350,
  [SMALL_STATE(50)] = 360,
  [SMALL_STATE(51)] = 370,
  [SMALL_STATE(52)] = 378,
  [SMALL_STATE(53)] = 388,
  [SMALL_STATE(54)] = 398,
  [SMALL_STATE(55)] = 408,
  [SMALL_STATE(56)] = 418,
  [SMALL_STATE(57)] = 428,
  [SMALL_STATE(58)] = 434,
  [SMALL_STATE(59)] = 444,
  [SMALL_STATE(60)] = 454,
  [SMALL_STATE(61)] = 464,
  [SMALL_STATE(62)] = 474,
  [SMALL_STATE(63)] = 484,
  [SMALL_STATE(64)] = 494,
  [SMALL_STATE(65)] = 502,
  [SMALL_STATE(66)] = 510,
  [SMALL_STATE(67)] = 520,
  [SMALL_STATE(68)] = 530,
  [SMALL_STATE(69)] = 540,
  [SMALL_STATE(70)] = 550,
  [SMALL_STATE(71)] = 560,
  [SMALL_STATE(72)] = 570,
  [SMALL_STATE(73)] = 580,
  [SMALL_STATE(74)] = 586,
  [SMALL_STATE(75)] = 596,
  [SMALL_STATE(76)] = 602,
  [SMALL_STATE(77)] = 612,
  [SMALL_STATE(78)] = 622,
  [SMALL_STATE(79)] = 629,
  [SMALL_STATE(80)] = 636,
  [SMALL_STATE(81)] = 643,
  [SMALL_STATE(82)] = 650,
  [SMALL_STATE(83)] = 657,
  [SMALL_STATE(84)] = 664,
  [SMALL_STATE(85)] = 671,
  [SMALL_STATE(86)] = 678,
  [SMALL_STATE(87)] = 685,
  [SMALL_STATE(88)] = 692,
  [SMALL_STATE(89)] = 699,
  [SMALL_STATE(90)] = 706,
  [SMALL_STATE(91)] = 713,
  [SMALL_STATE(92)] = 720,
  [SMALL_STATE(93)] = 727,
  [SMALL_STATE(94)] = 732,
  [SMALL_STATE(95)] = 739,
  [SMALL_STATE(96)] = 746,
  [SMALL_STATE(97)] = 753,
  [SMALL_STATE(98)] = 760,
  [SMALL_STATE(99)] = 767,
  [SMALL_STATE(100)] = 774,
  [SMALL_STATE(101)] = 779,
  [SMALL_STATE(102)] = 786,
  [SMALL_STATE(103)] = 793,
  [SMALL_STATE(104)] = 800,
  [SMALL_STATE(105)] = 807,
  [SMALL_STATE(106)] = 814,
  [SMALL_STATE(107)] = 821,
  [SMALL_STATE(108)] = 828,
  [SMALL_STATE(109)] = 835,
  [SMALL_STATE(110)] = 842,
  [SMALL_STATE(111)] = 849,
  [SMALL_STATE(112)] = 856,
  [SMALL_STATE(113)] = 863,
  [SMALL_STATE(114)] = 870,
  [SMALL_STATE(115)] = 877,
  [SMALL_STATE(116)] = 884,
  [SMALL_STATE(117)] = 891,
  [SMALL_STATE(118)] = 898,
  [SMALL_STATE(119)] = 902,
  [SMALL_STATE(120)] = 906,
  [SMALL_STATE(121)] = 910,
  [SMALL_STATE(122)] = 914,
  [SMALL_STATE(123)] = 918,
  [SMALL_STATE(124)] = 922,
  [SMALL_STATE(125)] = 926,
  [SMALL_STATE(126)] = 930,
  [SMALL_STATE(127)] = 934,
  [SMALL_STATE(128)] = 938,
  [SMALL_STATE(129)] = 942,
  [SMALL_STATE(130)] = 946,
  [SMALL_STATE(131)] = 950,
  [SMALL_STATE(132)] = 954,
  [SMALL_STATE(133)] = 958,
  [SMALL_STATE(134)] = 962,
  [SMALL_STATE(135)] = 966,
  [SMALL_STATE(136)] = 970,
  [SMALL_STATE(137)] = 974,
  [SMALL_STATE(138)] = 978,
  [SMALL_STATE(139)] = 982,
  [SMALL_STATE(140)] = 986,
  [SMALL_STATE(141)] = 990,
  [SMALL_STATE(142)] = 994,
  [SMALL_STATE(143)] = 998,
  [SMALL_STATE(144)] = 1002,
  [SMALL_STATE(145)] = 1006,
  [SMALL_STATE(146)] = 1010,
  [SMALL_STATE(147)] = 1014,
  [SMALL_STATE(148)] = 1018,
  [SMALL_STATE(149)] = 1022,
  [SMALL_STATE(150)] = 1026,
  [SMALL_STATE(151)] = 1030,
  [SMALL_STATE(152)] = 1034,
  [SMALL_STATE(153)] = 1038,
  [SMALL_STATE(154)] = 1042,
  [SMALL_STATE(155)] = 1046,
  [SMALL_STATE(156)] = 1050,
  [SMALL_STATE(157)] = 1054,
  [SMALL_STATE(158)] = 1058,
  [SMALL_STATE(159)] = 1062,
  [SMALL_STATE(160)] = 1066,
  [SMALL_STATE(161)] = 1070,
  [SMALL_STATE(162)] = 1074,
  [SMALL_STATE(163)] = 1078,
  [SMALL_STATE(164)] = 1082,
  [SMALL_STATE(165)] = 1086,
  [SMALL_STATE(166)] = 1090,
  [SMALL_STATE(167)] = 1094,
  [SMALL_STATE(168)] = 1098,
  [SMALL_STATE(169)] = 1102,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blocky_repeat1, 2), SHIFT_REPEAT(37),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blocky_repeat1, 2), SHIFT_REPEAT(34),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_blocky_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(130),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(45),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(48),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat2, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat2, 2), SHIFT_REPEAT(117),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(128),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blocky, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_expr_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_expr_repeat1, 2), SHIFT_REPEAT(74),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blocky, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_expr, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_expr, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 12),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 12),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch, 11),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch, 11),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 11),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 11),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 11),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 11),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch, 10),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch, 10),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 5),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 10),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 10),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 10),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 10),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat2, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocky, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch, 9),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch, 9),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 9),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 9),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 7),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 7),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 9),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 9),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocky, 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_expr, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_expr, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 8),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 8),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 8),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [492] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
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

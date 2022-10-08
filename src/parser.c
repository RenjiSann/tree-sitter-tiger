#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  sym_identifier = 1,
  sym_chunks = 2,
  anon_sym_COMMA = 3,
  anon_sym_STAR = 4,
  anon_sym_SLASH = 5,
  anon_sym_PLUS = 6,
  anon_sym_DASH = 7,
  anon_sym_AMP = 8,
  anon_sym_PIPE = 9,
  anon_sym_LT = 10,
  anon_sym_GT = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_GT_EQ = 13,
  anon_sym_EQ = 14,
  anon_sym_LT_GT = 15,
  anon_sym_SEMI = 16,
  sym_number_literal = 17,
  sym_string_literal = 18,
  sym__tok_lpar = 19,
  sym__tok_rpar = 20,
  sym__tok_lbrack = 21,
  sym__tok_rbrack = 22,
  sym_tok_nil = 23,
  sym_tok_true = 24,
  sym_tok_false = 25,
  sym_comment = 26,
  sym_program = 27,
  sym__expression = 28,
  sym_func_call = 29,
  sym_binop = 30,
  sym__parenthesis_exp = 31,
  aux_sym_func_call_repeat1 = 32,
  aux_sym__parenthesis_exp_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_chunks] = "chunks",
  [anon_sym_COMMA] = ",",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_SEMI] = ";",
  [sym_number_literal] = "number_literal",
  [sym_string_literal] = "string_literal",
  [sym__tok_lpar] = "_tok_lpar",
  [sym__tok_rpar] = "_tok_rpar",
  [sym__tok_lbrack] = "_tok_lbrack",
  [sym__tok_rbrack] = "_tok_rbrack",
  [sym_tok_nil] = "tok_nil",
  [sym_tok_true] = "tok_true",
  [sym_tok_false] = "tok_false",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__expression] = "_expression",
  [sym_func_call] = "func_call",
  [sym_binop] = "binop",
  [sym__parenthesis_exp] = "_parenthesis_exp",
  [aux_sym_func_call_repeat1] = "func_call_repeat1",
  [aux_sym__parenthesis_exp_repeat1] = "_parenthesis_exp_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_chunks] = sym_chunks,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_number_literal] = sym_number_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__tok_lpar] = sym__tok_lpar,
  [sym__tok_rpar] = sym__tok_rpar,
  [sym__tok_lbrack] = sym__tok_lbrack,
  [sym__tok_rbrack] = sym__tok_rbrack,
  [sym_tok_nil] = sym_tok_nil,
  [sym_tok_true] = sym_tok_true,
  [sym_tok_false] = sym_tok_false,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym__expression] = sym__expression,
  [sym_func_call] = sym_func_call,
  [sym_binop] = sym_binop,
  [sym__parenthesis_exp] = sym__parenthesis_exp,
  [aux_sym_func_call_repeat1] = aux_sym_func_call_repeat1,
  [aux_sym__parenthesis_exp_repeat1] = aux_sym__parenthesis_exp_repeat1,
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
  [sym_chunks] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__tok_lpar] = {
    .visible = false,
    .named = true,
  },
  [sym__tok_rpar] = {
    .visible = false,
    .named = true,
  },
  [sym__tok_lbrack] = {
    .visible = false,
    .named = true,
  },
  [sym__tok_rbrack] = {
    .visible = false,
    .named = true,
  },
  [sym_tok_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_tok_true] = {
    .visible = true,
    .named = true,
  },
  [sym_tok_false] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_func_call] = {
    .visible = true,
    .named = true,
  },
  [sym_binop] = {
    .visible = true,
    .named = true,
  },
  [sym__parenthesis_exp] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_func_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parenthesis_exp_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_func_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_func_name] = "func_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_func_name, 0},
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
  [9] = 3,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 2,
  [16] = 16,
  [17] = 17,
  [18] = 5,
  [19] = 11,
  [20] = 10,
  [21] = 8,
  [22] = 7,
  [23] = 6,
  [24] = 24,
  [25] = 12,
  [26] = 4,
  [27] = 14,
  [28] = 13,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 30,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 33,
  [40] = 35,
  [41] = 34,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 45,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '_') ADVANCE(4);
      if (lookahead == '|') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(7);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 11:
      if (eof) ADVANCE(17);
      if (lookahead == '\t') ADVANCE(18);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 12:
      if (eof) ADVANCE(17);
      if (lookahead == '\t') ADVANCE(18);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 13:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 14:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '_') ADVANCE(4);
      if (lookahead == '|') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '_') ADVANCE(4);
      if (lookahead == '|') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_chunks);
      if (lookahead == '\t') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__tok_lpar);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__tok_rpar);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__tok_lbrack);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__tok_rbrack);
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
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_tok_nil);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_tok_true);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_tok_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 12, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 0, .external_lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 1},
  [40] = {.lex_state = 0, .external_lex_state = 1},
  [41] = {.lex_state = 0, .external_lex_state = 1},
  [42] = {.lex_state = 0, .external_lex_state = 1},
  [43] = {.lex_state = 0, .external_lex_state = 1},
  [44] = {.lex_state = 0, .external_lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 0, .external_lex_state = 1},
  [47] = {.lex_state = 0, .external_lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 1},
  [49] = {.lex_state = 0, .external_lex_state = 1},
  [50] = {.lex_state = 0, .external_lex_state = 1},
  [51] = {.lex_state = 0, .external_lex_state = 1},
  [52] = {.lex_state = 0, .external_lex_state = 1},
};

enum {
  ts_external_token_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym__tok_lpar] = ACTIONS(1),
    [sym__tok_rpar] = ACTIONS(1),
    [sym__tok_lbrack] = ACTIONS(1),
    [sym__tok_rbrack] = ACTIONS(1),
    [sym_tok_nil] = ACTIONS(1),
    [sym_tok_true] = ACTIONS(1),
    [sym_tok_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(49),
    [sym__expression] = STATE(24),
    [sym_func_call] = STATE(24),
    [sym_binop] = STATE(24),
    [sym__parenthesis_exp] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_chunks] = ACTIONS(9),
    [sym_number_literal] = ACTIONS(11),
    [sym_string_literal] = ACTIONS(11),
    [sym__tok_lpar] = ACTIONS(13),
    [sym_tok_nil] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      sym__tok_rpar,
    STATE(48), 1,
      aux_sym_func_call_repeat1,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [35] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      sym__tok_rpar,
    STATE(47), 1,
      aux_sym__parenthesis_exp_repeat1,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [70] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_SEMI,
      sym__tok_rpar,
  [93] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_SEMI,
      sym__tok_rpar,
  [116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_SEMI,
      sym__tok_rpar,
  [139] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 9,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_SEMI,
      sym__tok_rpar,
  [166] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(45), 5,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      sym__tok_rpar,
  [195] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      sym__tok_rpar,
    STATE(45), 1,
      aux_sym__parenthesis_exp_repeat1,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 11,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_SEMI,
      sym__tok_rpar,
  [255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_SEMI,
      sym__tok_rpar,
  [278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_SEMI,
      sym__tok_rpar,
  [301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_SEMI,
      sym__tok_rpar,
  [324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_SEMI,
      sym__tok_rpar,
  [347] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      sym__tok_rpar,
    STATE(46), 1,
      aux_sym_func_call_repeat1,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [382] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 2,
      anon_sym_SEMI,
      sym__tok_rpar,
    ACTIONS(25), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [412] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      sym__tok_rpar,
    ACTIONS(25), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 11,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 11,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(45), 9,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [507] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(75), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [534] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 11,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [580] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(75), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 11,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 11,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 11,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [693] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym__tok_lpar,
    ACTIONS(87), 1,
      sym__tok_rpar,
    ACTIONS(89), 1,
      sym_tok_nil,
    ACTIONS(83), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(9), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [719] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym__tok_lpar,
    ACTIONS(93), 1,
      sym__tok_rpar,
    ACTIONS(95), 1,
      sym_tok_nil,
    ACTIONS(91), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(2), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [745] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym__tok_lpar,
    ACTIONS(99), 1,
      sym__tok_rpar,
    ACTIONS(101), 1,
      sym_tok_nil,
    ACTIONS(97), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(3), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [771] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym__tok_lpar,
    ACTIONS(105), 1,
      sym__tok_rpar,
    ACTIONS(107), 1,
      sym_tok_nil,
    ACTIONS(103), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(15), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [797] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym__tok_lpar,
    ACTIONS(111), 1,
      sym_tok_nil,
    ACTIONS(109), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(8), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [820] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym__tok_lpar,
    ACTIONS(115), 1,
      sym_tok_nil,
    ACTIONS(113), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(11), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [843] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym__tok_lpar,
    ACTIONS(119), 1,
      sym_tok_nil,
    ACTIONS(117), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(10), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [866] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym__tok_lpar,
    ACTIONS(123), 1,
      sym_tok_nil,
    ACTIONS(121), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(7), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [889] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym__tok_lpar,
    ACTIONS(127), 1,
      sym_tok_nil,
    ACTIONS(125), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(17), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [912] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(131), 1,
      sym__tok_lpar,
    ACTIONS(133), 1,
      sym_tok_nil,
    ACTIONS(129), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(22), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [935] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(131), 1,
      sym__tok_lpar,
    ACTIONS(137), 1,
      sym_tok_nil,
    ACTIONS(135), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(21), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [958] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(131), 1,
      sym__tok_lpar,
    ACTIONS(141), 1,
      sym_tok_nil,
    ACTIONS(139), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(20), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(131), 1,
      sym__tok_lpar,
    ACTIONS(145), 1,
      sym_tok_nil,
    ACTIONS(143), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(19), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [1004] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym__tok_lpar,
    ACTIONS(149), 1,
      sym_tok_nil,
    ACTIONS(147), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(16), 4,
      sym__expression,
      sym_func_call,
      sym_binop,
      sym__parenthesis_exp,
  [1027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__tok_rpar,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_func_call_repeat1,
  [1040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__tok_rpar,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      aux_sym__parenthesis_exp_repeat1,
  [1053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      sym__tok_rpar,
    STATE(44), 1,
      aux_sym__parenthesis_exp_repeat1,
  [1066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      sym__tok_rpar,
    STATE(43), 1,
      aux_sym_func_call_repeat1,
  [1079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(161), 1,
      sym__tok_rpar,
    STATE(44), 1,
      aux_sym__parenthesis_exp_repeat1,
  [1092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      sym__tok_rpar,
    STATE(43), 1,
      aux_sym_func_call_repeat1,
  [1105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
  [1112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [1119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym__tok_lpar,
  [1126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym__tok_lpar,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 139,
  [SMALL_STATE(8)] = 166,
  [SMALL_STATE(9)] = 195,
  [SMALL_STATE(10)] = 230,
  [SMALL_STATE(11)] = 255,
  [SMALL_STATE(12)] = 278,
  [SMALL_STATE(13)] = 301,
  [SMALL_STATE(14)] = 324,
  [SMALL_STATE(15)] = 347,
  [SMALL_STATE(16)] = 382,
  [SMALL_STATE(17)] = 412,
  [SMALL_STATE(18)] = 442,
  [SMALL_STATE(19)] = 463,
  [SMALL_STATE(20)] = 484,
  [SMALL_STATE(21)] = 507,
  [SMALL_STATE(22)] = 534,
  [SMALL_STATE(23)] = 559,
  [SMALL_STATE(24)] = 580,
  [SMALL_STATE(25)] = 609,
  [SMALL_STATE(26)] = 630,
  [SMALL_STATE(27)] = 651,
  [SMALL_STATE(28)] = 672,
  [SMALL_STATE(29)] = 693,
  [SMALL_STATE(30)] = 719,
  [SMALL_STATE(31)] = 745,
  [SMALL_STATE(32)] = 771,
  [SMALL_STATE(33)] = 797,
  [SMALL_STATE(34)] = 820,
  [SMALL_STATE(35)] = 843,
  [SMALL_STATE(36)] = 866,
  [SMALL_STATE(37)] = 889,
  [SMALL_STATE(38)] = 912,
  [SMALL_STATE(39)] = 935,
  [SMALL_STATE(40)] = 958,
  [SMALL_STATE(41)] = 981,
  [SMALL_STATE(42)] = 1004,
  [SMALL_STATE(43)] = 1027,
  [SMALL_STATE(44)] = 1040,
  [SMALL_STATE(45)] = 1053,
  [SMALL_STATE(46)] = 1066,
  [SMALL_STATE(47)] = 1079,
  [SMALL_STATE(48)] = 1092,
  [SMALL_STATE(49)] = 1105,
  [SMALL_STATE(50)] = 1112,
  [SMALL_STATE(51)] = 1119,
  [SMALL_STATE(52)] = 1126,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 5, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 5, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesis_exp, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesis_exp, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 4, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 4, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binop, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binop, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesis_exp, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesis_exp, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 3, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 3, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesis_exp, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesis_exp, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parenthesis_exp_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_repeat1, 2), SHIFT_REPEAT(37),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parenthesis_exp_repeat1, 2), SHIFT_REPEAT(42),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [165] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_tiger_external_scanner_create(void);
void tree_sitter_tiger_external_scanner_destroy(void *);
bool tree_sitter_tiger_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_tiger_external_scanner_serialize(void *, char *);
void tree_sitter_tiger_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tiger(void) {
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
      tree_sitter_tiger_external_scanner_create,
      tree_sitter_tiger_external_scanner_destroy,
      tree_sitter_tiger_external_scanner_scan,
      tree_sitter_tiger_external_scanner_serialize,
      tree_sitter_tiger_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

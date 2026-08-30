/*
 * Single source of truth for high-frequency programming/Vim combos.
 *
 * Outer top-row chords mirror Vim's line motions:
 *
 *   Z+X  0     W+E  <     E+R  [     R+T  (
 *   Y+U  )     U+I  ]     I+O  >     .+/  $
 *
 * Backslash is deliberately NOT a combo; it lives on Raise. Pipe moves to
 * H+J. J+K remains reserved for Space and is defined separately.
 *
 * PROGRAMMING_COMBO emits a locale-aware key press.
 * PROGRAMMING_ACTION_COMBO emits a locale-specific behavior/macro.
 */

/* Vim motions + delimiters */
PROGRAMMING_COMBO(vim_home_zero,      N0,                  POS_X,     POS_Z)
PROGRAMMING_COMBO(less_than,          LESS_THAN,           POS_W,     POS_E)
PROGRAMMING_COMBO(bracket_left,       LEFT_BRACKET,        POS_E,     POS_R)
PROGRAMMING_COMBO(parenthesis_left,   LEFT_PARENTHESIS,    POS_R,     POS_T)
PROGRAMMING_COMBO(parenthesis_right,  RIGHT_PARENTHESIS,   POS_Y,     POS_U)
PROGRAMMING_COMBO(bracket_right,      RIGHT_BRACKET,       POS_U,     POS_I)
PROGRAMMING_COMBO(greater_than,       GREATER_THAN,        POS_I,     POS_O)
PROGRAMMING_COMBO(vim_end_dollar,     DOLLAR,              POS_DOT,   POS_FSLH)

/* Braces / quotes / punctuation */
PROGRAMMING_COMBO(brace_left,         LEFT_BRACE,          POS_C,     POS_V)
PROGRAMMING_COMBO(brace_right,        RIGHT_BRACE,         POS_M,     POS_COMMA)
PROGRAMMING_COMBO(double_quote,       DOUBLE_QUOTES,       POS_S,     POS_D)
PROGRAMMING_COMBO(single_quote,       SINGLE_QUOTE,        POS_L,     POS_SEMI)
PROGRAMMING_COMBO(colon,              COLON,               POS_K,     POS_L)
PROGRAMMING_COMBO(pipe,               PIPE,                POS_H,     POS_J)

/* Operators common in Rust, C and shell work */
PROGRAMMING_ACTION_COMBO(arrow,       arrow,               POS_F,     POS_G)
PROGRAMMING_COMBO(plus,               PLUS,                POS_R,     POS_U)
PROGRAMMING_COMBO(equal,              EQUAL,               POS_F,     POS_J)
PROGRAMMING_COMBO(asterisk,           ASTERISK,            POS_E,     POS_I)
PROGRAMMING_COMBO(exclamation,        EXCLAMATION,         POS_C,     POS_COMMA)
PROGRAMMING_COMBO(ampersand,          AMPERSAND,           POS_G,     POS_H)
PROGRAMMING_COMBO(minus,              MINUS,               POS_V,     POS_M)
PROGRAMMING_COMBO(underscore,         UNDERSCORE,          POS_B,     POS_N)

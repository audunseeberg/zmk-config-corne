/* Shared Raise = symbol palette + right-side numpad.
 *
 * The right inner 3x3 follows the edited layout:
 *     ^   %   \
 *     `   #   @
 *     ~   ?   .
 *
 * The outer-right 3x3 remains a numpad, with 0 on the outer-right thumb.
 *
 * Every ordinary ASCII punctuation character is already reachable somewhere
 * on Base/combos/this layer. Rather than leave the left half blank, it acts as
 * a direct fallback palette for symbols that otherwise primarily live on
 * combos. This is useful when a chord is awkward in a particular command or
 * when deliberately typing punctuation one-handed while Raise is held.
 *
 *     <   [   {   }   ]   >
 *     |   '   "   :   =   +
 *     !   &   *   _   -   $
 *
 * All semantic names pass through keys_locale_compat.h, so the exact same
 * source produces the intended characters on Norwegian and US host layouts.
 */
bindings = <
    &kp LESS_THAN   &kp LEFT_BRACKET &kp LEFT_BRACE    &kp RIGHT_BRACE &kp RIGHT_BRACKET &kp GREATER_THAN    &kp CARET &kp PERCENT  &kp BACKSLASH &kp N7 &kp N8 &kp N9
    &kp PIPE        &kp SINGLE_QUOTE &kp DOUBLE_QUOTES &kp COLON       &kp EQUAL         &kp PLUS            &kp GRAVE &kp HASH     &kp AT_SIGN   &kp N4 &kp N5 &kp N6
    &kp EXCLAMATION &kp AMPERSAND    &kp ASTERISK      &kp UNDERSCORE  &kp MINUS         &kp DOLLAR          &kp TILDE &kp QUESTION &kp PERIOD    &kp N1 &kp N2 &kp N3
                                                        &trans          &trans            &trans              &trans    &mo FUNCTION_LAYER &kp N0
>;

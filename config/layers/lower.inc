/* Shared Lower = media + Vim-shaped navigation + Bluetooth/locale management.
 *
 * Navigation follows Vim muscle memory on H/J/K/L:
 *     H = left, J = down, K = up, L = right
 *
 * Norwegian extras sit directly below J/K/L:
 *     M = æ, comma = ø, dot = å
 * In US mode those bindings become transparent and expose M/,/. from US_BASE.
 *
 * BT profiles are deliberately one key away from the locale toggle:
 *     C = BT0, V = BT1, B = BT2
 * X is intentionally empty to reduce accidental profile changes.
 *
 * Hold the opposite (Raise) thumb while Lower is active to enter the shared
 * Function/System layer. BT clear remains gated behind that layer.
 */
bindings = <
    &kp C_MUTE   &kp C_PREV   &kp C_PLAY_PAUSE &kp C_NEXT &kp C_VOL_DN &kp C_VOL_UP      &kp HOME &kp PG_UP &kp PG_DN &kp END   &kp INS  &trans
    &kp C_BRI_DN &kp C_BRI_UP &kp C_RW         &kp C_FF   &kp C_STOP   &none             &kp LEFT &kp DOWN  &kp UP    &kp RIGHT &trans   &trans
    &trans       &tog US_BASE &none             &bt BT_SEL 0 &bt BT_SEL 1 &bt BT_SEL 2    &trans LOCALE_AE_BINDING LOCALE_O_SLASH_BINDING LOCALE_A_RING_BINDING &trans &trans
                                                   &trans       &mo FUNCTION_LAYER &trans     &trans   &trans &trans
>;

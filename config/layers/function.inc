/* Shared Function/System sublayer.
 *
 * Enter with Lower + Raise thumb. Because Lower remains held underneath this
 * layer, transparent positions keep the Lower navigation/numpad/media keys.
 *
 * BT_CLR is deliberately gated behind this sublayer so it takes an intentional
 * three-key action: hold Lower, hold Raise, press the physical G position.
 */
bindings = <
    &kp F1    &kp F2    &kp F3    &kp F4    &kp F5    &kp F6       &trans &trans &trans &trans &trans &trans
    &kp F7    &kp F8    &kp F9    &kp F10   &kp F11   &kp F12      &trans &trans &trans &trans &trans &trans
    &trans    &trans    &trans    &trans    &trans    &bt BT_CLR   &trans &trans &trans &trans &trans &trans
                                      &trans &trans &trans          &trans &trans &trans
>;

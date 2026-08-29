/* Shared Lower layer bindings.
 * The far-right key of the home row toggles the US compatibility base layer.
 */
bindings = <
    &kp TAB    &kp N1       &kp N2       &kp N3       &kp N4       &kp N5       &kp N6    &kp N7    &kp N8  &kp N9    &kp N0    &kp BSPC
    &bt BT_CLR &bt BT_SEL 0 &bt BT_SEL 1 &bt BT_SEL 2 &bt BT_SEL 3 &bt BT_SEL 4 &kp LEFT  &kp DOWN  &kp UP  &kp RIGHT &trans     &tog US_BASE
    &kp LSHFT  &trans       &trans       &trans       &trans       &trans       &trans    &trans    &trans  &trans     &trans     &trans
                                      &kp LGUI      &trans       &kp SPACE     &kp RET   &trans     &kp RALT
>;

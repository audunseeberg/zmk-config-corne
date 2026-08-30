/* Shared Base layer bindings. Locale semantics are supplied by the caller.
 *
 * J+K supplies Space through a combo, so the left inner thumb is dedicated
 * LSHIFT. The key directly below Backspace is Delete.
 *
 * Layer thumbs:
 *   left middle  = Raise
 *   right middle = Lower
 */
bindings = <
    &kp TAB   &kp Q     &kp W     &kp E     &kp R     &kp T       &kp Y     &kp U     &kp I      &kp O     &kp P     &kp BSPC
    &kp LCTRL &kp A     &kp S     &kp D     &kp F     &kp G       &kp H     &kp J     &kp K      &kp L     &kp SEMI  &kp DEL
    &kp LSHFT &kp Z     &kp X     &kp C     &kp V     &kp B       &kp N     &kp M     &kp COMMA  &kp DOT   &kp FSLH  &kp ESC
                                  &kp LGUI  &mo RAISE_LAYER &kp LSHFT      &kp RET   &mo LOWER_LAYER &kp RALT
>;

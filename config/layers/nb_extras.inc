/*
 * Norwegian-only overlay used while NB Lower is active.
 * Lower + N / M / , => æ / ø / å
 * Everything else passes through to the normal NB Lower layer.
 */
bindings = <
    &trans &trans &trans &trans &trans &trans    &trans    &trans       &trans      &trans &trans &trans
    &trans &trans &trans &trans &trans &trans    &trans    &trans       &trans      &trans &trans &trans
    &trans &trans &trans &trans &trans &trans    &kp NB_AE &kp NB_O_SLASH &kp NB_A_RING &trans &trans &trans
                         &trans &trans &trans     &trans    &trans       &trans
>;

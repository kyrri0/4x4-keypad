#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ P │ L │ N │ D │
     * ├───┼───┼───┤───┤ 
     * │ C │ L │ E │ O │
     * ├───┼───┼───┼───┤
     * │ K │ B │ W │ Y │
     * ├───┼───┼───┤───┤ 
     * │ M │ U │ F │ Z │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_P,   KC_L,   KC_N,   KC_D,
        KC_C,   KC_I,   KC_E,   KC_O,
        KC_K,   KC_B,   KC_W,   KC_Y,
        KC_M,   KC_U,   KC_F,  KC_Z
    )
};
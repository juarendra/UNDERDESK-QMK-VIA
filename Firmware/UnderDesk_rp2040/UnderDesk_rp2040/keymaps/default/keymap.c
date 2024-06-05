/* Copyright 2024 Juarendra Ramadhani <jrjuarendra@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_1x7(
        KC_A, KC_B, KC_C, KC_D,  KC_E, KC_F, KC_X, KC_X
    ),
    [_FN1] = LAYOUT_1x7(
        KC_A, KC_B, KC_C, KC_D,  KC_E, KC_F, KC_X, KC_X
    ),
    [_FN2] = LAYOUT_1x7(
        KC_A, KC_B, KC_C, KC_D,  KC_E, KC_F, KC_X, KC_X
    ),
    [_FN3] = LAYOUT_1x7(
        KC_A, KC_B, KC_C, KC_D,  KC_E, KC_F, KC_X, KC_X
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD)},
    [_FN1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    [_FN2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    [_FN3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif

void keyboard_post_init_user(void) {
    rgblight_setrgb(RGB_RED);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _FN1:
            rgblight_setrgb(RGB_ORANGE);
            break;
        case _FN2:
            rgblight_setrgb(RGB_GREEN);
            break;
        case _FN3:
            rgblight_setrgb(RGB_PURPLE);
            break;
        case _BASE:
            rgblight_setrgb(RGB_RED);
            break;
        default: // for any other layers, or the default layer
            rgblight_setrgb(RGB_RED);
            break;
    }
  return state;
}
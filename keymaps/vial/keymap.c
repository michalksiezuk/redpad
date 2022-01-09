/* Copyright 2021 mksiezuk
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

// clang-format off
enum layer_names {
    _MEDIA,
    _CODE,
    _EDITING
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_MEDIA] = LAYOUT(
        TO(_CODE),              KC_NO,                  KC_AUDIO_MUTE,
        KC_MEDIA_PLAY_PAUSE,    KC_MEDIA_PREV_TRACK,    KC_MEDIA_NEXT_TRACK,
        KC_MEDIA_STOP,          KC_TRNS,                KC_TRNS
    ),
    [_CODE] = LAYOUT(
        TO(_EDITING),           KC_NO,                  LCTL(KC_0),
        LCTL(LSFT(KC_F)),       MEH(KC_P),              LCA(KC_L),
        KC_COPY,                KC_CUT,                 KC_PASTE
    ),
    [_EDITING] = LAYOUT(
        TO(_MEDIA),             KC_NO,                  LCTL(KC_0),
        KC_COPY,                KC_CUT,                 KC_PASTE,
        KC_HOME,                KC_END,                 KC_PSCREEN
    )
};
// clang-format on

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (IS_LAYER_ON(_CODE) || IS_LAYER_ON(_EDITING)) {
        if (clockwise) {
            tap_code16(LCTL(KC_PPLS));
        } else {
            tap_code16(LCTL(KC_PMNS));
        }
    } else {
        if (clockwise) {
            tap_code(KC_AUDIO_VOL_UP);
        } else {
            tap_code(KC_AUDIO_VOL_DOWN);
        }
    }

    return true;
}
/* Copyright 2023 Yiancar-Designs
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
#include "../../common/rdmctmzt_common.h"

enum layers { _BASE = 0, _LOWER, _RAISE, _ADJUST };

// 매크로 정의
enum custom_keycodes {
    MY_MACRO = SAFE_RANGE
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Base */
    [_BASE] = LAYOUT_tkl_ansi(
        QK_GESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,             KC_ENT,
        KC_LSFT, KC_SLSH, KC_Z,    KC_X,    KC_C,    KC_V,              KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT,          LT(_LOWER,KC_SPC), MO(_LOWER), LT(_RAISE,KC_SPC),          KC_SCLN, KC_EQL,  KC_MINS
    ),
    
    /* Layer 1: Lower (숫자 + 괄호 + 기호) */
    [_LOWER] = LAYOUT_tkl_ansi(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_CAPS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,           KC_CIRC, KC_AMPR, KC_ASTR, KC_PLUS,          KC_COLN,
        KC_TRNS, KC_QUES, KC_UNDS, KC_QUOT,  KC_LPRN, KC_RPRN,             KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_BSLS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS,   KC_TRNS,             KC_QUOT, KC_DQUO, KC_UNDS
    ),
    
    /* Layer 2: Raise (함수키 + 네비게이션) */
    [_RAISE] = LAYOUT_tkl_ansi(
        QK_GESC, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,             KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_DEL,
        KC_CAPS, KC_LNG1,   KC_NO,   KC_HOME, KC_END,  KC_PGUP,           KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,          KC_TRNS,
        KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,      KC_TRNS,   KC_TRNS,                  KC_QUOT, KC_DQUO, KC_NO
    ),
    
    /* Layer 3: Adjust (함수키 + RGB + 시스템) */
    [_ADJUST] = LAYOUT_tkl_ansi(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,             KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        QK_BOOT, MD_BLE1, MD_BLE2, MD_BLE3, MD_24G,  MD_USB,            RM_HUEU, RM_SATU, RM_VALU, RM_SPDU,          RM_TOGG,
        EE_CLR,  KC_NO,   RM_NEXT, RM_PREV, KC_NO,   KC_NO,             RM_HUED, RM_SATD, RM_VALD, RM_SPDD, KC_PSCR, QK_BAT,
        KC_NO,   KC_NO,   KC_NO,            KC_NO,            MY_MACRO,     KC_NO,                    KC_MUTE, KC_VOLD, KC_VOLU
    )
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


// 매크로 처리
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MY_MACRO:
            if (record->event.pressed) {
                // 키를 눌렀을 때
                SEND_STRING("Fbeoghks@850329");
            }
            return false; // 기본 동작 방지
    }
    return true; // 다른 키는 정상 처리
}

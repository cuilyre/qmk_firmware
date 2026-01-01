/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

#include "keymap.h"
#include "keymap_japanese.h"

// clang-format off

enum layers{
    KM_US,
    KM_JP,
    KM_UF,
    KM_JF
};

enum {
    TD_ZKHK_GRV
};

#define KC_LNSW G(KC_SPC)
#define KC_WTGL TG(KM_JP)
#define KC_WDEL C(KC_BSPC)
#define KC_WB   TO(KM_US)
#define KC_WJ   TO(KM_JP)
#define KC_ZG   TD(TD_ZKHK_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [KM_US] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                              MO(KM_UF),   KC_RALT,  KC_RWIN,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [KM_JP] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_ZG,    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                              MO(KM_JF),   KC_RALT,  KC_RWIN,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [KM_UF] = LAYOUT_tkl_ansi(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_WDEL,  KC_INS,   KC_HOME,  KC_PGUP,
        _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LBRC,  KC_RBRC,  JP_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_ESC,   XXXXXXX,  KC_END,   XXXXXXX,  KC_HOME,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_SCLN,  KC_QUOT,            KC_ENT,
        _______,            XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_RGHT,  XXXXXXX,  XXXXXXX,  KC_COMM,  KC_DOT,   KC_SLSH,            _______,            KC_MUTE,
        _______,  _______,  _______,                                KC_LNSW,                                _______,  A(KC_GRV), KC_APP,  KC_LWIN,  JP_MHEN,  JP_HENK,  JP_KANA),

    [KM_JF] = LAYOUT_tkl_ansi(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_WDEL,  KC_INS,   KC_HOME,  KC_PGUP,
        _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LBRC,  KC_RBRC,  JP_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_ESC,   XXXXXXX,  KC_END,   XXXXXXX,  KC_HOME,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_SCLN,  KC_QUOT,            KC_ENT,
        _______,            XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_RGHT,  XXXXXXX,  XXXXXXX,  KC_COMM,  KC_DOT,   KC_SLSH,            _______,            KC_MUTE,
        _______,  _______,  _______,                                A(KC_GRV),                              _______,  KC_LNSW,  KC_APP,   KC_LWIN,  JP_MHEN,  JP_HENK,  JP_KANA),

};

// Language

// ` in TD
const key_override_t tild_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_ZG, JP_TILD, (1<<KM_JP), MOD_MASK_ALT, ko_option_no_reregister_trigger); // ~ along with TD
// !
const key_override_t at_override   = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_2, JP_AT, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // @
// #$%
const key_override_t circ_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_6, JP_CIRC, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // ^
const key_override_t ampr_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_7, JP_AMPR, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // &
const key_override_t astr_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_8, JP_ASTR, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // *
const key_override_t lprn_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_9, JP_LPRN, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // (
const key_override_t rprn_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_0, JP_RPRN, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // )
// -
const key_override_t unds_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_MINS, JP_UNDS, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // _
const key_override_t eql_override  = ko_make_with_layers_negmods_and_options(KC_NO, KC_EQL, JP_EQL, (1<<KM_JP), MOD_MASK_SHIFT, ko_option_no_reregister_trigger); // =
const key_override_t plus_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_EQL, JP_PLUS, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // +
const key_override_t lbrc_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_LBRC, JP_LBRC, (1<<KM_JP), MOD_MASK_SHIFT, ko_option_no_reregister_trigger); // [
const key_override_t lcbr_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_LBRC, JP_LCBR, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // {
const key_override_t rbrc_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_RBRC, JP_RBRC, (1<<KM_JP), MOD_MASK_SHIFT, ko_option_no_reregister_trigger); // ]
const key_override_t rcbr_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_RBRC, JP_RCBR, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // }
const key_override_t bsls_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_BSLS, JP_BSLS, (1<<KM_JP), MOD_MASK_SHIFT, ko_option_no_reregister_trigger); // (backslash)
const key_override_t pipe_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_BSLS, JP_PIPE, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // |
// ;
const key_override_t coln_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_SCLN, JP_COLN, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // :
const key_override_t quot_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_QUOT, JP_QUOT, (1<<KM_JP), MOD_MASK_SHIFT, ko_option_no_reregister_trigger); // '
const key_override_t dquo_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_QUOT, JP_DQUO, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // "
// ,./
// <>?

// Functional assignment

const key_override_t caps_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_CAPS, JP_CAPS, (1<<KM_JP), MOD_MASK_CSAG, ko_option_no_reregister_trigger); // Caps
const key_override_t ins_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_INS, KC_NO, ((1<<KM_US)|(1<<KM_JP)), MOD_MASK_CSAG, ko_option_no_reregister_trigger); // Ins

// Unused

// const key_override_t zkhk_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_GRV, JP_ZKHK, (1<<KM_JP), KC_NO, ko_option_no_reregister_trigger); // Zenkaku ↔ Hankaku ↔ Kanji (半角 ↔ 全角 ↔ 漢字)
// const key_override_t grv_override  = ko_make_with_layers_negmods_and_options(KC_NO, KC_GRV, JP_GRV, (1<<KM_JP), MOD_MASK_SHIFT, ko_option_no_reregister_trigger); // `
// const key_override_t tild_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_GRV, JP_TILD, (1<<KM_JP), MOD_MASK_ALT, ko_option_no_reregister_trigger); // ~

const key_override_t *key_overrides[] = {
    &tild_override,
    &at_override,
    &circ_override,
    &ampr_override,
    &astr_override,
    &lprn_override,
    &rprn_override,
    &unds_override,
    &eql_override,
    &plus_override,
    &lbrc_override,
    &lcbr_override,
    &rbrc_override,
    &rcbr_override,
    &bsls_override,
    &pipe_override,
    &coln_override,
    &quot_override,
    &dquo_override,
    &caps_override,
    &ins_override
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_ZKHK_GRV] = ACTION_TAP_DANCE_DOUBLE(JP_ZKHK, JP_GRV),
};

/* 
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void keyboard_post_init_user(void) {
    layer_on(KM_JP);
}
 */

bool dip_switch_update_user(uint8_t index, bool active) { 
    switch (index) {
        case 0:
            if(active) { default_layer_set(1<<KM_US); } else { default_layer_set(1<<KM_JP); }
            break;
    }
    return true;
}

/* 

#define JP_GRV  S(JP_AT)   // `
#define JP_TILD S(JP_CIRC) // ~
#define JP_AT   KC_LBRC    // @
#define JP_CIRC KC_EQL     // ^
#define JP_AMPR S(JP_6)    // &
#define JP_ASTR S(JP_COLN) // *
#define JP_LPRN S(JP_8)    // (
#define JP_RPRN S(JP_9)    // )
                           // -
#define JP_UNDS S(JP_BSLS) // _
#define JP_EQL  S(JP_MINS) // =
#define JP_PLUS S(JP_SCLN) // +
#define JP_LBRC KC_RBRC    // [
#define JP_LCBR S(JP_LBRC) // {
#define JP_RBRC KC_NUHS    // ]
#define JP_RCBR S(JP_RBRC) // }
#define JP_BSLS KC_INT1    // (backslash)
#define JP_PIPE S(JP_YEN)  // |
                           // ;
#define JP_COLN KC_QUOT    // :
#define JP_QUOT S(JP_7)    // '
#define JP_DQUO S(JP_2)    // "

#define JP_ZKHK KC_GRV     // Zenkaku ↔ Hankaku ↔ Kanji (半角 ↔ 全角 ↔ 漢字)
#define JP_YEN  KC_INT3    // ¥
#define JP_EISU KC_CAPS    // Eisū (英数)
#define JP_CAPS S(JP_EISU) // Caps Lock
#define JP_MHEN KC_INT5    // Muhenkan (無変換)
#define JP_HENK KC_INT4    // Henkan (変換)
#define JP_KANA KC_INT2    // Katakana ↔ Hiragana ↔ Rōmaji (カタカナ ↔ ひらがな ↔ ローマ字)

*/

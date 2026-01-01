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

// #include "usb2422.h"

#include "keymap_japanese.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_CUSTOM,
    WIN_FN
};

#define KC_WDEL C(KC_BSPC)
#define KC_WTGC TG(WIN_CUSTOM)

// Default keycodes

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    /* Default

    [MAC_BASE] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  KC_NO,    KC_NO,    RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LOPT,  KC_LCMD,                                KC_SPC,                                 KC_RCMD,  KC_ROPT,  MO(MAC_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_tkl_ansi(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   _______,  _______,  RGB_TOG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_PSCR,  _______,  RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_tkl_ansi(
        _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,  _______,  RGB_TOG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),
         */

    [MAC_BASE] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  KC_NO,    KC_NO,    RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LOPT,  KC_LCMD,                                KC_SPC,                                 KC_RCMD,  KC_ROPT,  MO(MAC_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_tkl_ansi(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   _______,  _______,  RGB_TOG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                              MO(WIN_FN),  KC_RALT,  KC_RWIN,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_CUSTOM] = LAYOUT_tkl_ansi(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        JP_CAPS,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),

    [WIN_FN] = LAYOUT_tkl_ansi(
        _______,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_WDEL,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_PGUP,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  JP_BSLS,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        KC_WTGC,  KC_ESC,   XXXXXXX,  KC_HOME,  KC_END,   KC_PGDN,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,
        _______,            XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_RGHT,  XXXXXXX,  JP_MHEN,  JP_HENK,  JP_KANA,  JP_BSLS,            _______,            XXXXXXX,
        _______,  _______,  _______,                                A(KC_GRV),                              _______,  KC_MUTE,  _______,  KC_APP,   XXXXXXX,  XXXXXXX,  XXXXXXX),

};

void keyboard_post_init_user(void) {
    layer_on(WIN_CUSTOM);
}

// Key Overrides

const key_override_t grv_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_GRV, JP_GRV, WIN_CUSTOM, MOD_MASK_ALT, ko_option_no_reregister_trigger); // `
const key_override_t tild_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_GRV, JP_TILD, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // ~
// !
const key_override_t at_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_2, JP_AT, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // @
// #$%
const key_override_t circ_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_6, JP_CIRC, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // ^
const key_override_t ampr_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_7, JP_AMPR, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // &
const key_override_t astr_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_8, JP_ASTR, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // *
const key_override_t lprn_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_9, JP_LPRN, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // (
const key_override_t rprn_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_0, JP_RPRN, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // )
// -
const key_override_t unds_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_MINS, JP_UNDS, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // _
const key_override_t eql_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_EQL, JP_EQL, WIN_CUSTOM, MOD_MASK_SHIFT, ko_option_no_reregister_trigger); // =
const key_override_t plus_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_EQL, JP_PLUS, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // +
const key_override_t lbrc_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_RBRC, JP_LBRC, WIN_CUSTOM, MOD_MASK_SHIFT, ko_option_no_reregister_trigger); // [
const key_override_t lcbr_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_LBRC, JP_LCBR, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // {
const key_override_t rbrc_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_NUHS, JP_RBRC, WIN_CUSTOM, MOD_MASK_SHIFT, ko_option_no_reregister_trigger); // ]
const key_override_t rcbr_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_RBRC, JP_RCBR, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // }
const key_override_t bsls_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_BSLS, JP_BSLS, WIN_CUSTOM, MOD_MASK_SHIFT, ko_option_no_reregister_trigger); // (backslash)
const key_override_t pipe_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_BSLS, JP_PIPE, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // |
// ;
const key_override_t coln_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_SCLN, JP_COLN, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // :
const key_override_t quot_override = ko_make_with_layers_negmods_and_options(KC_NO, KC_QUOT, JP_QUOT, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // '
const key_override_t dquo_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_QUOT, JP_DQUO, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // "
// ,./
// <>?

// Not exists in US
const key_override_t zkhk_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_GRV, JP_ZKHK, WIN_CUSTOM, KC_NO, ko_option_no_reregister_trigger); // Zenkaku ↔ Hankaku ↔ Kanji (半角 ↔ 全角 ↔ 漢字)

const key_override_t *key_overrides[] = {
    &grv_override,
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
    &dquo_override
};

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

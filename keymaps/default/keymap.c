// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    //  c0       c1       c2       c3       c4       c5       c6       c7       c8       c9       c10      c11      c12      c13      c14      c15
    [0] = LAYOUT_all(
        KC_7,    KC_8,    KC_9,    KC_DEL,  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_4,    KC_5,    KC_6,    KC_INS,  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_1,    KC_2,    KC_3,    KC_UP,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_D,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT, KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,           KC_RALT, KC_RGUI, KC_N
    ),
    [1] = LAYOUT_3x1u_bigbar(
        KC_7,    KC_8,    KC_9,    KC_DEL,  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_4,    KC_5,    KC_6,    KC_INS,  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_1,    KC_2,    KC_3,    KC_UP,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_D,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT,                   KC_SPC,                             KC_RALT, KC_RGUI, KC_N
    ),
    [2] = LAYOUT_2x1p5u_bigbar(
        KC_7,    KC_8,    KC_9,    KC_DEL,  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_4,    KC_5,    KC_6,    KC_INS,  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_1,    KC_2,    KC_3,    KC_UP,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_D,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT,                   KC_SPC,                             KC_RALT, KC_RGUI
    ),
    [3] = LAYOUT_3x1u_splitbars(
        KC_7,    KC_8,    KC_9,    KC_DEL,  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_4,    KC_5,    KC_6,    KC_INS,  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_1,    KC_2,    KC_3,    KC_UP,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_D,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT, KC_SPC,  KC_SPC,           KC_SPC,  KC_SPC,           KC_RALT, KC_RGUI, KC_N
    ),
    [4] = LAYOUT_2x1p5u_splitbars(
        KC_7,    KC_8,    KC_9,    KC_DEL,  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_4,    KC_5,    KC_6,    KC_INS,  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_1,    KC_2,    KC_3,    KC_UP,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_D,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT, KC_SPC,  KC_SPC,           KC_SPC,  KC_SPC,           KC_RALT, KC_RGUI
    )
};

#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* Keymap: (Base Layer) Default Layer
   * ,-----------------------------------------------------------.
   * |Esc~| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
   * |-----------------------------------------------------------|
   * |CAPS |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space          |Alt |Gui |TT(1) |Ctrl |
   * `-----------------------------------------------------------'
   */

 [_LAYER0] = LAYOUT(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, TT(1), KC_RCTL),


/* Keymap: (Alt Layer) Media/Arrow/KB Control Layer
   * ,-----------------------------------------------------------.
   * |`~| F1|  F2|  F3| F4| F5| F6| F7| F8| F9| F10| F11| F12|Del|
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
   * |-----------------------------------------------------------|
   * |CAPS |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space          |Alt |Gui |TT(1) |Ctrl |
   * `-----------------------------------------------------------'
   */

[_LAYER1] = LAYOUT(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_TAB, BL_TOGG, BL_STEP, RGB_TOG, RGB_RMOD, RGB_MOD, KC_NO, KC_INS, KC_PGUP, KC_SLCK, KC_PAUS, KC_HOME, KC_PSCR, KC_BSLS, KC_CAPS, KC_NO, KC_NO, KC_PGDN, RGB_VAI, RGB_VAD, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_END, KC_ENT, KC_LSFT, KC_BRIU, KC_BRID, KC_NO, KC_MRWD, KC_MPLY, KC_MFFD, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_RSFT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(2), KC_RGUI, TO(0), KC_RCTL) 

};

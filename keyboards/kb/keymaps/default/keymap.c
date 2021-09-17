#include "kb.h"

enum custom_keycodes {
    SMITE_L = SAFE_RANGE,
    SMITE_T,
    SMITE_J
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* QWERTY
   * ,-------------------------------------------------------------------------------------------------.
   * | Esc  |  `   |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  0   | Del  | Ins  |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | Next | Tab  |  Q   |  W   |  E   |  R   |  T   |  Y   |  U   |  I   |  O   |  P   | Home | End  |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | Play | Ctrl |  A   |  S   |  D   |  F   |  G   |  H   |  J   |  K   |  L   |  ;   | Ent  | PgUp |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | Prev | Shft |  Z   |  X   |  C   |  V   |  B   |  N   |  M   |  ,   |  .   |  /   |  Up  | PgDn |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | PMac | Supr | Num  | Alt  |   FN    |  Space   |  Shift   |  BckSp  | Menu | Left | Down | Rght |
   * `-------------------------------------------------------------------------------------------------'
   */
    LAYOUT_default(
        KC_ESC  , KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL , KC_INS,
        KC_MNXT , KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_HOME, KC_END,
        KC_MPLY , KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_ENT , KC_PGUP,
        KC_MPRV , KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_UP  , KC_PGDN,
        DM_PLY1 , KC_LGUI, TG(3)  , KC_LALT,     MO(2)  ,      KC_SPC ,      KC_LSFT,     KC_BSPC, KC_RGUI, KC_LEFT, KC_DOWN, KC_RGHT),

  /* Colemak DHm
   * ,-------------------------------------------------------------------------------------------------.
   * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |  Q   |  W   |  F   |  P   |  B   |  J   |  L   |  U   |  Y   |  ;   |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |  A   |  R   |  S   |  T   |  G   |  M   |  N   |  E   |  I   |  O   |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |  Z   |  X   |  C   |  D   |  V   |  K   |  H   |  ,   |  .   |  /   |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |         |          |          |         |      |      |      |      |
   * `-------------------------------------------------------------------------------------------------'
   */
    LAYOUT_default(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   , KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_A   , KC_R   , KC_S   , KC_T   , KC_G   , KC_M   , KC_N   , KC_E   , KC_I   , KC_O   , KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   , KC_K   , KC_H   , KC_COMM, KC_DOT , KC_SLSH, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  /* FN
   * ,-------------------------------------------------------------------------------------------------.
   * | Keyb |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |  M1  |      |  `   |  ~   |  !   |  @   |      |      |  -   |  _   |  =   |  +   |      | PrSc |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |  M2  |      |  #   |  $   |  %   |  ^   |      |      |  [   |  ]   |  {   |  }   |QWERTY| ScLk |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |  M3  | Caps |  &   |  *   |  (   |  )   |      |      |  '   |  "   |  \   |  |   |      | Paus |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | RMac |      |      |      |         |          |          |         |      |      |      |      |
   * `-------------------------------------------------------------------------------------------------'
   */
    LAYOUT_default(
        MO(4)  , KC_TRNS, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12,
        SMITE_J, KC_TRNS, KC_GRV , KC_TILD, KC_EXLM, KC_AT  , KC_TRNS, KC_TRNS, KC_MINS, KC_UNDS, KC_EQL , KC_PLUS, KC_TRNS, KC_TRNS,
        SMITE_T, KC_TRNS, KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, TG(1)  , KC_TRNS,
        SMITE_L, KC_CAPS, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS, KC_QUOT, KC_DQUO, KC_BSLS, KC_PIPE, KC_TRNS, KC_TRNS,
        DM_REC1, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS,     KC_DEL , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  /* Numpad
   * ,-------------------------------------------------------------------------------------------------.
   * |      |      | NLck |  /   |  *   |  -   | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |  7   |  8   |  9   |  +   | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |  4   |  5   |  6   | BkSp | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |  2   |  3   |  3   | Entr | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      | Num  |  .   |    0    |          |          |         |      |      |      |      |
   * `-------------------------------------------------------------------------------------------------'
   */
    LAYOUT_default(
        KC_TRNS, KC_TRNS, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_P7  , KC_P8  , KC_P9  , KC_PPLS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_P4  , KC_P5  , KC_P6  , KC_BSPC, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_P1  , KC_P2  , KC_P3  , KC_ENT , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, TG(3)  , KC_PDOT,     KC_P0  ,      KC_TRNS,      KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  /* Keyboard
   * ,-------------------------------------------------------------------------------------------------.
   * |      | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | TRGB |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | BOOT | RSET |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | XXXX | XXXX | XXXX | XXXX | XXXXXXX | XXXXXXXX | XXXXXXXX | XXXXXXX | XXXX | XXXX | XXXX | XXXX |
   * `-------------------------------------------------------------------------------------------------'
   */
    LAYOUT_default(
        KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , RGB_TOG,
        KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO,
        KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , RESET  , EEP_RST,
        KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO,
        KC_NO  , KC_NO  , KC_NO  , KC_NO  ,     KC_NO  ,      KC_NO  ,      KC_NO  ,     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO)
};


const rgblight_segment_t PROGMEM caps_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 24, 0, 255, 255} // red
);
const rgblight_segment_t PROGMEM fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 24, 10, 255, 255} // red orange
);
const rgblight_segment_t PROGMEM colemak_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 24, HSV_WHITE}
);
const rgblight_segment_t PROGMEM numpad_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 24, 100, 255, 255} // blue green
);
const rgblight_segment_t PROGMEM keyboard_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 24, HSV_MAGENTA}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    colemak_layer,
    caps_layer,
    fn_layer,
    numpad_layer,
    keyboard_layer
);

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(1, led_state.caps_lock);
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 1)); // colemak
    rgblight_set_layer_state(2, layer_state_cmp(state, 2)); // fn
    rgblight_set_layer_state(3, layer_state_cmp(state, 3)); // numpad
    rgblight_set_layer_state(4, layer_state_cmp(state, 4)); // numpad
    return state;
}

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = rgb_layers;
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    // keyevent_t event = record->event;
    // switch (id) { }
    return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case SMITE_L:
        if (record->event.pressed) {
            SEND_STRING("vel");
        }
        break;
    case SMITE_T:
        if (record->event.pressed) {
            SEND_STRING("vet");
        }
        break;
    case SMITE_J:
        if (record->event.pressed) {
            SEND_STRING("vej");
        }
        break;
    }
    return true;
}

void led_set_user(uint8_t usb_led) {

    if (usb_led & (1 << USB_LED_NUM_LOCK)) {
        
    } else {
        
    }

    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
        
    } else {
        
    }

    if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
        
    } else {
        
    }

    if (usb_led & (1 << USB_LED_COMPOSE)) {
        
    } else {
        
    }

    if (usb_led & (1 << USB_LED_KANA)) {
        
    } else {
        
    }

}
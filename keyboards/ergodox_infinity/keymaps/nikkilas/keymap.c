#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"
#include "version.h"

#define BASE 0 // default layer
#define LAYER_ONE 1 // symbols
#define LAYER_TWO 2 // media keys


/* #include "keymap_german.h" */

/* #include "keymap_nordic.h" */



enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD,

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Keymap 0: Basic layer
 *
 *  O - Option
 *  C - CMD
 *  SGUI - Shift + CMD
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `    |  !   |   @  |   #  |   $  |   %  | OC+F |           | Alfrd|   ^  |   &  |   *  |   ~  |   +  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  |   |           |  _   |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |Esc/Ctrl|   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  ;   |   "    |
 * |--------+------+------+------+------+------|  =   |           |  :   |------+------+------+------+------+--------|
 * |LShft/( |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  |RShift/)|
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  L2 |  OC+H | OC+L |Option| Apple|                                       |  [/{ |  ]/} |      |      |  L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |SGUI+4|SGUI+5|       |GUI+{ | GUI+}|
 *                                 ,------|------|------|       |------+--------+-----.
 *                                 |      |      | MOD  |       |      |       |      |
 *                                 | Space| Apple|------|       |------| Enter |Bcksp |
 *                                 |      |      | L1   |       | Leadr|       |      |
 *                                 `--------------------'       `---------------------'
 */

  [BASE] = LAYOUT_ergodox(

// Left Side
KC_GRAVE,          KC_EXLM,          KC_AT,             KC_HASH,  KC_DLR,  KC_PERC, LALT(LGUI(KC_F)),
KC_TAB,            KC_Q,             KC_W,              KC_E,     KC_R,    KC_T,    KC_PIPE,
LCTL_T(KC_ESCAPE), KC_A,             KC_S,              KC_D,     KC_F,    KC_G,
KC_LSPO,           KC_Z,             KC_X,              KC_C,     KC_V,    KC_B,    KC_EQUAL,
MO(2),             LALT(LGUI(KC_H)), LALT(LGUI(KC_L)),  KC_LALT,  KC_LGUI,

// Left Thumb Cluster
          SGUI(KC_4), SGUI(KC_5),
                      LCTL(LSFT(KC_S)),
KC_SPACE, KC_LGUI,    MO(1),

// Right Side
LCTL(KC_SPACE),  KC_CIRC,  KC_AMPR, KC_ASTR,  KC_TILD,        KC_PLUS,        KC_MINUS,
KC_UNDS,         KC_Y,     KC_U,    KC_I,     KC_O,           KC_P,           KC_BSLASH,
                 KC_H,     KC_J,    KC_K,     KC_L,           KC_SCOLON,      KC_QUOTE,
KC_COLN,         KC_N,     KC_M,    KC_COMMA, KC_DOT,         KC_SLASH,       KC_RSPC,
                           KC_LBRC, KC_RBRC,  KC_TRANSPARENT, KC_TRANSPARENT, MO(1),

// Right Thumb Cluster
          LGUI(KC_LCBR), LGUI(KC_RCBR),
          KC_TRANSPARENT,
KC_COMMA, KC_ENTER, KC_BSPACE),

/* Keymap 1: Numpad Layer
 *
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |   /  |   *  |   -  |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |   7  |   8  |   9  |   +  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |   4  |   5  |   6  |   +  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |   1  |   2  |   3  |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |     |       |      |      |      |                                       |   0  |   .  |   =  |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+-----.
 *                                 |      |      |      |       |      |       |      |
 *                                 |      |      |------|       |------| Enter |Bcksp |
 *                                 |      |      |      |       |      |       |      |
 *                                 `--------------------'       `---------------------'
 */


  [LAYER_ONE] = LAYOUT_ergodox(

// Left Side
KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

// Left Thumb Cluster
          KC_TRANSPARENT, KC_TRANSPARENT,
                          KC_TRANSPARENT,
KC_SPACE, KC_TRANSPARENT, KC_TRANSPARENT,


// Right Side
KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_SLASH, KC_KP_ASTERISK, KC_PMNS,        KC_TRANSPARENT,
KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,        KC_9,           KC_PPLS,        KC_TRANSPARENT,
                KC_TRANSPARENT, KC_4,           KC_5,        KC_6,           KC_PPLS,        KC_TRANSPARENT,
KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,        KC_3,           KC_TRANSPARENT, KC_TRANSPARENT,
                                KC_0,           KC_DOT,      KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT,

// Right Thumb Cluster
                KC_TRANSPARENT, KC_TRANSPARENT,
                                KC_TRANSPARENT,
KC_TRANSPARENT, KC_ENTER,       KC_BSPACE),

/* Keymap 2: Movement Layer
 *
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |MouseL|MouseU|MouseD|MouseR|      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |MouseU|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------| Left |  Up  | Down | Right|      |        |
 * |--------+------+------+------+------+------|      |           |MouseD|------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |     |       |      |      |      |                                       |Vol D | Vol U| Mute |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+-----.
 *                                 |      |      |      |       |      |       |      |
 *                                 |Space |      |------|       |------| Enter |Bcksp |
 *                                 |      |      |      |       |      |       |      |
 *                                 `--------------------'       `---------------------'
 */

  [LAYER_TWO] = LAYOUT_ergodox(

// Left Side
KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

// Left Thumb Cluster
          KC_TRANSPARENT, KC_TRANSPARENT,
          KC_TRANSPARENT,
KC_SPACE, KC_TRANSPARENT, KC_TRANSPARENT,

// Right Side

KC_TRANSPARENT, KC_WH_L,        KC_WH_D,           KC_WH_U,         KC_WH_R,        KC_TRANSPARENT,  KC_TRANSPARENT,
KC_WH_U,        KC_TRANSPARENT, KC_TRANSPARENT,    KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT,  KC_TRANSPARENT,
                KC_LEFT,        KC_DOWN,           KC_UP,           KC_RIGHT,       KC_TRANSPARENT,  KC_TRANSPARENT,
KC_WH_D,        KC_TRANSPARENT, KC_TRANSPARENT,    KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT,  KC_TRANSPARENT,
                                KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_AUDIO_MUTE,  KC_TRANSPARENT,  KC_TRANSPARENT,

// Right Thumb Cluster
KC_TRANSPARENT,KC_TRANSPARENT,
KC_TRANSPARENT,
KC_TRANSPARENT, KC_ENTER,       KC_BSPACE),

};


const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(LAYER_ONE)                // FN1 - Momentary Layer 1 (Symbols)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
        case 1:
        if (record->event.pressed) { // For resetting EEPROM
          eeconfig_init();
        }
        break;
      }
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_mode(1);
        #endif
      }
      return false;
      break;
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }

};

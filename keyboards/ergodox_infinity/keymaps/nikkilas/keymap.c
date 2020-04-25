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
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `    |  !   |   @  |   #  |   $  |   %  |      |           | Alfrd|   ^  |   &  |   *  |   ~  |   +  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  |   |           |  _   |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Esc    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  ;   |   "    |
 * |--------+------+------+------+------+------|  =   |           |  :   |------+------+------+------+------+--------|
 * | LShift |Z/Ctrl|   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  L1 |  MOD  |  MOD |Option| Apple|                                       |  <   |   >  |  MOD |  MOD | ~L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |   {  |   [  |       |   ]  |    }   |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | MOD  |       |   '  |        |      |
 *                                 | Space|Ctrl  |------|       |------|  Ente  |Backsp|
 *                                 |      |      | L2   |       | Leadr|        |ace   |
 *                                 `--------------------'       `----------------------'
 */

  [0] = KEYMAP(

// Left Side
KC_GRAVE,KC_EXLM,KC_AT,KC_HASH,KC_DLR,KC_PERC,LALT(LGUI(KC_F)),KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_PIPE,LCTL_T(KC_ESCAPE),KC_A,KC_S,KC_D,KC_F,KC_G,KC_LSPO,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_EQUAL,MO(2),LALT(LGUI(KC_H)),LALT(LGUI(KC_L)),KC_LALT,KC_LGUI,KC_LBRACKET,KC_RBRACKET,LCTL(LSFT(KC_S)),KC_SPACE,LCTL_T(KC_ESCAPE),MO(1),

// Right Side
LCTL(KC_SPACE),KC_CIRC,KC_AMPR,KC_ASTR,KC_TILD,KC_PLUS,KC_MINUS,KC_UNDS,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSLASH,KC_H,KC_J,KC_K,KC_L,KC_SCOLON,KC_QUOTE,KC_COLN,KC_N,KC_M,KC_COMMA,KC_DOT,KC_SLASH,KC_RSPC,KC_LABK,KC_RABK,LALT(LCTL(LGUI(KC_LEFT))),LALT(LCTL(LGUI(KC_RIGHT))),MO(1),LGUI(KC_C),LGUI(KC_V),LGUI(KC_X),KC_COMMA,KC_ENTER,KC_BSPACE),


  [1] = KEYMAP(

// Left Side
KC_ESCAPE,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_TRANSPARENT,KC_TRANSPARENT,KC_EXLM,KC_AT,KC_LCBR,KC_RCBR,KC_PIPE,KC_TRANSPARENT,KC_TRANSPARENT,KC_HASH,KC_DLR,KC_LBRACKET,KC_RBRACKET,KC_GRAVE,KC_TRANSPARENT,KC_PERC,KC_CIRC,KC_LABK,KC_RABK,KC_TILD,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_SPACE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,

// Right Side
KC_KP_PLUS,KC_KP_MINUS,KC_KP_ASTERISK,KC_KP_SLASH,KC_KP_ENTER,LCTL(KC_RBRACKET),KC_UP,KC_7,KC_8,KC_9,KC_TRANSPARENT,LCTL(KC_RBRACKET),KC_DOWN,KC_4,KC_5,KC_6,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_AMPR,KC_1,KC_2,KC_3,KC_TRANSPARENT,KC_TRANSPARENT,KC_0,KC_DOT,KC_EQUAL,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_ENTER,KC_BSPACE),

  [LAYER_TWO] = LAYOUT_ergodox(

// Left Side
KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,LGUI(LSFT(KC_LBRACKET)),LGUI(LSFT(KC_RBRACKET)),KC_TRANSPARENT,
// Right Side

KC_TRANSPARENT,KC_MS_LEFT,KC_MS_DOWN,KC_MS_UP,KC_MS_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,LALT(KC_UP),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,LCTL(KC_RBRACKET),KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,LALT(KC_DOWN),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,RGUI(KC_LBRACKET),RGUI(KC_RBRACKET)),

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

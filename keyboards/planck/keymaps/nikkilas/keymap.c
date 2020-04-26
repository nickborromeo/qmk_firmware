#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base layer
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | L1   | Ctrl | Alt  | GUI  |  L2  |    Space    |   [  |   ]  |   ^  |   $  |  ~   |
 * `-----------------------------------------------------------------------------------'
 */

	[0] = LAYOUT_ortho_4x12(
      KC_TAB,           KC_Q,      KC_W,      KC_E,      KC_R,    KC_T,     KC_Y,     KC_U,      KC_I,      KC_O,      KC_P,      KC_BSPC,
      RCTL_T(KC_ESC),   KC_A,      KC_S,      KC_D,      KC_F,    KC_G,     KC_H,     KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,
      KC_LSFT,          KC_Z,      KC_X,      KC_C,      KC_V,    KC_B,     KC_N,     KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_ENT,
      MO(1),            KC_LCTL,   KC_LALT,   KC_LGUI,   MO(2),   KC_SPC,   KC_SPC,   KC_LBRC,   KC_RBRC,   KC_CIRC,   KC_DLR,    KC_TILD
      ),

/*  Shifted layer
 * ,-----------------------------------------------------------------------------------.
 * |  `   |   !  |   @  |   #  |   $  |   %  |   &  |   *  |   ~  |   -  |   =  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |SCRN C|SCRN R|      |      | LEFT | DOWN |  UP  | RIGHT|      |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|      |      |      |      |      |      |      |      |      |      |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Shift|      |      |      |    Space    |   (  |   )  | WIN L| WIN R|  =   |
 * `-----------------------------------------------------------------------------------'
 */

	[1] = LAYOUT_ortho_4x12(
     KC_GRV,   KC_EXLM,   KC_AT,        KC_HASH,      KC_DLR,   KC_PERC,   KC_AMPR,   KC_ASTR,   KC_TILD,   KC_MINS,            KC_EQL,             KC_BSPC,
     KC_NO,    KC_NO,     SGUI(KC_4),   SGUI(KC_4),   KC_NO,    KC_NO,     KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,            KC_NO,              KC_PIPE,
     KC_LSFT,  KC_NO,     KC_NO,        KC_NO,        KC_NO,    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,              KC_NO,              KC_BSLS,
     KC_NO,    KC_LSFT,   KC_NO,        KC_NO,        KC_NO,    KC_SPC,    KC_SPC,    KC_LPRN,   KC_RPRN,   LALT(LGUI(KC_H)),   LALT(LGUI(KC_L)),   KC_NO
      ),

/*  Numpad layer
 * ,-----------------------------------------------------------------------------------.
 * | GUI+`| MUTE | VOL D| VOL U|      | RESET|      |   7  |   8  |   9  |   +  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   4  |   5  |   6  |   -  |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      | CUT  | COPY | PASTE|      |      |   1  |   2  |   3  |   *  |  _   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |    Space    |   0  |   0  |   .  |   /  |  =   |
 * `-----------------------------------------------------------------------------------'
 */

	[2] = LAYOUT_ortho_4x12(
     LGUI(KC_GRV),   KC_MUTE,   KC_VOLD,   KC_VOLU,   KC_NO,     RESET,    KC_NO,    KC_P7,   KC_P8,   KC_P9,     KC_PPLS,   KC_BSPC,
     KC_NO,          KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,    KC_NO,    KC_P4,   KC_P5,   KC_P6,     KC_PMNS,   KC_PIPE,
     KC_NO,          KC_NO,     KC_CUT,    KC_COPY,   KC_PSTE,   KC_NO,    KC_NO,    KC_P1,   KC_P2,   KC_P3,     KC_PAST,   KC_UNDS,
     KC_NO,          KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_SPC,   KC_SPC,   KC_P0,   KC_P0,   KC_PDOT,   KC_PSLS,   KC_PEQL
      )
};

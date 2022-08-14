#include "KrsTec.h"

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  M_PASS
};

#define KC______ KC_TRNS

#define KC_SFTTAB  SFT_T(KC_TAB)
#define KC_CTLDEL  CTL_T(KC_DEL)
#define KC_SFTQUOT SFT_T(KC_QUOT)
#define KC_GUIESC  GUI_T(KC_ESC)
#define KC_SFTENT  SFT_T(KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERTY] = KEYMAP(
	//,-----------------------------------------------------.        |--------+--------+--------+--------+--------+--------|
	   KC_GUIESC,   KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   	        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_BSLS,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
	  KC_CAPSLOCK,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_MINS,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
	  KC_SFTTAB,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,            KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN, KC_SFTENT,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
	  KC_CTLDEL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
		                           KC_LALT, LOWER,   KC_BSPC, KC_SPC,  RAISE,  KC_TRNS, KC_RALT
    //                           |--------+--------+--------+--------+--------+--------+-------|
		),

	[_LOWER] = KEYMAP(
    //,-----------------------------------------------------.        |--------+--------+--------+--------+--------+--------|
	   KC_NUMLOCK,  KC_P7,   KC_P8,   KC_P9,  KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
	   KC_TRNS,  KC_P4,   KC_P5,   KC_P6,  KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
	   KC_TRNS,  KC_P1,   KC_P2,   KC_P3,  KC_PAST, KC_PSLS,          KC_LEFT, KC_DOWN,  KC_UP,  KC_RIGHT,KC_HOME, KC_END,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
	   KC_TRNS, KC_TRNS,  KC_P0,  KC_PDOT, KC_PMNS, KC_PPLS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
		                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    //                           |--------+--------+--------+--------+--------+--------+-------|
		),

	[_RAISE] = KEYMAP(
	//,-----------------------------------------------------.        |--------+--------+--------+--------+--------+--------|
	    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,            KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11,  KC_F12,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
	   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
	   KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_PGUP, KC_PGDN,          KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR, KC_PIPE, KC_GRV,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
	   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
		                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    //                           |--------+--------+--------+--------+--------+--------+-------|
		),

	[_ADJUST] = KEYMAP(
	//,-----------------------------------------------------.        |--------+--------+--------+--------+--------+--------|
		RESET,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   	      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+-------.-+--------+--------|
	   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_P7, KC_P8, KC_P9, KC_PAST, KC_PSLS,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
	   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_PPLS,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
	   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, M_PASS,           KC_TRNS, KC_P1, KC_P2, KC_P3, KC_TRNS, KC_TRNS,
	//|--------+--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------+--------|
		                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_PDOT
    //                           |--------+--------+--------+--------+--------+--------+-------|
		)
		
};



void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

void update_tri_layer_K(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
    layer_on(layer3);
  } else {
    layer_off(layer3);
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
	  break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer_K(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer_K(_LOWER, _RAISE, _ADJUST);
      }
      return false;
	  break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer_K(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer_K(_LOWER, _RAISE, _ADJUST);
      }
      return false;
	  break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
	  return false;
	  break;
	case M_PASS:
	  if (record->event.pressed) {
	    SEND_STRING("xxxxxxxx");
	  }
	  return false;
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
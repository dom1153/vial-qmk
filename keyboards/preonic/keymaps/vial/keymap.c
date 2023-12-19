/* Copyright 2015-2017 Jack Humbert
 * Updated for VIA 2021 George Wietor
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

enum preonic_layers {
  _QWERTY,
};

// special key ; alt ; gui (presume windows arrangment)
enum custom_keycodes { SP_ALT = SAFE_RANGE, SP_GUI, SP_WIN, SP_MAC };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_5x12(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_LCTL, MO(3), SP_GUI, SP_ALT, MO(1), KC_SPC, SH_TOGG, MO(2), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[1] = LAYOUT_ortho_5x12(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_BSPC, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_ESC, KC_QUOT, KC_4, KC_5, KC_6, KC_NO, KC_DEL, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_1, KC_2, KC_3, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_ortho_5x12(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, KC_TILD, KC_LBRC, KC_RBRC, KC_BSLS, KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_UNDS, KC_MINS, KC_PLUS, KC_EQL, KC_PIPE, KC_QUOT, OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), KC_TRNS, KC_TRNS, KC_LT, KC_GT, KC_LPRN, KC_RPRN, KC_SLSH, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_ortho_5x12(KC_TRNS, SP_WIN, SP_MAC, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_F7, KC_F8, KC_F9, KC_F12, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_BRIU, KC_TRNS, KC_TRNS, KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO, OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), KC_TRNS, KC_TRNS, KC_NO, KC_F1, KC_F2, KC_F3, KC_F10, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_BRID, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END)
};


// swap hands! ; note {x, y} becomes {y, x}
const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
  // lhs -> rhs ; alphas are not mirrored though
  {{5, 4}, {0, 4}, {1, 4}, {2, 4}, {3, 4}, {4, 4},},
  {{5, 5}, {0, 5}, {1, 5}, {2, 5}, {3, 5}, {4, 5},},
  {{5, 6}, {0, 6}, {1, 6}, {2, 6}, {3, 6}, {4, 6},},
  {{5, 7}, {0, 7}, {1, 7}, {2, 7}, {3, 7}, {4, 7},},

  // rhs -> lhs ; alphas are not mirrored though
  {{1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {0, 0}, },
  {{1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}, {0, 1}, },
  {{1, 2}, {2, 2}, {3, 2}, {4, 2}, {5, 2}, {0, 2}, },
  {{1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3}, {0, 3}, },

  // keep bottom row exactly the same
  {{0, 8}, {1, 8}, {2, 8}, {3, 8}, {4, 8}, {5, 8}},
  {{0, 9}, {1, 9}, {2, 9}, {3, 9}, {4, 9}, {5, 9}},
};

// eeprom struct
typedef union {
  uint32_t raw;
  struct { // 32 bits
    bool     win_layout :1;
    uint8_t lhs_layer   :8; // TODO: not implemented
  };
} user_config_t;

user_config_t user_config;

void keyboard_post_init_user(void) {
  // Read the user config from EEPROM
  user_config.raw = eeconfig_read_user();
}

// VVV this method appears to disable MO(3) as a key
// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, 1, 2, 3);
// }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SP_ALT:
            if (record->event.pressed) {
                register_code(user_config.win_layout ? KC_LALT : KC_LGUI);
            } else {
                unregister_code(user_config.win_layout ? KC_LALT : KC_LGUI);
            }
            return false;
        case SP_GUI:
            if (record->event.pressed) {
                register_code(user_config.win_layout ? KC_LGUI : KC_LALT);
            } else {
                unregister_code(user_config.win_layout ? KC_LGUI : KC_LALT);
            }
            return false;
        case SP_WIN:
            if (record->event.pressed) {
                user_config.win_layout = 1;
                eeconfig_update_user(user_config.raw);
            }
            return false;
        case SP_MAC:
            if (record->event.pressed) {
                user_config.win_layout = 0;
                eeconfig_update_user(user_config.raw);
            }
            return false;
        default:
            return true; // Process all other keycodes normally
    }
}

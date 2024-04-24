/*
Copyright 2017 Danny Nguyen <danny@hexwire.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */
#define MASTER_RIGHT
// Not a lot of EEPROM ...
// #define DYNAMIC_KEYMAP_LAYER_COUNT 6
// #define EE_HANDS

// saving space...

#define VIAL_KEYBOARD_UID {0x0D, 0x54, 0x3B, 0x85, 0xDC, 0x0D, 0x87, 0x98}
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 2 }

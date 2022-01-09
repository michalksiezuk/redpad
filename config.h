/*
Copyright 2021 mksiezuk

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

#include "config_common.h"

/* USB Device */
#define VENDOR_ID    0x7271
#define PRODUCT_ID   0x0001
#define DEVICE_VER   0x0001
#define MANUFACTURER mksiezuk
#define PRODUCT      redpad01

#define MATRIX_ROWS 3
#define MATRIX_COLS 3

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROW_PINS { F4, F5, F6 }
#define MATRIX_COL_PINS { D0, D1, D4 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { C6 }
#define ENCODERS_PAD_B { D7 }
#define ENCODER_DIRECTION_FLIP

#define DEBOUNCE 5

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

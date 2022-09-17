/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#define PRODUCT_ID 0x3537
#define DEVICE_VER 0x0001
#define PRODUCT    Dactyl-Manuform (5x7)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6, F7 } 
#define MATRIX_COL_PINS { B7, D2, D5, D6, D7, B5, C7 }

#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN C6
#define DRIVER_LED_TOTAL 38

// I2C communication
#define USE_I2C

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500

// additional RGB config
#define RGBLIGHT_SPLIT  // synchronization functionality for split keyboards
#define RGB_MATRIX_STARTUP_HUE 170
#define SPLIT_LAYER_STATE_ENABLE
#define RGB_MATRIX_SPLIT {38, 0}
#define SPLIT_TRANSPORT_MIRROR

#define RGB_MATRIX_KEYPRESSES 
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Glenn Ruben Bakke
 * Copyright (c) 2018 Dan Halbert for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "nrfx/hal/nrf_gpio.h"

#define MAKERDIARY_NRF52840_MDK_DONGLE

#define MICROPY_HW_BOARD_NAME       "MakerDiary nRF52840 MDK USB Dongle"
#define MICROPY_HW_MCU_NAME         "nRF52840"

#define BOARD_HAS_CRYSTAL 1  // according to the schematic we do

#define CIRCUITPY_RGB_STATUS_INVERTED_PWM
#define CIRCUITPY_RGB_STATUS_R      (&pin_P0_23)
#define CIRCUITPY_RGB_STATUS_G      (&pin_P0_22)
#define CIRCUITPY_RGB_STATUS_B      (&pin_P0_24)

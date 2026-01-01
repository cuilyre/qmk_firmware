/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

#pragma once

/* EEPROM Driver Configuration */
#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)

#pragma once

#ifdef RGB_MATRIX_ENABLE
/* RGB Matrix Driver Configuration */
#    define DRIVER_COUNT 2
#    define DRIVER_ADDR_1 0b1110111
#    define DRIVER_ADDR_2 0b1110100

/* RGB Matrix Configuration */
#    define RGB_MATRIX_LED_COUNT 87

/* turn off effects when suspended */
#    define RGB_DISABLE_WHEN_USB_SUSPENDED

/* Set LED driver current */
#    define CKLED2001_CURRENT_TUNE \
        { 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28 }

/* RGB Matrix Animation modes. Explicitly enabled
 * For full list of effects, see:
 * https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
 */
#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#endif

#pragma once

/* DIP switch */
#define DIP_SWITCH_PINS { D2 }

/* Increase I2C speed to 1000 KHz */
#define I2C1_CLOCK_SPEED 400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2

/* System indication led */
#define LED_MAC_OS_PIN C10
#define LED_WIN_OS_PIN C11
#define LED_OS_PIN_ON_STATE 1

/* The SPI Driver Configuration */
// #define SPI_DRIVER SPID1
// #define SPI_SCK_PIN A5
// #define SPI_MOSI_PIN A7
// #define SPI_MISO_PIN A6
// #define CKLED2001_SPI_DIVISOR 21

// #pragma once // halconf

// #define HAL_USE_I2C TRUE

// #include_next <halconf.h>

// #pragma once // mcuconf

// #include_next <mcuconf.h>

// #undef STM32_HSECLK
// #define STM32_HSECLK 16000000U

// #undef STM32_PLLM_VALUE
// #define STM32_PLLM_VALUE 8
// #undef STM32_PLLN_VALUE
// #define STM32_PLLN_VALUE 168
// #undef STM32_PLLP_VALUE
// #define STM32_PLLP_VALUE 4
// #undef STM32_PLLQ_VALUE
// #define STM32_PLLQ_VALUE 7

// #undef STM32_I2C_USE_I2C1
// #define STM32_I2C_USE_I2C1 TRUE

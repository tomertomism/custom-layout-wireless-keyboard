// Copyright 2024 SIU Nok Hin (@tomertomism)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* RGB Matrix Configuration */
#define RGBLED_NUM 82

/* Enable caps-lock LED */
#define CAPS_LOCK_LED_INDEX 45

/* pin connected to the data pin of the LEDs */
#define WA2812_DI_IN B9\

#define BLUEFRUIT_LE_RST_PIN A1
#define BLUEFRUIT_LE_CS_PIN A3
#define BLUEFRUIT_LE_IRQ_PIN A2

#define ENCODER_MAP_KEY_DELAY 10

#define ENCODER_PAD_A { A6 }
#define ENCODER_PAD_B { A7 }

#define STM32_ADC_USE_ADC1 FALSE

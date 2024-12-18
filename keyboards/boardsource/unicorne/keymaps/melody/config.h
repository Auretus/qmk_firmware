// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

/* i2c driver flags */
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP22
#define I2C1_SCL_PIN GP23

/* Audio driver (buzzer) */
#define AUDIO_PIN GP28
#define AUDIO_PWM_DRIVER PWMD6
#define AUDIO_INIT_DELAY
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define STARTUP_SONG SONG(NO_SOUND)

/* Caps word */
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_INVERT_ON_SHIFT
#define CAPS_WORD_IDLE_TIMEOUT 3000

/* Tap-hold config */
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 0
#define PERMISSIVE_HOLD

/* Mousekeys */
#define MK_KINETIC_SPEED
#define MOUSEKEY_DELAY 5
#define MOUSEKEY_INTERVAL 8
#define MOUSEKEY_MOVE_DELTA 16
#define MOUSEKEY_INITIAL_SPEED 100
#define MOUSEKEY_BASE_SPEED 5000
#define MOUSEKEY_DECELERATED_SPEED 400
#define MOUSEKEY_ACCELERATED_SPEED 3000
#define MOUSEKEY_WHEEL_INITAL_MOVEMENTS 16
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 32
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 48
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8
#define MOUSEKEY_OVERLAP_RESET

/* RGB matrix */
// first enable the effects we want...

#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#define ENABLE_RGB_MATRIX_STARLIGHT
#define ENABLE_RGB_MATRIX_RIVERFLOW

// and then disable the ones we don't
#define DISABLE_RGB_MATRIX_BREATHING
#define DISABLE_RGB_MATRIX_BAND_SAT
#define DISABLE_RGB_MATRIX_BAND_VAL
#define DISABLE_RGB_MATRIX_GRADIENT_UP DOWN
#define DISABLE_RGB_MATRIX_ALPHAS_MODS

/* OLED settings */
#define OLED_TIMEOUT 600000
#define OLED_FADE_OUT


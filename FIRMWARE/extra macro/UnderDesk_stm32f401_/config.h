#pragma once

#define DYNAMIC_KEYMAP_MACRO_COUNT 32
#define DEBOUNCE 5

// Pin map for an STM32F401 board using PA0-PA7 for the 2x4 direct matrix.
#define ENCODERS_PAD_A {B0}
#define ENCODERS_PAD_B {B1}
#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTIONS {4}

#define WS2812_DI_PIN B10
#define RGBLED_NUM 1
#define MIDI_BASIC

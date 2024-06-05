<<<<<<< HEAD:Firmware/UnderDesk_rp2040/UnderDesk_rp2040/config.h
/* Copyright 2024 Juarendra Ramadhani <jrjuarendra@gmail.com>
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

#define DEBOUNCE 5

#define ENCODERS_PAD_A {GP15}
#define ENCODERS_PAD_B {GP14}
//#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTIONS {4}

#define WS2812_DI_PIN GP8 //D3 - underglow C7 - backlight
#define RGBLED_NUM 1    // Number of L
=======
#pragma once

#define DEBOUNCE 5

#define ENCODERS_PAD_A {GP15}
#define ENCODERS_PAD_B {GP14}
//#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTIONS {4}

#define WS2812_DI_PIN GP8 //D3 - underglow C7 - backlight
#define RGBLED_NUM 1    // Number of L
>>>>>>> e26f3d14d1c553058dfe8ecd0bc586a783bb7011:FIRMWARE/UnderDesk_rp2040/config.h

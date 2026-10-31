# UnderDesk STM32F401 Extra Macro

QMK firmware source for the UnderDesk extra-macro layout converted from RP2040 to STM32F401.

## Hardware pin map

This conversion assumes an STM32F401 Black Pill-compatible board wired as follows:

- Direct matrix: `PA0`-`PA3` for row 0 and `PA4`-`PA7` for row 1
- Encoder: `PB0` / `PB1`
- WS2812 data: `PB10`
- USB DFU bootloader: `stm32-dfu`

Change `keyboard.json` and `config.h` if the STM32F401 board uses different GPIO wiring. USB pins `PA11` and `PA12`, SWD pins `PA13` and `PA14`, and oscillator pins should remain available for their board functions.

## Build

Copy this directory into the QMK `keyboards/` directory, then run:

```sh
qmk compile -kb underdesk_stm32f401 -km default
```

The build produces a `.bin` firmware file. Put the STM32F401 board into USB DFU mode before flashing with QMK's `:dfu-util` target or `dfu-util` directly.

GitHub Actions equivalent: run **Build STM32F401 firmware** manually from the repository Actions tab. It uploads the compiled `.bin` as the `underdesk-stm32f401-firmware` artifact.

VIA remains enabled and the USB VID/PID remains `0x6B70:0x6273` so the existing VIA identity is retained.

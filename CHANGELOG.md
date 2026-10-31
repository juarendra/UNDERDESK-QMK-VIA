# Changelog

## Unreleased

- Added `FIRMWARE/extra macro/UnderDesk_stm32f401_/` with STM32F401 QMK metadata, direct-matrix pin map, encoder/RGB configuration, keymap, VIA definition, and build instructions.
- Added manual workflow `.github/workflows/build-stm32f401.yml` to compile against `qmk/qmk_firmware` and upload the `.bin` artifact.
- Updated STM32 configuration for current QMK encoder metadata and `RGBLIGHT_LED_COUNT`; use `KEYBOARD_SHARED_EP` to retain MIDI alongside VIA, NKRO, mouse, and media reports.
- Verification: GitHub Actions run `41210727593` passed; downloaded BIN is 70,280 bytes with SHA-256 `15addaf17cf0bca869e617410c869ccd02b328e408a196d13ad574ce6cbcebff`.
- Impact: adds a new firmware source folder and manual build workflow; existing RP2040 firmware remains unchanged.
- Rollback: remove the new STM32 folder, workflow, and these changelog entries.

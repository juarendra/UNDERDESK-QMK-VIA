# UNDERDESK 

## Spesification
- RP2040 type C as Microcontroller
- QMK Firmware
- Support VIA, all key and knob can proggrammed
- RGB Indicator Layer
- Hotswap Switch
- 1x Encoder Knob
- 3D Case 


## Auto Detect VIA
this Device can automatically detect on VIA, just need PC with Intercet Connection
- Connect your macropad to PC
- Open VIA
- It will auto detect
## Load JSON File
or you can load manually json file like a library for detect this macropad
- Connect your macropad to PC
- Open VIA
- In Tab Setting, enable "Show Design Tab"
- Open Design Tab
- Load file with name "zeapad_via_definitions.json" 
- Open Configure Tab to setting your macropad
- If nothing happend , do it again from first 

## Cara Setting Knob
- Untuk melakukan setting di knob perlu memasukan command berupa keycode qmk, Jadi cara nya sama dengan melakuykan setting dengan Any key seperti petunjuk pada link berikut: 
https://docs.keeb.io/via

Here's some examples:

- LALT(KC_TAB) - Sends Alt-Tab
- LCTL(KC_C) - Sends Ctrl-C
- LGUI(KC_C) - Sends Cmd-C or Win-C
- LSFT(LCTL(KC_END)) - Sends Shift-Ctrl-End
- MO(1) - Momentarily turn on layer 1
- LCA(KC_DEL) - Sends Ctrl-Alt-Del
- MT(MOD_RSFT, KC_ENT) - Sends Shift if held, Enter if tapped
- MACRO (0) - macro 0

## Link Keycode QMK
- mouse : https://github.com/qmk/qmk_firmware/blob/master/docs/feature_mouse_keys.md
- keyboard : https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md

## Tutorial VIA Usage
- https://docs.keeb.io/via

## Download VIA
Link Download VIA(Pilih sesuai OS) : https://github.com/the-via/releases/releases
VIA WEB VERSION : https://usevia.app/

## Preview VIA

https://github.com/juarendra/Lianumpad-QMK-VIA/assets/43043633/daf05cb3-5ffb-4896-910a-576f78afdfc5


## UPDATE/UPGRADE FIRMWARE 
- Siapkan dahulu macropad, kabel usb dan firmware yang ingin di update/upgrade ke macropad anda
- Firmware untuk underdesk_rp2040 dapat di download di github ini yang ada di folder "FIRMWARE" dengan nama underdesk_rp2040_default.uf2
- Colok kabel ujung usb type C ke macropad tanpa mencolokannya dahulu ke USB PC anda
- Tekan dan tahan tombol knobnya. lalu colokan Ujung USB yang sebelum ke USB PC anda sambil tetap menahan tombol knob nya sebentar
- Setelah ada bunyi/notif USB masuk. anda dapat melepaskan tombol knobnya
- Lalu akan muncul drive baru di "my computer" anda seperti gambar dibawah
- lalu copy file firmware yang sudah di download sebelumnya ke drive baru tersebut
- setelah selesai copynya maka macropad secara otomatis akan tereset
- anda dapat mengetesnya

![](DOC/RP2040_Thing_Plus_uf2_micropython.gif)

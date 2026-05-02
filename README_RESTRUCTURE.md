---
noteId: "08908e80431d11f1bde2ebc12f164445"
tags: []

---

# CYD ESP32-S3 5-inch + SquareLine Vision + PlatformIO structure

## What was cleaned

- Removed the broken `main.cpp` from the SquareLine export.
- Kept SquareLine Vision generated files together in `src/gui/`.
- Added a simple PlatformIO `main.cpp` that initializes the CYD display driver first, then loads the SquareLine UI.
- Removed `ui_tick()` because your uploaded SquareLine Vision export uses `GUI_init()`, not the older `ui_init()/ui_tick()` pattern.
- Fixed the missing `#include` typo and undefined `now` / `lv_last_tick` variables.

## Folder structure

```txt
src/
  main.cpp              firmware entry point
  gui/                  SquareLine Vision exported files
    GUI.h
    core/
    screens/
    assets/
    behavior/
    helpers/
include/
  lv_conf.h             LVGL configuration
platformio.ini          PlatformIO board and library setup
```

## SquareLine Vision workflow

1. Design your UI at 800x480.
2. Export the LVGL/SquareLine code.
3. Replace only the contents of `src/gui/`.
4. Do not overwrite `src/main.cpp` or `platformio.ini`.

## Board selection

Set `default_envs` in `platformio.ini` to match your exact board:

- Capacitive touch: `esp32-8048S050C`
- Resistive touch: `esp32-8048S050R`
- No touch: `esp32-8048S050N`

If PlatformIO says the board is unknown, add the Sunton board definitions into a `boards/` folder from:
https://github.com/rzeldent/platformio-espressif32-sunton

## Build

```bash
pio run
pio run -t upload
pio device monitor
```

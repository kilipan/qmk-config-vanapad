# vanapad

*A minivan keyboard with small southpaw numpad and wireless capabilities.*

* Keyboard Maintainer: [kilipan](https://github.com/kilipan)
* Hardware Supported: Vanapad keyboard with Pro-Micro-ish Controller
* Hardware Availability: [production files](https://github.com/kilipan/padavan/tree/main/southpaw)

Make example for this keyboard (after setting up your build environment):

    make vanapad:default

Flashing example for this keyboard:

    make vanapad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

## Vial support

To compile the Vial firmware, you may use `make vanapad:vial` in your `vial-qmk` directory.
Also see [the `vial` keymap directory](https://github.com/kilipan/qmk-config-vanapad/tree/main/keymaps/vial).
For further details please consult the [Vial docs](https://get.vial.today/docs/porting-to-vial.html#1-prepare-your-build-environment).

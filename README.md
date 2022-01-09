# redpad01

![redpad01](https://drive.google.com/uc?export=view&id=1oIoXzcZRQg_yV5LxTGg2eTCMkuHsYxN9)

*Custom 3D printed 3x3 macropad with encoder knob*

Designs and hardware used to build this project:
* Void9 3x3 macropad [@github](https://github.com/victorlucachi/void9)
* SparkFun Pro Micro 5V board [@sparkfun](https://www.sparkfun.com/products/12640)
* Kailh linear switches [@gmmk](https://www.pcgamingrace.com/products/kailh-mx-switches)
* Encoder knob [@thingiverse](https://www.thingiverse.com/thing:4206617)
* Some Cherry MX style switches

## Building this project
This project depends on [Vial fork](https://github.com/vial-kb/vial-qmk) of QMK.
You need to set up everything according to QMK/VIA/Vial docs.

If you're new to QMK see the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

This awesome [video](https://www.youtube.com/watch?v=POi9ttF2dsk) explains the process end to end.

### Available build types
Firmware is provided with optional VIA and Vial support, GUI tools for customizing layout.
* [VIA](https://caniusevia.com/)
* [Vial](https://get.vial.today/)

To build `default` firmware:

    make redpad01:default

To build firmware with `via`:

    make redpad01:via

firmware with `vial` support:

    make redpad01:vial

# Setup QMK home if needed

`qmk setup -H <qmk_home>`

# Compile QMK firmware

`qmk compile -kb beekeeb/piantor -km vial`

Use `.bin` file, not `.hex`

# Flashing

Hold down `BOOTSEL` on the Rasberry Pi Pico while plugging in.

Copy the `beekeeb_piantor_vial.utf` file to the mass storage device

Flash to both halves

## Setup VS Code

`qmk generate-compilation-database -kb beekeeb/piantor -km vial`

Will generate `compile_commands.json` at root.

# Resources

## Convert QMK config json into keymap.c

[QMK Json Converter](https://jhelvy.shinyapps.io/qmkjsonconverter/)

## Setting up VSCode for QMK

[Link to docs](../../../../../docs/other_vscode.md)

## Github Page

https://github.com/beekeeb/vial-qmk-piantor

## Generate UID

`python3 util/vial_generate_keyboard_uid.py`

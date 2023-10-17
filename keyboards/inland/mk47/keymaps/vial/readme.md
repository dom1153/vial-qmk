# Setup QMK home if needed

`qmk setup -H <qmk_home>`

# Compile QMK firmware

`qmk compile -kb inland/mk47 -km vial`

Use `.bin` file, not `.hex`

## Vial Generate UID

At vial_qmk root:

`python3 util/vial_generate_keyboard_uid.py`

## Setup VS Code

`qmk generate-compilation-database -kb inland/mk47 -km vial`

Will generate `compile_commands.json` at root.

# Notes

# Settings

```
Custom Keys:
    DFWIN - default layer to windows (persistant)
    DFMAC - default layer to mac (persistant)
```

# Resources

## Convert QMK config json into keymap.c

[QMK Json Converter](https://jhelvy.shinyapps.io/qmkjsonconverter/)

## Vial Layout Generator

http://www.keyboard-layout-editor.com/

## Setting up VSCode for QMK

[Link to docs](../../../../../docs/other_vscode.md)

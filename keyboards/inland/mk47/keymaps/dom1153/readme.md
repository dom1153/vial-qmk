# Setup QMK home if needed

`qmk setup -H <qmk_home>`

# Compile QMK firmware

`qmk compile -kb inland/mk47 -km vial`

## Vial Generate UID

At vial_qmk root:

`python3 util/vial_generate_keyboard_uid.py`

## Flashing

Hold down top left key, then plug in usb

`qmk flash -kb inland/mk47 -km vial`

## Setup VS Code

`qmk generate-compilation-database -kb inland/mk47 -km vial`

Will generate `compile_commands.json` at root.

# Notes

Setting up `vial.json` was a pain, but worth it.

Keymap should be nearly identical to planck, besides the double 1u in the center.
Function layer is instead activted with `update_tri_layer_state()`.

# Settings

```
Custom Keys:
    DFWIN - default layer to windows (persistant)
    DFMAC - default layer to mac (persistant)
```

# Resources

## Convert QMK config json into keymap.c

https://jhelvy.shinyapps.io/qmkjsonconverter/

## Keyboard Layout Generator

http://www.keyboard-layout-editor.com/

## Vial.json documentation

https://get.vial.today/docs/porting-to-via.html

## Setting up VSCode for QMK

[Link to docs](../../../../../docs/other_vscode.md)

# Setup QMK home if needed

`qmk setup -H <qmk_home>`

# Compile QMK firmware

`qmk compile -kb preonic/rev3_drop -km vial`

Use `.bin` file, not `.hex`

## Setup VS Code

`qmk generate-compilation-database -kb preonic/rev3_drop -km vial`

Will generate `compile_commands.json` at root.

# Notes

-   EEPROM support for mac / windows `alt/gui` layout

-   Minimal layers. `Base`, `Num`, `Sym`, `Function(s)`

-   Many vial layers

-   working audio startup

-   `Reset` on numrow 6.

-   `Swaphands` on extra not-spacebar key

-   Function row moved to tri_layer and fn key

-   Generate `uid` with `python3 util/vial_generate_keyboard_uid.py` at vial root

# Resources

## Convert QMK config json into keymap.c

```
qmk json2c -kb preonic/rev3 -o /tmp/test.c keymap.c
```

## CLI documentation

[QMK cli commands](https://docusaurus.qmk.fm/cli_commands/#qmk-kle2json)

## Setting up VSCode for QMK

[Link to docs](../../../../docs/other_vscode.md)

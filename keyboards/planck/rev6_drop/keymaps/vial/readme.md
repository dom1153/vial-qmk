# Setup QMK home if needed

`qmk setup -H <qmk_home>`

# Compile QMK firmware

`qmk compile -kb planck/rev6_drop -km vial`

Use `.bin` file, not `.hex`

## Setup VS Code

`qmk generate-compilation-database -kb planck/rev6_drop -km vial`

Will generate `compile_commands.json` at root.

# Notes

## QMK CLI conversions

> .vil to qmk does not exists

> note for nixos: may require gcc / clang.

> Also,sure to setup qmk home

-   `qmk via2json -kb planck/rev6_drop -o /tmp/test.json planck-v4.json`

-   `qmk json2c -o /tmp/test.ccc /tmp/test.json`

# Settings

```
Custom Keys:
    DFWIN - default layer to windows (persistant)
    DFMAC - default layer to mac (persistant)
```

# Resources

## Convert QMK config json into keymap.c

[QMK Json Converter](https://jhelvy.shinyapps.io/qmkjsonconverter/)

## Setting up VSCode for QMK

[Link to docs](../../../../../docs/other_vscode.md)

---

# VIA QWERTY layout for Planck Rev6

A heavily simplified version of the Planck Layout that deals with VIA layer limit by stripping out Dvorak, Colemak, and Plover layouts as well as all internal audio, lighting, and mod switching keys.

Predefined Layers:

-   0 - Default Planck QWERTY keymap (minus lighting control, plus SHIFT ENTER)
-   1 - Default Planck LOWER keymap
-   2 - Default Planck RAISE keymap
-   3 - UTILITY keymap (RESET, DEBUG)

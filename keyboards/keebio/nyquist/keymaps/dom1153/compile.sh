#/bin/bash

echo "SCRIPT: Compiling QMK..."
KB_NAME_SLASH='keebio/nyquist/rev3'
# replace / with _
KB_NAME_UNDER=`echo $KB_NAME_SLASH | sed 's/\//_/g'`
OUT_FLDR_NAME=nyquist
EXT="hex"

qmk compile -kb $KB_NAME_SLASH  -km vial 
CP_CMD="cp $HOME/qmk_firmware/.build/${KB_NAME_UNDER}_dom1153.$EXT $HOME/documents/keyboards/${OUT_FLDR_NAME}"
echo "SCRIPT: $CP_CMD"
$CP_CMD

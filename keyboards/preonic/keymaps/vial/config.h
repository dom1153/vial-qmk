#pragma once

// this should fix startup sound
#define AUDIO_INIT_DELAY

// 4095U = 100%
// makes it quieter
#define AUDIO_DAC_SAMPLE_MAX 1024U

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PREONIC_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    // #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND) }
#endif

#define VIAL_KEYBOARD_UID {0x8C, 0x22, 0xF5, 0x59, 0x5B, 0xEB, 0xF6, 0xA3}
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 5 }
// qmk allows it. seems aight on the board
#define DYNAMIC_KEYMAP_LAYER_COUNT 15

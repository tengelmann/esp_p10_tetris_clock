#ifndef DEFINITIONS_H
    #define DEFINITIONS_H

    #include <inttypes.h>
    #include <Ticker.h>
    #include <PxMatrix.h> 

    // *********************************************************************
    // Holds all central definitions and globals
    // *********************************************************************

    extern Ticker display_ticker;          // Ticker that triggers redraw of the screen
    extern Ticker timer_ticker;            // Ticker that triggers one revolution in the falling animation

    // NTP
    #define timeZone 1            // Timezone for NTP client
    #define minutesTimeZone 0     // Minutes difference for time zone

    // Globals
    extern uint8_t init_state;         // Hold the current state of the initialization process
    extern String str_display_time ; // Holds the currently displayed time as string
    extern bool seconds_odd;       // True when the seconds are currently odd

    // WiFiManager
    #define AP_NAME "tetris_clock"
    #define AP_PASS "tetromino"
    #define AP_TIMEOUT 300

    // Pins for LED MATRIX
    #define P_LAT 16
    #define P_A 5
    #define P_B 4
    #define P_C 15
    #define P_OE 2

    // Global display
    extern PxMATRIX display;
#endif
#ifndef NUMBERS_H
    #define NUMBERS_H

    #include "colors.h"
    #include <inttypes.h>

    // *********************************************************************
    // Types and data that describes how numbers are drawed
    // *********************************************************************

    // Type that describes how a brick is falling down
    typedef struct
    {
        int blocktype;  // Number of the block type
        uint16_t color; // Color of the brick
        int x_pos;      // x-position (starting from the left number staring point) where the brick should be placed
        int y_stop;     // y-position (1-16, where 16 is the last line of the matrix) where the brick should stop falling
        int num_rot;    // Number of 90-degree (clockwise) rotations a brick is turned from the standard position
    } fall_instr_t;

    // Type that describes the current state of a drawed number
    typedef struct
    {
        int num_to_draw; // Number to draw (0-9)
        int blockindex;  // The index of the brick (as defined in the falling instructions) that is currently falling
        int fallindex;   // y-position of the brick it already has (incrementing with each step)
        int x_shift;     // x-position of the number relative to the matrix where the number should be placed.
    } numstate_t;

    // States of the 4 shown numbers
    #define SIZE_NUM_STATES 4
    extern numstate_t numstates[SIZE_NUM_STATES];

    // *********************************************************************
    // Fall instructions for all numbers
    // *********************************************************************
    #define SIZE_NUM_0 13
    extern fall_instr_t num_0[SIZE_NUM_0];

    #define SIZE_NUM_1 5
    extern fall_instr_t num_1[SIZE_NUM_1];

    #define SIZE_NUM_2 11
    extern fall_instr_t num_2[SIZE_NUM_2];

    #define SIZE_NUM_3 11
    extern fall_instr_t num_3[SIZE_NUM_3];

    #define SIZE_NUM_4 9
    extern fall_instr_t num_4[SIZE_NUM_4];

    #define SIZE_NUM_5 11
    extern fall_instr_t num_5[SIZE_NUM_5];

    #define SIZE_NUM_6 12
    extern fall_instr_t num_6[SIZE_NUM_6];

    #define SIZE_NUM_7 7
    extern fall_instr_t num_7[SIZE_NUM_7];

    #define SIZE_NUM_8 13
    extern fall_instr_t num_8[SIZE_NUM_8];

    #define SIZE_NUM_9 12
    extern fall_instr_t num_9[SIZE_NUM_9];

#endif
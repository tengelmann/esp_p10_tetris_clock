#ifndef DRAWING_H
  #define DRAWING_H

  #include <inttypes.h>
  #include <PxMatrix.h> 
  #include "numbers.h"
  #include "definitions.h"

  // *********************************************************************
  // Functions for drawing on the matrix
  // *********************************************************************

  // *********************************************************************
  // Helper function that draws a letter at a given position of the matric in a given color
  // *********************************************************************
  extern void drawChar(String letter, uint8_t x, uint8_t y, uint16_t color);

  // *********************************************************************
  // Draws the intro screen
  // *********************************************************************
  extern void drawIntro();

  // *********************************************************************
  // Draws a brick shape at a given position
  // *********************************************************************
  extern void drawShape(int blocktype, uint16_t color, int x_pos, int y_pos, int num_rot);

  // *********************************************************************
  // Helper function that that return the falling instruction for a given number
  // *********************************************************************
  extern fall_instr_t getFallinstrByNum(int num, int blockindex);

  // *********************************************************************
  // Helper function that return the number of bricks for a given number
  // *********************************************************************
  extern int getBocksizeByNum(int num);

  // *********************************************************************
  // Main function that handles the drawing of all numbers
  // *********************************************************************
  extern void drawNumbers();

  // *********************************************************************
  // Handler for the display refresh ticker
  // *********************************************************************
  extern void display_updater();

  // *********************************************************************
  // Handler for the number refresh ticker
  // *********************************************************************
  extern void number_updater();
#endif
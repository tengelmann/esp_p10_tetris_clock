#include "numbers.h"

numstate_t numstates[SIZE_NUM_STATES] = 
{
        {0, 0, 0, 1},
        {0, 0, 0, 8},
        {0, 0, 0, 18},
        {0, 0, 0, 25}
};
   
fall_instr_t num_0[SIZE_NUM_0] = 
{
        {2, myCYAN, 4, 16, 0},
        {4, myORANGE, 2, 16, 1},
        {3, myYELLOW, 0, 16, 1},
        {6, myMAGENTA, 1, 16, 1},
        {5, myGREEN, 4, 14, 0},
        {6, myMAGENTA, 0, 13, 3},
        {5, myGREEN, 4, 12, 0},
        {5, myGREEN, 0, 11, 0},
        {6, myMAGENTA, 4, 10, 1},
        {6, myMAGENTA, 0, 9, 1},
        {5, myGREEN, 1, 8, 1},
        {2, myCYAN, 3, 8, 3}
};
   
fall_instr_t num_1[SIZE_NUM_1] = 
{
        {2, myCYAN, 4, 16, 0},
        {3, myYELLOW, 4, 15, 1},
        {3, myYELLOW, 5, 13, 3},
        {2, myCYAN, 4, 11, 2},
        {0, myRED, 4, 8, 0}}
;

fall_instr_t num_2[SIZE_NUM_2] = 
{
        {0, myRED, 4, 16, 0},
        {3, myYELLOW, 0, 16, 1},
        {1, myBLUE, 1, 16, 3},
        {1, myBLUE, 1, 15, 0},
        {3, myYELLOW, 1, 12, 2},
        {1, myBLUE, 0, 12, 1},
        {2, myCYAN, 3, 12, 3},
        {0, myRED, 4, 10, 0},
        {3, myYELLOW, 1, 8, 0},
        {2, myCYAN, 3, 8, 3},
        {1, myBLUE, 0, 8, 1}
};

fall_instr_t num_3[SIZE_NUM_3] = 
{
        {1, myBLUE, 3, 16, 3},
        {2, myCYAN, 0, 16, 1},
        {3, myYELLOW, 1, 15, 2},
        {0, myRED, 4, 14, 0},
        {3, myYELLOW, 1, 12, 2},
        {1, myBLUE, 0, 12, 1},
        {3, myYELLOW, 5, 12, 3},
        {2, myCYAN, 3, 11, 0},
        {3, myYELLOW, 1, 8, 0},
        {1, myBLUE, 0, 8, 1},
        {2, myCYAN, 3, 8, 3}
};

fall_instr_t num_4[SIZE_NUM_4] =
{
        {0, myRED, 4, 16, 0},
        {0, myRED, 4, 14, 0},
        {3, myYELLOW, 1, 12, 0},
        {1, myBLUE, 0, 12, 1},
        {2, myCYAN, 0, 10, 0},
        {2, myCYAN, 3, 12, 3},
        {3, myYELLOW, 4, 10, 3},
        {2, myCYAN, 0, 9, 2},
        {3, myYELLOW, 5, 10, 1}
};

fall_instr_t num_5[SIZE_NUM_5] = 
{
        {0, myRED, 0, 16, 0},
        {2, myCYAN, 2, 16, 1},
        {2, myCYAN, 3, 15, 0},
        {3, myYELLOW, 5, 16, 1},
        {3, myYELLOW, 1, 12, 0},
        {1, myBLUE, 0, 12, 1},
        {2, myCYAN, 3, 12, 3},
        {0, myRED, 0, 10, 0},
        {3, myYELLOW, 1, 8, 2},
        {1, myBLUE, 0, 8, 1},
        {2, myCYAN, 3, 8, 3}
};

fall_instr_t num_6[SIZE_NUM_6] = 
{
        {2, myCYAN, 0, 16, 1},
        {5, myGREEN, 2, 16, 1},
        {6, myMAGENTA, 0, 15, 3},
        {6, myMAGENTA, 4, 16, 3},
        {5, myGREEN, 4, 14, 0},
        {3, myYELLOW, 1, 12, 2},
        {2, myCYAN, 0, 13, 2},
        {3, myYELLOW, 2, 11, 0},
        {0, myRED, 0, 10, 0},
        {3, myYELLOW, 1, 8, 0},
        {1, myBLUE, 0, 8, 1},
        {2, myCYAN, 3, 8, 3}
};

fall_instr_t num_7[SIZE_NUM_7] = 
{
        {0, myRED, 4, 16, 0},
        {1, myBLUE, 4, 14, 0},
        {3, myYELLOW, 5, 13, 1},
        {2, myCYAN, 4, 11, 2},
        {3, myYELLOW, 1, 8, 2},
        {2, myCYAN, 3, 8, 3},
        {1, myBLUE, 0, 8, 1}
};

fall_instr_t num_8[SIZE_NUM_8] = 
{
        {3, myYELLOW, 1, 16, 0},
        {6, myMAGENTA, 0, 16, 1},
        {3, myYELLOW, 5, 16, 1},
        {1, myBLUE, 2, 15, 3},
        {4, myORANGE, 0, 14, 0},
        {1, myBLUE, 1, 12, 3},
        {6, myMAGENTA, 4, 13, 1},
        {2, myCYAN, 0, 11, 1},
        {4, myORANGE, 0, 10, 0},
        {4, myORANGE, 4, 11, 0},
        {5, myGREEN, 0, 8, 1},
        {5, myGREEN, 2, 8, 1},
        {1, myBLUE, 4, 9, 2}
};

fall_instr_t num_9[SIZE_NUM_9] = 
{
        {0, myRED, 0, 16, 0},
        {3, myYELLOW, 2, 16, 0},
        {1, myBLUE, 2, 15, 3},
        {1, myBLUE, 4, 15, 2},
        {3, myYELLOW, 1, 12, 2},
        {3, myYELLOW, 5, 12, 3},
        {5, myGREEN, 0, 12, 0},
        {1, myBLUE, 2, 11, 3},
        {5, myGREEN, 4, 9, 0},
        {6, myMAGENTA, 0, 10, 1},
        {5, myGREEN, 0, 8, 1},
        {6, myMAGENTA, 2, 8, 2}
};
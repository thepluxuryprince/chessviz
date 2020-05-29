#define CTEST_MAIN

#include "board.h"
#include <ctest.h>
char chessboard[7][7];
int main(int argc, const char** argv)
{
    fill_board(chessboard, 8, 8);
    return ctest_main(argc, argv);
}

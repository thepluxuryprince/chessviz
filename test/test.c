#define CTEST_MAIN

#include "board.h"
#include <ctest.h>
char chessboard[8][8];

CTEST(insert_coordinates, INCORRECT_MOVE) // a2 a12
{
    int result = move(0, 1, 0, 11, chessboard);
    ASSERT_EQUAL(result, -1);
}

CTEST(insert_coordinates, PAWN_CORRECT) // a2 a3
{
    int result = move(0, 1, 0, 2, chessboard);
    ASSERT_EQUAL(result, 1);
}

CTEST(insert_coordinates, PAWN_INCORRECT) // a2 a7
{
    int result = move(0, 1, 0, 6, chessboard);
    ASSERT_EQUAL(result, -1);
}

CTEST(insert_coordinates, ROOK_INCORRECT) // h1 h2
{
    int result = move(7, 0, 7, 1, chessboard);
    ASSERT_EQUAL(result, -1);
}

CTEST(insert_coordinates, KNIGHT_CORRECT) // b1 c3
{
    int result = move(1, 0, 2, 2, chessboard);
    ASSERT_EQUAL(result, 1);
}

CTEST(insert_coordinates, KNIGHT_INCORRECT) // b1 b2
{
    int result = move(1, 0, 1, 1, chessboard);
    ASSERT_EQUAL(result, -1);
}

CTEST(insert_coordinates, BISHOP_INCORRECT) // c1 b2
{
    int result = move(2, 0, 1, 1, chessboard);
    ASSERT_EQUAL(result, -1);
}

CTEST(insert_coordinates, QUEEN_INCORRECT) // d1 c1
{
    int result = move(3, 0, 2, 0, chessboard);
    ASSERT_EQUAL(result, -1);
}

CTEST(insert_coordinates, KING_INCORRECT) // e1 e2
{
    int result = move(4, 0, 4, 1, chessboard);
    ASSERT_EQUAL(result, -1);
}

int main(int argc, const char** argv)
{
    fill_board(chessboard);
    return ctest_main(argc, argv);
}

#include "board.h"
int fill_board(char* chessboard, const int h, const int v)
{
    /*Заполнение доски пробелами*/
    for (int j = 0; j < v; j++) {
        for (int i = 0; i < h; i++) {
            chessboard[i][j] = 32;
        }
    }
    return 0;
}

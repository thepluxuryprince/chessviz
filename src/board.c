#include "board.h"
int fill_board(char (*chessboard)[8], const int hor, const int vert)
{
    /*Заполнение доски пробелами*/
    for (int j = 0; j < vert; j++) {
        for (int i = 0; i < hor; i++) {
            chessboard[i][j] = 32;
        }
    }
    return 0;
}

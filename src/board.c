#include "board.h"
int fill_board(char (*chessboard)[8], const int hor, const int vert)
{
    /*Заполнение доски пробелами*/
    for (int j = 0; j < vert; j++) {
        for (int i = 0; i < hor; i++) {
            chessboard[i][j] = 32;
        }
    }
    chessboard[0][0] = 'R';
    chessboard[1][0] = 'N';
    chessboard[2][0] = 'B';
    chessboard[3][0] = 'Q';
    chessboard[4][0] = 'K';
    chessboard[5][0] = 'B';
    chessboard[6][0] = 'N';
    chessboard[7][0] = 'R';

    chessboard[0][7] = 'r';
    chessboard[1][7] = 'n';
    chessboard[2][7] = 'b';
    chessboard[4][7] = 'q';
    chessboard[3][7] = 'k';
    chessboard[5][7] = 'b';
    chessboard[6][7] = 'n';
    chessboard[7][7] = 'r';

    chessboard[0][1] = 'P';
    chessboard[1][1] = 'P';
    chessboard[2][1] = 'P';
    chessboard[3][1] = 'P';
    chessboard[4][1] = 'P';
    chessboard[5][1] = 'P';
    chessboard[6][1] = 'P';
    chessboard[7][1] = 'P';

    chessboard[0][6] = 'p';
    chessboard[1][6] = 'p';
    chessboard[2][6] = 'p';
    chessboard[3][6] = 'p';
    chessboard[4][6] = 'p';
    chessboard[5][6] = 'p';
    chessboard[6][6] = 'p';
    chessboard[7][6] = 'p';
    return 0;
}

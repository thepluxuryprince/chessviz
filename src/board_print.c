#include "board_print.h"
#include "board.h"
#include <stdio.h>
void print_board(char (*chessboard)[8], const int hor, const int vert)
{
    printf(" | a  b  c  d  e  f  g  h |\n____________________________");
    for (int j = vert - 1; j >= 0; j--) {
        printf("\n%d|", j + 1);
        for (int i = 0; i < hor; i++) {
            printf(" %c ", chessboard[i][j]);
            if (i == 7) {
                printf("|%d", j + 1);
            }
        }
    }
    printf("\n____________________________\n | a  b  c  d  e  f  g  h |");
    printf("\n ход:");
}

#include "board_print.h"
#include "board.h"
#include <stdio.h>
void print_board()
{
    printf(" | a  b  c  d  e  f  g  h |\n____________________________");
    for (int j = v - 1; j >= 0; j--) {
        printf("\n%d|", j + 1);
        for (int i = 0; i < h; i++) {
            printf(" %c ", chessboard[i][j]);
            if (i == 7) {
                printf("|%d", j + 1);
            }
        }
    }
    printf("\n____________________________\n | a  b  c  d  e  f  g  h |");
}

#ifndef BOARD_PRINT_H
#define BOARD_PRINT_H
#include <stdlib.h>
void print_board(char (*chessboard)[8], const int hor, const int vert);
void file_print_board(
        char word, int num, char word1, int num1, char (*chessboard)[8]);
#endif

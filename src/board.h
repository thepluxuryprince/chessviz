#ifndef BOARD_H
#define BOARD_H
#include <math.h>
#include <stdio.h>
void fill_board(char (*chessboard)[8]);
int move(int w, int n, int w1, int n1, char (*chessboard)[8]);
#endif

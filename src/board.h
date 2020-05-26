#ifndef BOARD_H
#define BOARD_H
#include <stdio.h>

const int h = 8; //горизонталь
const int v = 8; //вертикаль
/*Прототипы фигур*/
typedef struct {
    int horizontal;
    int vertical;
    char name;
} Pawn;
typedef struct {
    int horizontal;
    int vertical;
    char name;
} Rook;
typedef struct {
    int horizontal;
    int vertical;
    char name;
} Bishop;
typedef struct {
    int horizontal;
    int vertical;
    char name;
} Knight;
typedef struct {
    int horizontal;
    int vertical;
    char name;
} Queen;
typedef struct {
    int horizontal;
    int vertical;
    char name;
} King;
/*Прототипы фигур*/
int fill_board(char chessboard[h][v]);
#endif

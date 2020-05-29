#include "board.h"
#include "board_print.h"
void fill_board(char (*chessboard)[8])
{
    for (int j = 0; j < 8; j++) {
        for (int i = 0; i < 8; i++) {
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
}
int move(int w, int n, int w1, int n1, char (*chessboard)[8])
{
    if (chessboard[w][n] == 'P') // white pawns
    {
        if (chessboard[w1][n1] == ' ' && w == w1 && abs(n1 - n) <= 2) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        if (chessboard[w1][n1] != ' ' && chessboard[w1][n1] >= 97
            && chessboard[w1][n1] <= 122
            && ((n - 1 == n1 && w - 1 == w1) || (n - 1 == n1 && w + 1 == w1))) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        return -1;
    }
    if (chessboard[w][n] == 'p') // black pawns
    {
        if (chessboard[w1][n1] == ' ' && w == w1 && abs(n1 - n) <= 2) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        if (chessboard[w1][n1] != ' ' && chessboard[w1][n1] >= 65
            && chessboard[w1][n1] <= 90
            && ((n - 1 == n1 && (w - 1 == w1 || w + 1 == w1)))) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        return -1;
    }
    if (chessboard[w][n] == 'R') // white rooks
    {
        if (chessboard[w1][n1] == ' ' && (w == w1 || n == n1)) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        if (chessboard[w1][n1] != ' ' && chessboard[w1][n1] >= 97
            && chessboard[w1][n1] <= 122 && (w == w1 || n == n1)) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        return -1;
    }
    if (chessboard[w][n] == 'r') // black rooks
    {
        if (chessboard[w1][n1] == ' ' && (w == w1 || n == n1)) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        if (chessboard[w1][n1] != ' ' && chessboard[w1][n1] >= 65
            && chessboard[w1][n1] <= 90 && (w == w1 || n == n1)) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        return -1;
    }
    if (chessboard[w][n] == 'N') // while knight (horse)
    {
        if (chessboard[w1][n1] == ' '
            && (pow(w1 - w, 2) + pow(n1 - n, 2)) == 5) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        if (chessboard[w1][n1] != ' ' && chessboard[w1][n1] >= 97
            && chessboard[w1][n1] <= 122
            && (pow(w1 - w, 2) + pow(n1 - n, 2)) == 5) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        return -1;
    }
    if (chessboard[w][n] == 'n') // black knight (horse)
    {
        if (chessboard[w1][n1] == ' '
            && (pow(w1 - w, 2) + pow(n1 - n, 2)) == 5) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        if (chessboard[w1][n1] != ' ' && chessboard[w1][n1] >= 65
            && chessboard[w1][n1] <= 90
            && (pow(w1 - w, 2) + pow(n1 - n, 2)) == 5) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        return -1;
    }
    if (chessboard[w][n] == 'B') // bishop white (elephant)
    {
        if (chessboard[w1][n1] == ' ' && abs(n1 - n) == abs(w1 - w)) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        if (chessboard[w1][n1] != ' ' && chessboard[w1][n1] >= 97
            && chessboard[w1][n1] <= 122 && abs(n1 - n) == abs(w1 - w)) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        return -1;
    }
    if (chessboard[w][n] == 'b') // bishop black (elephant)
    {
        if (chessboard[w1][n1] == ' ' && abs(n1 - n) == abs(w1 - w)) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        if (chessboard[w1][n1] != ' ' && chessboard[w1][n1] >= 65
            && chessboard[w1][n1] <= 90 && abs(n1 - n) == abs(w1 - w)) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        return -1;
    }
    if (chessboard[w][n] == 'Q') // white queen (ferz')
    {
        if (chessboard[w1][n1] == ' '
            && (w == w1 || n == n1 || (abs(n1 - n) == abs(w1 - w)))) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        if (chessboard[w1][n1] != ' '
            && (w == w1 || n == n1 || (abs(n1 - n) == abs(w1 - w)))
            && chessboard[w1][n1] >= 97 && chessboard[w1][n1] <= 122) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        return -1;
    }
    if (chessboard[w][n] == 'q') // black queen (ferz')
    {
        if (chessboard[w1][n1] == ' '
            && (w == w1 || n == n1 || (abs(n1 - n) == abs(w1 - w)))) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        if (chessboard[w1][n1] != ' '
            && (w == w1 || n == n1 || (abs(n1 - n) == abs(w1 - w)))
            && chessboard[w1][n1] >= 65 && chessboard[w1][n1] <= 97) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        return -1;
    }
    if (chessboard[w][n] == 'K') // White king
    {
        if (chessboard[w1][n1] == ' '
            && (abs(n1 - n) == 1 || abs(w1 - w) == 1)) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        if (chessboard[w1][n1] != ' ' && (abs(n1 - n) == 1 || abs(w1 - w) == 1)
            && chessboard[w1][n1] >= 97 && chessboard[w1][n1] <= 122) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        return -1;
    }
    if (chessboard[w][n] == 'k') // black king
    {
        if (chessboard[w1][n1] == ' '
            && (abs(n1 - n) == 1 || abs(w1 - w) == 1)) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        if (chessboard[w1][n1] != ' ' && (abs(n1 - n) == 1 || abs(w1 - w) == 1)
            && chessboard[w1][n1] >= 65 && chessboard[w1][n1] <= 90) {
            chessboard[w1][n1] = chessboard[w][n];
            chessboard[w][n] = ' ';
            return 1;
        }
        return -1;
    }
    return -1;
}

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
void file_print_board(
        char word, int num, char word1, int num1, char (*chessboard)[8])
{
    FILE* file;
    file = fopen("game_history.txt", "a");
    if (file == NULL) {
        printf("Ошибка");
        exit(1);
    }
    fprintf(file, " | a  b  c  d  e  f  g  h |\n____________________________");
    for (int j = 8 - 1; j >= 0; j--) {
        fprintf(file, "\n%d|", j + 1);
        for (int i = 0; i < 8; i++) {
            fprintf(file, " %c ", chessboard[i][j]);
            if (i == 7) {
                fprintf(file, "|%d", j + 1);
            }
        }
    }
    fprintf(file,
            "\n____________________________\n | a  b  c  d  e  f  g  h |");
    fprintf(file, "\n ход:");
    fprintf(file, "\n");
    fprintf(file, " %c%d %c%d ", word, num, word1, num1);
    fprintf(file, "\n");
    fclose(file);
}

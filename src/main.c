#include "board.h"
#include "board_print.h"
int main()
{
    char chessboard[8][8];
    struct input {
        char word[2];
        int num[2];
    };
    int flag, check = 0;
    int n, n1, w, w1; //числа для движения

    fill_board(chessboard); //заполняем пробелами доску
    print_board(chessboard);
    file_print_board(chessboard);
    while (1) {
        for (flag = 0; flag != 4;) {
            scanf("%c%d%c%d", &word, &num, &word1, &num1);
            fprint_move(word, num, word1, num1);
            if (word == 'a') {
                w = 0;
                flag++;
            }
            if (word == 'b') {
                w = 1;
                flag++;
            }
            if (word == 'c') {
                w = 2;
                flag++;
            }
            if (word == 'd') {
                w = 3;
                flag++;
            }
            if (word == 'e') {
                w = 4;
                flag++;
            }
            if (word == 'f') {
                w = 5;
                flag++;
            }
            if (word == 'g') {
                w = 6;
                flag++;
            }
            if (word == 'h') {
                w = 7;
                flag++;
            }
            if (num == 1) {
                n = 0;
                flag++;
            }
            if (num == 2) {
                n = 1;
                flag++;
            }
            if (num == 3) {
                n = 2;
                flag++;
            }
            if (num == 4) {
                n = 3;
                flag++;
            }
            if (num == 5) {
                n = 4;
                flag++;
            }
            if (num == 6) {
                n = 5;
                flag++;
            }
            if (num == 7) {
                n = 6;
                flag++;
            }
            if (num == 8) {
                n = 7;
                flag++;
            }
            if (word1 == 'a') {
                w1 = 0;
                flag++;
            }
            if (word1 == 'b') {
                w1 = 1;
                flag++;
            }
            if (word1 == 'c') {
                w1 = 2;
                flag++;
            }
            if (word1 == 'd') {
                w1 = 3;
                flag++;
            }
            if (word1 == 'e') {
                w1 = 4;
                flag++;
            }
            if (word1 == 'f') {
                w1 = 5;
                flag++;
            }
            if (word1 == 'g') {
                w1 = 6;
                flag++;
            }
            if (word1 == 'h') {
                w1 = 7;
                flag++;
            }
            if (num1 == 1) {
                n1 = 0;
                flag++;
            }
            if (num1 == 2) {
                n1 = 1;
                flag++;
            }
            if (num1 == 3) {
                n1 = 2;
                flag++;
            }
            if (num1 == 4) {
                n1 = 3;
                flag++;
            }
            if (num1 == 5) {
                n1 = 4;
                flag++;
            }
            if (num1 == 6) {
                n1 = 5;
                flag++;
            }
            if (num1 == 7) {
                n1 = 6;
                flag++;
            }
            if (num1 == 8) {
                n1 = 7;
                flag++;
            }
            if (flag != 4) {
                printf("Wrong input\n");
                flag = 0;
            }
            flag = 0;
            check = move(w, n, w1, n1, chessboard);
            if (check != 1) {
                printf("Wrong move\n");
            }
            print_board(chessboard);
            file_print_board(chessboard);
        }
    }
    return 0;
}

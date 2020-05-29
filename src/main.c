#include "board.h"
#include "board_print.h"
int main()
{
    char chessboard[8][8];
    const int h = 8;  //горизонталь
    const int v = 8;  //вертикаль
    char word, word1; //буквы хода
    int num, num1;    //числа хода
    int flag;
    // int n, n1, w, w1; //числа для движения

    fill_board(chessboard, h, v); //заполняем пробелами доску
    int game = 1;
    while (game) {
        flag++;
        print_board(chessboard, h, v);
        scanf("%c %d %c %d", &word, &num, &word1, &num1);
        file_print_board(word, num, word1, num1, chessboard);
        if (word == 'a') {
            // w =1;
            flag++;
        }
        if (word == 'b') {
            // w =2;
            flag++;
        }
        if (word == 'c') {
            // w =3;
            flag++;
        }
        if (word == 'd') {
            // w =4;
            flag++;
        }
        if (word == 'e') {
            // w =5;
            flag++;
        }
        if (word == 'f') {
            // w =6;
            flag++;
        }
        if (word == 'g') {
            // w =7;
            flag++;
        }
        if (word == 'h') {
            // w =8;
            flag++;
        }
        if (num == 1) {
            // n =8;
            flag++;
        }
        if (num == 2) {
            // n =7;
            flag++;
        }
        if (num == 3) {
            // n =6;
            flag++;
        }
        if (num == 4) {
            // n =5;
            flag++;
        }
        if (num == 5) {
            // n =4;
            flag++;
        }
        if (num == 6) {
            // n =3;
            flag++;
        }
        if (num == 7) {
            // n =2;
            flag++;
        }
        if (num == 8) {
            // n =1;
            flag++;
        }
        if (word1 == 'a') {
            // w1 =1;
            flag++;
        }
        if (word1 == 'b') {
            // w1 =2;
            flag++;
        }
        if (word1 == 'c') {
            // w1 =3;
            flag++;
        }
        if (word1 == 'd') {
            // w1 =4;
            flag++;
        }
        if (word1 == 'e') {
            // w1 =5;
            flag++;
        }
        if (word1 == 'f') {
            // w1 =6;
            flag++;
        }
        if (word1 == 'g') {
            // w1 =7;
            flag++;
        }
        if (word1 == 'h') {
            // w1 =8;
            flag++;
        }
        if (num1 == 1) {
            // n1 =8;
            flag++;
        }
        if (num1 == 2) {
            // n1 =7;
            flag++;
        }
        if (num1 == 3) {
            // n1 =6;
            flag++;
        }
        if (num1 == 4) {
            // n1 =5;
            flag++;
        }
        if (num1 == 5) {
            // n1 =4;
            flag++;
        }
        if (num1 == 6) {
            // n1 =3;
            flag++;
        }
        if (num1 == 7) {
            // n1 =2;
            flag++;
        }
        if (num1 == 8) {
            // n1 =1;
            flag++;
        }
        if (flag != 4) {
            printf("Wrong input\n");
        }
    }
    return 0;
}

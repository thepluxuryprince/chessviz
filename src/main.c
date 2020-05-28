#include "board.h"
#include "board_print.h"
int main()
{
    char chessboard[8][8];
    const int h = 8;  //горизонталь
    const int v = 8;  //вертикаль
    char word, word1; //буквы хода
    int num, num1;    //числа хода
    int n, n1, w, w1; //числа для движения

    fill_board(chessboard, h, v); //заполняем пробелами доску

    King whiteKing = {4, 0, 'K'}; //инициализация фигур
    chessboard[whiteKing.horizontal][whiteKing.vertical] = whiteKing.name;
    King blackKing = {3, 7, 'k'};
    chessboard[blackKing.horizontal][blackKing.vertical] = blackKing.name;
    Queen whiteQueen = {3, 0, 'Q'};
    chessboard[whiteQueen.horizontal][whiteQueen.vertical] = whiteQueen.name;
    Queen blackQueen = {4, 7, 'q'};
    chessboard[blackQueen.horizontal][blackQueen.vertical] = blackQueen.name;
    Knight whiteKnight1 = {1, 0, 'N'};
    chessboard[whiteKnight1.horizontal][whiteKnight1.vertical]
            = whiteKnight1.name;
    Knight whiteKnight2 = {6, 0, 'N'};
    chessboard[whiteKnight2.horizontal][whiteKnight2.vertical]
            = whiteKnight2.name;
    Knight blackKnight1 = {1, 7, 'n'};
    chessboard[blackKnight1.horizontal][blackKnight1.vertical]
            = blackKnight1.name;
    Knight blackKnight2 = {6, 7, 'n'};
    chessboard[blackKnight2.horizontal][blackKnight2.vertical]
            = blackKnight2.name;
    Rook whiteRook1 = {0, 0, 'R'};
    chessboard[whiteRook1.horizontal][whiteRook1.vertical] = whiteRook1.name;
    Rook whiteRook2 = {7, 0, 'R'};
    chessboard[whiteRook2.horizontal][whiteRook2.vertical] = whiteRook2.name;
    Rook blackRook1 = {0, 7, 'r'};
    chessboard[blackRook1.horizontal][blackRook1.vertical] = blackRook1.name;
    Rook blackRook2 = {7, 7, 'r'};
    chessboard[blackRook2.horizontal][blackRook2.vertical] = blackRook2.name;
    Bishop whiteBishop1 = {2, 0, 'B'};
    chessboard[whiteBishop1.horizontal][whiteBishop1.vertical]
            = whiteBishop1.name;
    Bishop whiteBishop2 = {5, 0, 'B'};
    chessboard[whiteBishop2.horizontal][whiteBishop2.vertical]
            = whiteBishop2.name;
    Bishop blackBishop1 = {2, 7, 'b'};
    chessboard[blackBishop1.horizontal][blackBishop1.vertical]
            = blackBishop1.name;
    Bishop blackBishop2 = {5, 7, 'b'};
    chessboard[blackBishop2.horizontal][blackBishop2.vertical]
            = blackBishop2.name;
    Pawn whitePawn1 = {0, 1, 'P'};
    chessboard[whitePawn1.horizontal][whitePawn1.vertical] = whitePawn1.name;
    Pawn whitePawn2 = {1, 1, 'P'};
    chessboard[whitePawn2.horizontal][whitePawn2.vertical] = whitePawn2.name;
    Pawn whitePawn3 = {2, 1, 'P'};
    chessboard[whitePawn3.horizontal][whitePawn3.vertical] = whitePawn3.name;
    Pawn whitePawn4 = {3, 1, 'P'};
    chessboard[whitePawn4.horizontal][whitePawn4.vertical] = whitePawn4.name;
    Pawn whitePawn5 = {4, 1, 'P'};
    chessboard[whitePawn5.horizontal][whitePawn4.vertical] = whitePawn5.name;
    Pawn whitePawn6 = {5, 1, 'P'};
    chessboard[whitePawn6.horizontal][whitePawn5.vertical] = whitePawn6.name;
    Pawn whitePawn7 = {6, 1, 'P'};
    chessboard[whitePawn7.horizontal][whitePawn6.vertical] = whitePawn7.name;
    Pawn whitePawn8 = {7, 1, 'P'};
    chessboard[whitePawn8.horizontal][whitePawn7.vertical] = whitePawn8.name;
    Pawn blackPawn1 = {0, 6, 'p'};
    chessboard[blackPawn1.horizontal][blackPawn1.vertical] = blackPawn1.name;
    Pawn blackPawn2 = {1, 6, 'p'};
    chessboard[blackPawn2.horizontal][blackPawn2.vertical] = blackPawn2.name;
    Pawn blackPawn3 = {2, 6, 'p'};
    chessboard[blackPawn3.horizontal][blackPawn3.vertical] = blackPawn3.name;
    Pawn blackPawn4 = {3, 6, 'p'};
    chessboard[blackPawn4.horizontal][blackPawn4.vertical] = blackPawn4.name;
    Pawn blackPawn5 = {4, 6, 'p'};
    chessboard[blackPawn5.horizontal][blackPawn5.vertical] = blackPawn5.name;
    Pawn blackPawn6 = {5, 6, 'p'};
    chessboard[blackPawn6.horizontal][blackPawn6.vertical] = blackPawn6.name;
    Pawn blackPawn7 = {6, 6, 'p'};
    chessboard[blackPawn7.horizontal][blackPawn7.vertical] = blackPawn7.name;
    Pawn blackPawn8 = {7, 6, 'p'};
    chessboard[blackPawn8.horizontal][blackPawn8.vertical] = blackPawn8.name;
    /*Инициализация фигур*/
    int game = 1;
    while (game) {
        print_board(chessboard, h, v);
        scanf("%c %d %c %d", &word, &num, &word1, &num1);
        file_print_board(word, num, word1, num1, chessboard);
        if (word == 'a') {
            w = 1;
            flag++;
        }
        if (word == 'b') {
            w = 2;
            flag++;
        }
        if (word == 'c') {
            w = 3;
            flag++;
        }
        if (word == 'd') {
            w = 4;
            flag++;
        }
        if (word == 'e') {
            w = 5;
            flag++;
        }
        if (word == 'f') {
            w = 6;
            flag++;
        }
        if (word == 'g') {
            w = 7;
            flag++;
        }
        if (word == 'h') {
            w = 8;
            flag++;
        }

        if (num == 1) {
            n = 8;
            flag++;
        }
        if (num == 2) {
            n = 7;
            flag++;
        }
        if (num == 3) {
            n = 6;
            flag++;
        }
        if (num == 4) {
            n = 5;
            flag++;
        }
        if (num == 5) {
            n = 4;
            flag++;
        }
        if (num == 6) {
            n = 3;
            flag++;
        }
        if (num == 7) {
            n = 2;
            flag++;
        }
        if (num == 8) {
            n = 1;
            flag++;
        }

        if (word1 == 'a') {
            w1 = 1;
            flag++;
        }
        if (word1 == 'b') {
            w1 = 2;
            flag++;
        }
        if (word1 == 'c') {
            w1 = 3;
            flag++;
        }
        if (word1 == 'd') {
            w1 = 4;
            flag++;
        }
        if (word1 == 'e') {
            w1 = 5;
            flag++;
        }
        if (word1 == 'f') {
            w1 = 6;
            flag++;
        }
        if (word1 == 'g') {
            w1 = 7;
            flag++;
        }
        if (word1 == 'h') {
            w1 = 8;
            flag++;
        }

        if (num1 == 1) {
            n1 = 8;
            flag++;
        }
        if (num1 == 2) {
            n1 = 7;
            flag++;
        }
        if (num1 == 3) {
            n1 = 6;
            flag++;
        }
        if (num1 == 4) {
            n1 = 5;
            flag++;
        }
        if (num1 == 5) {
            n1 = 4;
            flag++;
        }
        if (num1 == 6) {
            n1 = 3;
            flag++;
        }
        if (num1 == 7) {
            n1 = 2;
            flag++;
        }
        if (num1 == 8) {
            n1 = 1;
            flag++;
        }

        if (flag != 4) {
            printf("Wrong input\n");
        }
    }
    return 0;
}

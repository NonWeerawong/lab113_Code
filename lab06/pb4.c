#include <stdio.h>
#include <stdlib.h>
#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    int x, y, n, board[BOARD_SIZE][BOARD_SIZE];
    char piece, input[10], c;
    scanf("%d\n", &n);
    for(int r=0; r<BOARD_SIZE; r++)
        for(int c=0; c<BOARD_SIZE; c++)
            board[r][c] = 32; // space in ascii
    
    for(int i=0; i<n; i++){
        fgets(input, 10, stdin);
        y = input[2] - '0';
        x = input[5] - '0';
        setPieceOnTable(board, input[0], x, y);
    }
    printf("------------------\n  0 1 2 3 4 5 6 7\n");
    for(int r=0; r<BOARD_SIZE; r++){
        printf("%d|", r);
        for(int c=0; c<BOARD_SIZE; c++)
            printf("%c|", board[r][c]);
        printf("\n");
    }

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos ){
    board[xPos][yPos] = piece;
}

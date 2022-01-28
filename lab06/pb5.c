#include <stdio.h>
#define BOARD_SIZE 8
void bishopMoves(int board[][BOARD_SIZE], int x, int y){
    board[y][x] = 'B';
    for(int r=1; r<=7-y; r++){
        if(x+r<BOARD_SIZE)
            board[y+r][x+r] = 'X';
        if(x-r>=0)
            board[y+r][x-r] = 'X';
    }
    for(int r=1; r<=y; r++){
        if(x+r<BOARD_SIZE)
            board[y-r][x+r] = 'X';
        if(x-r>=0)
            board[y-r][x-r] = 'X';
    }
}

int main(){
    int x, y, board[BOARD_SIZE][BOARD_SIZE];
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x ,&y);
    for(int r=0; r<BOARD_SIZE; r++)
        for(int c=0; c<BOARD_SIZE; c++)
            board[r][c] = 32; // space in ascii
    
    bishopMoves(board, x, y);
    printf("  0 1 2 3 4 5 6 7\n------------------\n");
    for(int r=0; r<BOARD_SIZE; r++){
        printf("%d|", r);
        for(int c=0; c<BOARD_SIZE; c++)
            printf("%c|",board[r][c]);
        printf("\n------------------\n");
    }
    return 0;
}
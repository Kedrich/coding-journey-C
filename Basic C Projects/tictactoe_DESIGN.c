#include <stdio.h>

void displayBoard(char board[3][3]) {
    printf("\n   0   1   2\n");
    for(int i = 0; i < 3; i++) {
        printf("%d ", i);
        for(int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if(j < 2) printf("|");
        }
        printf("\n");
        if(i < 2) printf("  ---|---|---\n");
    }
    printf("\n");
}

int main() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    // Make some moves
    board[0][0] = 'X';
    board[1][1] = 'O';
    board[2][2] = 'X';

    displayBoard(board);
    return 0;
}

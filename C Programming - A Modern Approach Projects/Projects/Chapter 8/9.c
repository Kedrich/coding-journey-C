#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10 
#define EMPTY '.'

int main(void) {
    char grid[N][N];
    int row, col, i, j, direction;
    char letter;
    bool can_move_up, can_move_down, can_move_left, can_move_right;

    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            grid[row][col] = EMPTY;
        }
    }

    srand((unsigned) time(NULL));

    row = 0;
    col = 0;
    grid[row][col] = 'A';

    for (letter = 'B'; letter <= 'Z'; letter++) {

        can_move_up    = (row - 1 >= 0) && (grid[row - 1][col] == EMPTY);
        can_move_down  = (row + 1 < N)  && (grid[row + 1][col] == EMPTY);
        can_move_left  = (col - 1 >= 0) && (grid[row][col - 1] == EMPTY);
        can_move_right = (col + 1 < N)  && (grid[row][col + 1] == EMPTY);

        if (!can_move_up && !can_move_down && !can_move_left && !can_move_right) {
            break;
        }

        while (true) {
            direction = rand() % 4; 

            if (direction == 0 && can_move_up) {
                row--;
                break; 
            } else if (direction == 1 && can_move_down) {
                row++;
                break; 
            } else if (direction == 2 && can_move_left) {
                col--;
                break; 
            } else if (direction == 3 && can_move_right) {
                col++;
                break; 
            }
        }

        grid[row][col] = letter;
    }

    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            printf("%c ", grid[row][col]);
        }
        printf("\n");
    }

    return 0;
}
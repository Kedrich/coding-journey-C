/* Project 8-7: Row and Column Sums */
#include <stdio.h>

#define N 5

int main(void) {
    int a[N][N];
    int row_total[N] = {0};
    int col_total[N] = {0};
    int i, j;

    for (i = 0; i < N; i++) {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            row_total[i] += a[i][j];
            col_total[j] += a[i][j];
        }
    }

    printf("\nRow totals:");
    for (i = 0; i < N; i++) {
        printf(" %d", row_total[i]);
    }
    printf("\n");

    printf("Column totals:");
    for (j = 0; j < N; j++) {
        printf(" %d", col_total[j]);
    }
    printf("\n");

    return 0;
}
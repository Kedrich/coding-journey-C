#include <stdio.h>

int main(void)
{
    int sum[5][5];
    int column;
    int row;
    int summ = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            
            printf("Please enter a number for row %d and column %d: ",i+1, j+1);
            scanf("%d", &sum[i][j]);
        }
    }

    printf("\nArrays:\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nRow Total: \n");
    for(row = 0; row < 5; row++)
    {
        for(column = 0; column < 5; column++)
        {
            summ += sum[row][column];
        }
        printf(" %d", summ);
        summ=0;
    }

    printf("\nColumn Total: \n");
    for(column = 0; column < 5; column++)
        {
            for(row = 0; row < 5; row++)
            {
                summ += sum[row][column];
            }
            printf(" %d", summ);
            summ=0;
        }
    

}
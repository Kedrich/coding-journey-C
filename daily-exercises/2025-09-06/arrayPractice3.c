#include <stdio.h>

int main()
{

    int block;
    int rows;
    int columns;

    printf("Please enter a number of blocks in the array: ");
    scanf("%d", &block);
    printf("Please enter a number of rows in the array: ");
    scanf("%d", &rows);
    printf("Please enter a number of columns in the array: ");
    scanf("%d", &columns);

    int array[block][rows][columns];

    for(int i = 0; i < block; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            for(int k = 0; k <columns; k++)
            {
                printf("Please enter the elemet in Block %d - Row %d - Column %d: ", i,j,k);
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    for(int i = 0; i < block; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            for(int k = 0; k <columns; k++)
            {
                printf("%d ", array[i][j][k]);
            }
        }
        printf("\n");
    }



}
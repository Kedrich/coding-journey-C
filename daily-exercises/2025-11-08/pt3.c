#include <stdio.h>

int main(void)
{

    int row, column;
    printf("Enter the size of rows of the array: "); 
    scanf("%d", &row);
    printf("Etner the size of column of the array: ", &column);
    scanf("%d", &column);

    int array[row][column], *p, count_row, count_column;
    for(p = &array[0][0], count_row = 1; p < &array[row][column]; p++, count_row++)
    {
        for(p = &array[0][0], count_column = 1; p < &array[row][column]; p++, count_column++)
        {
            scanf("%d", p);
        }
    }


    return 0;
}
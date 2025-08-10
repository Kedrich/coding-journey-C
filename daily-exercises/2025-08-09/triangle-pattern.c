#include <stdio.h>

int main(void)
{

    int number, rows, columns;

    printf("Please enter the number of rows: ");
    scanf("%d", &number);

    for (rows = 1; rows <= number; rows++)
    {
        for(columns = 1; columns <= 2*number-1; columns++)
        {
            if(columns >= number - (rows-1) && columns <= number+(rows-1))
            {   
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
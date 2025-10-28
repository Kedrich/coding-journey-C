#include <stdio.h>

int main(void)
{

    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    int count = 1;
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= i; j++)
        {      
            printf("%2d ", count++);
        }
        printf("\n");
    }

    return 0;
}
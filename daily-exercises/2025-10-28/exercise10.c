#include <stdio.h>

int main(void)
{

    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    for(int i = 1; i <= r; i++)
    {
        int count = 1;
        for(int j = 1; j <= i; j++)
        {   
            printf("%d", count++);
        }
        printf("\n");
    }

    return 0;
}
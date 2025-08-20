#include <stdio.h>

int main(void)
{

    int x, y;
    printf("Please enter a number for x: ");
    scanf("%d", &x);
    printf("Please enter a number for y: ");
    scanf("%d", &y);

    if (x > 2)
    {
        while(x > y)
        {
            printf("S1 ");
            x--;
        }
        printf("S2 ");
    }

    else
    {
        if (x < y)
        {
            printf("S3 ");
        }
    }
    printf("S4 ");

    return 0;
}
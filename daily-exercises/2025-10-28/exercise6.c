#include <stdio.h>

int main(void)
{

    int number;

    printf("Input the number (Table to be calculated) : ");
    scanf("%d", &number);

    for(int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", number, i, number*i);
    }

    return 0;
}
#include <stdio.h>

int main(void)
{

    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("The integer %d is negative", n);
    }
    else if (n == 0)
    {
        printf("The integer %d is a zero", n);
    }
    else
    {
        printf("The integer %d is positive", n);
    }

    return 0;
}
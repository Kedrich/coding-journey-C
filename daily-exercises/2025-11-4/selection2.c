#include <stdio.h>

int main(void)
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("The number %d is even", n);
    }
    else if (n == 0)
    {
        printf("The number %d is a zero", n);
    }
    else
    {
        printf("The number %d is odd", n);
    }

    return 0;
}
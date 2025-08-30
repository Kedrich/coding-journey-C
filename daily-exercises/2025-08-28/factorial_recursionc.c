#include <stdio.h>

int factorial (int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main(void)
{
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    printf("%d", factorial(number));
    return 0;
}
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
    unsigned long long int number;
    printf("Please enter a number: ");
    scanf("%lld", &number);
    printf("%lld", factorial(number));
    return 0;
}
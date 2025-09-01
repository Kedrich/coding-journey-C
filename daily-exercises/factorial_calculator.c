#include <stdio.h>

int factorial(int);

int main(void)
{
    
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    printf("%d", factorial(number));
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}
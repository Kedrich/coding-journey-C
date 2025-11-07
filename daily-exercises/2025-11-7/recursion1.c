#include <stdio.h>

int factorial (int n)
{

    if (n <= 1)
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
    printf("Enter a number: ");
    scanf("%d", &number);

    int fact = factorial(number);

    printf("The factorial of the number %d is %d.", number, fact);

    return 0;
}
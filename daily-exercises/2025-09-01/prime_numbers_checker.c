#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int isPrime(int);

int main(void)
{

    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);   

    if (isPrime(number))
    {
        printf("%d is Prime", number);
    }
    else
    {
        printf("%d is not Prime", number);
    }
}

int isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
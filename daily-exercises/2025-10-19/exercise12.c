#include <stdio.h>

int findFactorial(int *n, int *fact)
{   
    *fact = 1;
    for(int i = 1; i <= *n; i++)
    {
        *fact = *fact * i;
    }
    return *fact;
}

int main(void)
{

    int n, fact;
    printf("Input a number: ");
    scanf("%d", &n);

    fact = findFactorial(&n, &fact);

    printf("The Factorial of %d is: %d", n, fact);


    return 0;
}
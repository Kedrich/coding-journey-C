#include <stdio.h>

int factorial_calculator(int fact)
{
    if (fact <= 0)
    {
        return 1;
    }
    else
    {
        return fact * factorial_calculator(fact - 1);
    }
}

int main(void)
{

    int fact;
    printf("Enter a number: ");
    scanf("%d", &fact);

    int calculated_fact = factorial_calculator(fact);

    printf("The factorial of %d is %d", fact, calculated_fact);

    return 0;
}
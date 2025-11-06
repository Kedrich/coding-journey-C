#include <stdio.h>

int main(void)
{

    unsigned long int number, fact = 1, count = 1;
    
    printf("Enter a number: ");
    scanf("%lu", &number);
    
    while (number < 0)
    {
        printf("Please enter a positive number: ");
        scanf("%lu", &number);
    }

    while (count <= number)
    {
        
        fact *= count;
        count++;
    }

    printf("The factorial of the number %lu is %lu", number, fact);

    return 0;
}
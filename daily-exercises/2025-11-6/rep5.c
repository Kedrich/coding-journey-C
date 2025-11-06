#include <stdio.h>

int main(void)
{

    int number, fact = 1, count = 1;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number < 0)
    {
        printf("Please enter a positive number: ");
        scanf("%d", &number);
    }

    while (count <= number)
    {
        
        fact *= count;
        count++;
    }

    printf("The factorial of the number %d is %d", number, fact);

    return 0;
}
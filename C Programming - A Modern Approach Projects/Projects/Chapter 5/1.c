#include <stdio.h>

int main(void)
{

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(0 <= number && number <= 9)
    {
        printf("The number %d has 1 digit", number);
    }
    else if (10 <= number && number <= 99)
    {
        printf("The number %d has 2 digits", number);
    }
    else if (100 <= number && number <= 999)
    {
        printf("The number %d has 3 digits", number);
    }
    else if (1000 <= number && number <= 9999)
    {
        printf("The number %d has 4 digits", number);
    }
    else if (10000 <= number && number <= 99999)
    {
        printf("The number %d has 5 digits", number);
    }
    else if (100000 <= number && number <= 999999)
    {
        printf("The number %d has 6 digits", number);
    }
    else if (number >= 1000000)
    {
        printf("The number %d has more than 6 digits", number);
    }
    else
    {
        printf("Please enter positive number only.");
    }
    
    return 0;
}
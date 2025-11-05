#include <stdio.h>

int main(void)
{

    int number;

    printf("Enter a number: "); 
    scanf("%d", &number);

    if (number % 5 == 0)
        printf("%d is divisible by 5\n", number);
    else
        printf("%d is not divisible by 5.\n", number);

    printf("Thank you.");

    return 0;
}
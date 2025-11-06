#include <stdio.h>

int main(void)
{

    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        sum += number;
        printf("Enter a number: ");
        scanf("%d", &number);
    }

    printf("The sum is: %d", sum);

    return 0;
}
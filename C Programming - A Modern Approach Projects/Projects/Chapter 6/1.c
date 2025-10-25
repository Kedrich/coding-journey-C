#include <stdio.h>

int main(void)
{

    float number, largest = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while(number > 0)
    {
        printf("Enter a number: ");
        scanf("%f", &number);

        if(number > largest)
            largest = number;
    }

    printf("\nThe largest number entered was: %.2f", largest);

    return 0;
}
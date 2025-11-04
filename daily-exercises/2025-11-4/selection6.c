#include <stdio.h>

int main(void)
{

    int value, absolute_value = 0;
    printf("Enter a number: ");
    scanf("%d", &value);

    if (value < 0)
    {
        absolute_value = value * (-1);
        printf("The absolute value of %d is %d", value, absolute_value);
    }
    else
    {
        printf("The value is %d", value);
    }

    return 0;
}
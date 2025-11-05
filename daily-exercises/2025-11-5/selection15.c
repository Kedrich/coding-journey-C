#include <stdio.h>

int main(void)
{

    int temp;
    printf("Please enter the temperature: ");
    scanf("%d", &temp);

    if (temp < 0)
    {
        printf("Solid.");
    }
    else if (temp >= 0 && temp <= 99)
    {
        printf("Liquid.");
    }
    else if (temp >= 100)
    {
        printf("Gas.");
    }
    else
    {
        printf("Please enter a valid temp.");
    }

    return 0;
}
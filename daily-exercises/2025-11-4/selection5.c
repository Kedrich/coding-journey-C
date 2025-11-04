#include <stdio.h>

int main(void)
{

    float temp;
    printf("Please enter temperate: ");
    scanf("%f", &temp);

    if (temp < 0)
    {
        printf("Freezing.");
    }
    else
    {
        printf("Above freezing.");
    }

    return 0;
}
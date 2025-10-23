#include <stdio.h>

int main(void)
{

    int wind_force;

    printf("Enter a wind speed (in knots): ");
    scanf("%d", &wind_force);

    if(wind_force < 1)
    {
        printf("Calm");
    }
    else if(wind_force >= 1 && wind_force <= 3)
    {
        printf("Light air");
    }
    else if(wind_force >= 4 && wind_force <= 27)
    {
        printf("Breeze");
    }
    else if(wind_force >= 28 && wind_force <= 47)
    {
        printf("Gale");
    }
    else if(wind_force >= 48 && wind_force <= 63)
    {
        printf("Storm");
    }
    else if(wind_force > 63)
    {
        printf("Hurricane");
    }
    else
    {
        printf("Please enter a positive number");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{

    float weight;
    printf("Enter weight on Earth (in kg): ");
    scanf("%f", &weight);

    float weight_mars = weight * 0.38;
    float weight_moon = weight * 0.165;
    float weight_jupiter = weight * 2.34;

    printf("Weight on Mars: %.2f kg\n", weight_mars);
    printf("Weight on Moon: %.2f kg\n", weight_moon);
    printf("Weight on Jupiter %.2f kg\n", weight_jupiter);

    return 0;
}
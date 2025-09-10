#include <stdio.h>

float weightMarsCalculation(float weight)
{
    float weight_mars = weight * 0.38;
    return weight_mars;
}

float weightMoonCalculation(float weight)
{
    float weight_moon = weight * 0.165;
    return weight_moon;
}

float weightJupiterCalculation(float weight)
{
    float weight_jupiter = weight * 2.34;
    return weight_jupiter;
}

int main()
{

    float weight;
    printf("Enter weight on Earth: ");
    scanf("%f", &weight);

    float weight_mars = weightMarsCalculation(weight);
    float weight_moon = weightMoonCalculation(weight);
    float weight_jupiter = weightJupiterCalculation(weight);

    printf("\n");
    printf("Weight on Mars: %.2f kg\n", weight_mars);
    printf("Weight on Moon: %.2f kg\n", weight_moon);
    printf("Weight on Jupiter: %.2f kg\n", weight_jupiter);

    return 0;
}
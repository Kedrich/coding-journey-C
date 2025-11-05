#include <stdio.h>

int main(void)
{

    printf("***BMI Calculator with Health Categories***\n\n");

    char name[99];
    float weight, height, bmi;

    printf("Enter name: ");
    scanf(" %s", name);
    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    printf("Enter height (m): ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0)
    {
        printf("Please enter valid positive values for weight and height.\n");
        return 0;
    }

    bmi = weight / (height * height);

    printf("%s's BMI: %.2f\n\n", name, bmi);

    if (bmi < 18.5)
    {
        printf("Category: Underweight\n");
    }
    else if (bmi < 25)
    {
        printf("Category: Normal weight\n");
    }
    else if (bmi < 30)
    {
        printf("Category: Overweight\n");
    }
    else
    {
        printf("Category: Obese\n");
    }

    return 0;
}

#include <stdio.h>

int main(void)
{
    float weight, height;

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);
    printf("Enter height (in cm): ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0)
    {
        printf("Please enter valid positive values for weight and height.\n");
        return 0;
    }

    height = height * 0.01;

    float bmi = weight / (height * height);

    if (bmi < 18.5)
    {
        printf("Your BMI is %.2f and you are underweight.\n", bmi);
    }
    else if (bmi < 25)
    {
        printf("Your BMI is %.2f and you are normal.\n", bmi);
    }
    else if (bmi < 30)
    {
        printf("Your BMI is %.2f and you are overweight.\n", bmi);
    }
    else
    {
        printf("Your BMI is %.2f and you are obese.\n", bmi);
    }

    return 0;
}

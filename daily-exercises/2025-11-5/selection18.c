#include <stdio.h>

int main(void)
{

    float weight, height;

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);
    printf("Enter height (in cm): ");
    scanf("%f", &height);

    height = height * 0.01;
    float bmi = weight / (height * height);

    if (bmi < 18.5)
    {
        printf("Your BMI is %.2f and you are underweight.", bmi);
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Your BMI is %.2f and you are normal.", bmi);
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("Your BMI is %.2f and you are overweight.", bmi);
    }
    else if (bmi >= 30)
    {
        printf("Your BMI is %.2f and you are obese.", bmi);
    }

    return 0;
}
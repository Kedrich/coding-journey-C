#include <stdio.h>

int main(void)
{

    int grades1, grades2, grades3;
    float average;
    
    printf("Enter three grades (e.g 89 90 91): ");
    scanf("%d %d %d", &grades1, &grades2, &grades3);

    average = (float)(grades1 + grades2 + grades3) / 3.0;

    printf("Average: %.2f\n", average);

    if (average >= 90 && average <= 100)
    {
        printf("Grade: A");
    }
    else if (average >= 80 && average <= 89)
    {
        printf("Grade: B");
    }
    else if (average >= 70 && average <= 79)
    {
        printf("Grade: C");
    }
    else if (average >= 60 && average <= 69)
    {
        printf("Grade: D");
    }
    else if (average < 60)
    {
        printf("Grade: F");
    }
    else
    {
        printf("Error");
    }

    

    return 0;
}
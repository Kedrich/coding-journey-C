#include <stdio.h>

int main(void)
{

    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade < 0)
    {
        printf("Please enter a valid grade.");
        return 0;
    }

    if (grade >= 90 && grade <= 100)
    {
        printf("Your grade is %d and your rating is A", grade);
    }
    else if (grade >= 80 && grade <= 89)
    {
        printf("Your grade is %d and your rating is B", grade);
    }
    else if (grade >= 70 && grade <= 79)
    {
        printf("Your grade is %d and your rating is C", grade);
    }
    else if (grade >= 60 && grade <= 69)
    {
        printf("Your grade is %d and your rating is D", grade);
    }
    else if (grade < 60)
    {
        printf("Your rating is F", grade);
    }
    else
    {
        printf("Please enter a valid grade.");
    }

    return 0;
}
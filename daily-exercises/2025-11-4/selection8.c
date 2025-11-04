#include <stdio.h>

int main(void)
{

    int year;
    printf("Please enter a year: ");
    scanf("%d", &year);

    if (year < 0 || year == 0)
    {
        printf("Please enter a valid year.");
        return 0;
    }

    if (year % 4 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }

    return 0;
}
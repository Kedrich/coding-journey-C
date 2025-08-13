/*
 * Program: Count Odd Digits in a Number
 * Purpose: Takes an integer input and counts how many odd digits it contains
 * Odd digits are: 1, 3, 5, 7, 9
 */

#include <stdio.h>

int main(void)
{
    int number;
    int digit;
    int odd_count = 0;  

    printf("Please enter a number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        number = -number;
    }

    if (number == 0)  
    {
        odd_count = 0;  
    }
    else
    {
        while (number > 0)
        {
            digit = number % 10;

            if (digit % 2 == 1)
            {
                odd_count++;
            }
            number = number / 10;
        }
    }

    printf("Number of odd digits: %d\n", odd_count);

    return 0;
}
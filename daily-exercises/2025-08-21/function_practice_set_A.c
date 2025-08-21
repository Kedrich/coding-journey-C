/*  

Practice Set 1: 

Scenario:

1. Create a function called swap_and_sum that takes two integer pointers
2. The function should swap the values at those addresses and return their sum
3. In main, declare two variables (give them values 5 and 7)
4. Call the function and store the return value
6. Print the return value and one of the swapped variables

Hidden bugs to watch for: Function return type issues, printf format mismatches */


#include <stdio.h>

void swap_and_sum (int *, int *, int *);

int main(void)
{
    int num1 = 5;
    int num2 = 7;
    int sum;

    swap_and_sum(&num1, &num2, &sum);
    printf("The sum of  the %d and %d is %d", num1, num2, sum);
    return 0;
}

void swap_and_sum (int *num1, int *num2, int *sum)
{

    *num1 = 20;
    *num2 = 30;
    *sum = *num1 + *num2;

}


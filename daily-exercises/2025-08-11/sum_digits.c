#include <stdio.h>

int sum_digits(int n)
{

    if (n == 0)
    {
        return 0;
    }

    else
    {
        return n % 10 + sum_digits (n / 10);
    }
    

}

int main(void)
{

    int n;
    printf("Please enter any number: ");
    scanf("%d", &n);
    printf("The sum of the digits of that number is %d", sum_digits(n));


}
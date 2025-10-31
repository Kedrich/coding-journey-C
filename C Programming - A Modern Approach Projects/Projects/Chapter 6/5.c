#include <stdio.h>

int main(void)
{
    int n, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;          
    } while (n > 0);

    printf("The reversal is: %d\n", reversed);

    return 0;
}

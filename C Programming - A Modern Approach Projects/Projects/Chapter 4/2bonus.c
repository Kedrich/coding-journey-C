#include <stdio.h>

int main(void)
{

    int n;
    printf("Enter a four-digit number: ");
    scanf("%d", &n);

    int ones, tens, hundreds, thousands;

    int reversed = (n % 10) * 1000 
                +   ((n / 10) % 10) * 100
                +   ((n/100) % 10) * 10
                + (n/1000);

    printf("The reversal is: %d", reversed);

    return 0;
}
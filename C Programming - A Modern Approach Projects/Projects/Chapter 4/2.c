#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    int reversed = (n % 10) * 100 + ((n / 10 )% 10) * 10 + (n / 100);

    printf("The reversal is: %d\n", reversed);

    return 0;
}

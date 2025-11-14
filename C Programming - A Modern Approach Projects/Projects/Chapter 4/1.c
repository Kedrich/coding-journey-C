#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    int reversed = (n % 10) * 10 + (n / 10);

    printf("The reversal is: %02d\n", reversed);

    return 0;
}

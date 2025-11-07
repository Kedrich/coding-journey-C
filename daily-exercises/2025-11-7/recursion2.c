#include <stdio.h>

int exponent_calculation(int n, int p)
{
    if (p == 0)
    {
        return 1; // any number raised to 0 is 1
    }
    else
    {
        return n * exponent_calculation(n, p - 1); // multiply n by n^(p-1)
    }
}

int main(void)
{
    int num, power;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter the exponent: ");
    scanf("%d", &power);

    int exponent = exponent_calculation(num, power);

    printf("%d raised to the power of %d is %d\n", num, power, exponent);

    return 0;
}

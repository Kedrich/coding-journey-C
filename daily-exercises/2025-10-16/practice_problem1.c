#include <stdio.h>

float farenheitCalculator(int C)
{
    float const F = ((C * 9) / 5.0) + 32;
    return F;
}

int main(void)
{

    int const C = 37;
    float f = farenheitCalculator(C);
    printf("%.2f", f);

    return 0;
}
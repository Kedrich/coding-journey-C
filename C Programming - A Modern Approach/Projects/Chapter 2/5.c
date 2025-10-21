#include <stdio.h>

int main(void)
{

    int x;
    printf("Enter a value: ");
    scanf("%d", &x);

    long int formula_polynomial = (3*(x*x*x*x*x)) + (2*(x*x*x*x)) - (5*(x*x*x)) - (x*x) + (7*(x)) - 6;

    printf("The final value = %lld", formula_polynomial);

    return 0;
}
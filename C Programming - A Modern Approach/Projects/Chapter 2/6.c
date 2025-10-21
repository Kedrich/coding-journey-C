#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter a value: ");
    scanf("%d", &x);

    long int formula_polynomial = (((((3*x) + 2)*x - 5)*x - 1)*x + 7)*x - 6;

    printf("The final value = %ld\n", formula_polynomial);

    return 0;
}

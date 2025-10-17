#include <stdio.h>

int main(void)
{

    int n1, n2, *pn1, *pn2, sum;

    printf("Test Data:\n");
    printf("Input the first number: ");
    scanf("%d", &n1);
    printf("Input the second number: ");
    scanf("%d", &n2);

    pn1 = &n1;
    pn2 = &n2;
    
    sum = *pn1 + *pn2;

    printf("The sum of the entered number is %d", sum);

    return 0;
}
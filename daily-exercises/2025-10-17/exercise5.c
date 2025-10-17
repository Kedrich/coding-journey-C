#include <stdio.h>

int sum2(int *n1, int *n2)
{
    int sum = *n1 + *n2;
    return sum;
}

int main(void)
{

    int n1, n2, *sum;

    printf("Test Data:\n");
    printf("Input the first number: ");
    scanf("%d", &n1);
    printf("Input the second number: ");
    scanf("%d", &n2);

    *sum = sum2(&n1, &n2);

    printf("%d", *sum);

    return 0;
}
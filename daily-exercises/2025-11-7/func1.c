#include <stdio.h>

int addNum(int a, int b);

int main(void)
{

    int n1, n2;

    printf("Enter your 1st number: ");
    scanf("%d", &n1);
    printf("Enter your 2nd number: ");
    scanf("%d", &n2);

    int sum = addNum(n1, n2);

    printf("The sum is: %d", sum);

    return 0;
}

int addNum(int a, int b)
{
    return a+b;
}
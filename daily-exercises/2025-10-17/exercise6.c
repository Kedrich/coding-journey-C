#include <stdio.h>

int findMax(int *n1, int *n2, int *max)
{
    if(*n1 > *n2)
    {
        *max = *n1;
    }
    else
    {
        *max = *n2;
    }

    return *max;

}

int main(void)
{

    int n1, n2, max = 0;

    printf("Test Data : \n");
    printf("Input the first number: ");
    scanf("%d", &n1);
    printf("Input the second number: ");
    scanf("%d", &n2);

    max = findMax(&n1, &n2, &max);

    printf("%d is the maximum number", max);

    return 0;
}
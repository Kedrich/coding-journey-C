#include <stdio.h>

int main(void)
{

    int n1, n2;

    printf("Input the first number: ");
    scanf("%d", &n1);
    printf("Input the second number: ");
    scanf("%d", &n2);

    int *p1, *p2;
    p1 = &n1;
    p2 = &n2;

    if(*p1 > *p2)
    {
        printf("The number %d is larger.", *p1);
    }
    else if (*p1 < *p2)
    {
        printf("The number %d is larger.", *p2);
    }
    else
    {
        printf("Please enter a valid number.");
    }

    return 0;
}
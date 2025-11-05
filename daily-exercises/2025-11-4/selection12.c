#include <stdio.h>

int main(void)
{

    int a, b, c;
    printf("Enter the side of A: ");
    scanf("%d", &a);
    printf("Enter the side of B: ");
    scanf("%d", &b);
    printf("Enter the side of C: ");
    scanf("%d", &c);

    if (a < 0 || b < 0 || c < 0)
    {
        printf("Not Valid.");
    }

    if(a+b > c && b + c > a && a + c > b)
    {
        printf("Valid.");
    }
    else
    {
        printf("Not valid.");
    }

    return 0;
}
#include <stdio.h>

void badSwap(int *a, int *b)
{
    printf("%d %d", *b, *a);
}

int main(void)
{

    int a, b;
    a = 5;
    b = 3;
    printf("%d %d\n", a, b);
    badSwap(&a, &b);
    

    return 0;
}
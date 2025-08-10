#include <stdio.h>
#include <stdlib.h>

int fun(int, int);

int main(void)
{
    int sum = fun(3, 4);
    printf("%d", sum);

    return 0;
}
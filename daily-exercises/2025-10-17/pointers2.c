#include <stdio.h>

int main(void)
{

    int x;
    int *ptr = &x;
    *ptr = 1;
    printf("%d", *ptr);

    return 0;
}
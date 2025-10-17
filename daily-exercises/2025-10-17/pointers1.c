#include <stdio.h>

int main(void)
{

    int myAge = 43;
    int *ptr = &myAge;

    printf("%d", *ptr);

    return 0;
}
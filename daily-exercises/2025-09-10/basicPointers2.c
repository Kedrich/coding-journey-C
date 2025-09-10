#include <stdio.h>

int main(void)
{
    int x = 10;
    int *ptr = &x;

    printf("Original value of x: %d\n", x);
    
    *ptr = 50;
    
    printf("After changing through pointer: %d\n", x);
    
    return 0;
}
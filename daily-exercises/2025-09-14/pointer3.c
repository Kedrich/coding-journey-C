#include <stdio.h>

int main(void)
{

    int x = 5;
    int *ptr1 = &x;
    int *ptr2 = &x;
    int *ptr3 = ptr1;

    printf("X: %d\n", x);
    printf("Y: %d\n", *ptr1);
    printf("Z: %d\n", *ptr2);

    *ptr3 = 99;

    printf("A: %d\n", x);
    printf("B: %d\n", *ptr1);
    printf("C: %d\n", *ptr2);
    
    return 0;
}
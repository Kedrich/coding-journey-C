#include <stdio.h>

int main(void)
{
    int value = 100;
    int *ptr1 = &value;
    int *ptr2 = &value;

    printf("Initial Value: %d\n", value);
    printf("Value through ptr1: %d\n", *ptr1);
    printf("Value through ptr2: %d\n", *ptr2);

    *ptr1 = 200;

    printf("After changing through ptr1: %d\n", *ptr1);
    printf("%d", *ptr2);

}
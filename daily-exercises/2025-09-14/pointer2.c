#include <stdio.h>

int main(void)
{

    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;

    printf("A: %d\n", *ptr); // 10
    printf("B: %d\n", *(ptr + 1)); // 20
    printf("C: %d\n", *(ptr + 2)); // 30

    ptr++;

    printf("D: %d\n", *ptr); //20
    printf("E: %d\n", *(ptr + 1)); // 30

    return 0;
}
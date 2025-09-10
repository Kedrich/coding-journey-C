#include <stdio.h>

int main(void)
{

    int numbers[4] = {5, 15, 25, 35};
    int *ptr1 = numbers;
    int *ptr2 = &numbers[2];

    printf("A: %d\n", *ptr1); //5 Address: 1000
    printf("B: %d\n", *ptr2); //25 Address: 1008

    ptr1++; //Address: 1004 because + 1 (4 bytes)
    ptr2--; //Address: 1004 because - 1 (4 bytes)

    printf("C: %d\n", *ptr1); //15 Address: 1004
    printf("D: %d\n", *ptr2); //15 Address: 1004

    printf("E: %d\n", *(ptr1 + 1)); //1004 + 4 bytes = 1008, value = 25
    printf("F: %d\n", *(ptr2 - 1)); //1004 - 4 bytes = 1000, value = 5

    return 0;
}
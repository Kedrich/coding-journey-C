#include <stdio.h>

void swap(int *a, int *b)
{
    *a = 25;
    *b = 15;
}

int main(void)
{

    int a = 15, b = 25;
    printf("Before swap a = %d, b = %d\n", a, b);

    int *ptra = &a;
    int *ptrb = &b;

    swap(ptra, ptrb);

    printf("After swap: a = %d, b = %d", *ptra, *ptrb);


    return 0;
}
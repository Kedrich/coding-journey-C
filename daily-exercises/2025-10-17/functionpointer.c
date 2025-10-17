#include <stdio.h>

int *findMid(int a[], int len);

int main(void)
{

    int a[] = {1,2,3,4,5,6};
    int len = sizeof(a) / sizeof(a[0]);
    int *mid = findMid(a, len);
    printf("%d", *mid);
    return 0;
}

int *findMid(int a[], int len)
{
    return &a[len/2];
}
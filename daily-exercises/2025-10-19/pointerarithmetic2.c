#include <stdio.h>

int main(void)
{

    int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
    int *p = &a[1];
    printf("%d ", *(--p));
    printf("%d", *p);

    return 0;
}
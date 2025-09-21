#include <stdio.h>

int main(void)
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *p = &a[2];
    *p = *(p + 2);

    printf("%d", *p);


}
#include <stdio.h>

int main(void)
{

    int i = 10;
    int *p = &i;
    printf("%d", *(p+3));

    /*int a[5] = {1,2,3,4,5};
    int *p = &a[5];
    *p = *(p - 6);
    printf("%d", *p);*/

    return 0;
}
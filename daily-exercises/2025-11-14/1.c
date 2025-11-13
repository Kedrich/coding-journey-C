#include <stdio.h>

int main(void)
{

    int a[5] = {1,20,3,4,5};
    int (*p)[5] = &a;
    printf("%d", *(*p+1));
    return 0;

}
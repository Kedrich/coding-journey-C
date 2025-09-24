#include <stdio.h>

int main(void)
{

    int a[5];
    *(a+1)= 20;
    printf("%d", a[1]);
    return 0;
}
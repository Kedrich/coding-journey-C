#include <stdio.h>

int *fun()
{

    int i = 10;
    return &i;
    
}

int main(void)
{

    int *p = fun();
    printf("%d", *p);

    return 0;
}
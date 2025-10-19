#include <stdio.h>

int main(void)
{

    int a[5] = {1, 2, 3, 4, 5}, *p;

    p = &a[0];

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(p+i));
    }

    return 0;
}
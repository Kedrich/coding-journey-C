#include <stdio.h>

int main(void)
{

    int a[2][2][2] = {{1,2,4,9},
                      {23,45,12,25}}, *p;

    for(p = &a[0][0][0]; p <= &a[1][1][1]; p++)
    {
        printf("%d ", *p);
    }

    return 0;
}
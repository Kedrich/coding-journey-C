#include <stdio.h>

int main(void)
{

    int a[10] = {1,2,3,4,5,6};

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    int b[15] = {[2] = 29, [9] = 7, [14] = 48};
    int c[15] = {0,0,29,0,0,0,0,0,0,7,0,0,0,0,48};

    for(int i = 0; i < 15; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");

    for(int i = 0; i < 15; i++)
    {
        printf("%d ", c[i]);
    }

    printf("\n");

    int d[15] = {[14] = 48, [9] = 7, [2] = 29};

    for(int i = 0; i < 15; i++)
    {
        printf("%d ", d[i]);
    }

    printf("\n");

    int e[10] = {5,1,9,[4] = 3, 7, 2, [8] = 6};

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", e[i]);
    }
    

    return 0;
}
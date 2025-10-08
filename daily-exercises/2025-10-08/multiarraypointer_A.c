#include <stdio.h>

int main(void)
{

    int a[2][5] = {
        {1,2,3,4,5}, 
        {6,7,8,9,10}}, *p;

    /*for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }*/

    for(p = &a[0][0]; p <= &a[1][1]; p++)
    {
        printf("%d ", *p);
    }

    printf("\n%d", *(*(a+1))+4);

    return 0;
}
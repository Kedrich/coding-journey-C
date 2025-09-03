#include <stdio.h>

int main(void)
{
    int a[2][3][4] = {{1,2,3},{4,5,6},{7,8,9,10}};

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 4; k++)
            {
                printf("%d ", a[i][j][k]);
            }
        }
    }
}


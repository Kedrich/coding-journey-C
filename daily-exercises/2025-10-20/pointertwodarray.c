#include <stdio.h>

int main(void)
{

    int row, column;
    row = column = 2;

    int arr[row][column];

    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < length; i++)
    {
        for(int p = 0; p < length; p++)
        {
            printf("Please enter element %d - %d : ", i+1, p+1);
            scanf("%d", &arr[i][p]);
        }
    }

    int *p;

    for(p = &arr[0][0]; p <= &arr[row-1][column-1]; p++)
        printf("%d ", *p);

    return 0;
}

#include <stdio.h>

int main(void)
{

    /*int arr[] = {5, 16, 7, 89, 45, 32, 23, 10};
    int *p = &arr[2];
    printf("%d ", *(--p));
    printf("%d", *(p--));*/

    int arr[5] = {10, 20, 30, 40, 50};
    int i = 0;
    while(i < 5)
    {
        printf("%d ", arr[i++]);
    }

    printf("\n");
    i = 0;

    while(i < 4)
    {
        printf("%d ", arr[++i]);
    }

    return 0;
}
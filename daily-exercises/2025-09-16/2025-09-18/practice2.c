#include <stdio.h>

int *findLast(int arr[], int n)
{
    return &arr[n - 1];
}

int main(void)
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *last = findLast(arr, n);
    printf("%d", *last);

    return 0;
}
#include <stdio.h>

int *getFirst(int arr[], int n)
{
    return &arr[0];
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

    int *first = getFirst(arr, n);
    printf("%d", *first);

    return 0;
}
#include <stdio.h>

int *safeMid(int arr[], int n)
{
    if (n == 0 || n < 0)
    {
        printf("Error!");
    }
    else
    {
        return &arr[n/2];
    }
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

    int *middle = safeMid(arr, n);
    printf("%d", *middle);

    return 0;
}
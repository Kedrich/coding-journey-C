#include <stdio.h>

int *getKth(int arr[], int n, int k)
{
    if (k < 1 || k > n) {
        return NULL; 
    }

    return &arr[k - 1];
}

int main(void)
{

    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *kth = getKth(arr, n, k);
    printf("%d", *kth);

    return 0;
}
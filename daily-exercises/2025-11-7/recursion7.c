#include <stdio.h>

int findMax(int n, int arr[])
{

    if (n == 1)
    {
        return arr[0];
    }

    int max_rest = findMax(n - 1, arr);

    if (arr[n - 1] > max_rest)
        return arr[n - 1];
    else
        return max_rest;
}

int main(void)
{

    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array: \n", n);

    for(int i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    int max = findMax(n, arr);
    
    printf("The largest element of an array is : %d", max);

    return 0;
}
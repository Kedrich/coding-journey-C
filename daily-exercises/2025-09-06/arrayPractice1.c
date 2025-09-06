#include <stdio.h>
#include <stdlib.h>

void reverseArray(int arr[], int n);

int main(void)
{
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];  // Variable length array

    for(int i = 0; i < n; i++)
    {
        printf("Please enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nReversed array: ");
    reverseArray(arr, n);

    return 0;
}

void reverseArray(int arr[], int n)
{   
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

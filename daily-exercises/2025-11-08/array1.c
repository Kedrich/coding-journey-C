#include <stdio.h>


int findMax(int n, int arr[])
{
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int n, int arr[])
{
    int min = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main(void)
{

    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d element/s in the array: \n", n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int max = findMax(n, arr);
    int min = findMin(n, arr);

    printf("Maximum Element is: %d\n", max);
    printf("Minimum Element is: %d", min);

    return 0;
}
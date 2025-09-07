#include <stdio.h>

int sumEvenIndices(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }

    return sum;
}

int main(void)
{
    int n;
    printf("Please enter the number of arrays: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Please enter the #%d elemet: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Arrays: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int result = sumEvenIndices(arr, n);

    printf("\nThe Output is: %d", result);

    return 0;
}
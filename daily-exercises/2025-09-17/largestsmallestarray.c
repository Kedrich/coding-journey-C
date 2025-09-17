#include <stdio.h>

void findLargest(int arr[], int size)
{
    int large = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("%d\n", large);
}

void findSmall(int arr[], int size)
{

    int small = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }

    printf("%d", small);

}

int main(void)
{
    int n;
    printf("Please enter how many arrays: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("Please enter array #%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    findLargest(arr, n);
    findSmall(arr, n);

    return 0;
}

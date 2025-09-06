#include <stdio.h>

void rotateArray(int arr[], int n, int k)
{
    k = k % n; 
    int rotated[n];


    for(int i = 0; i < k; i++)
    {
        rotated[i] = arr[n - k + i];
    }


    for(int i = 0; i < n - k; i++)
    {
        rotated[k + i] = arr[i];
    }


    for(int i = 0; i < n; i++)
    {
        printf("%d ", rotated[i]);
    }
    printf("\n");
}

int main(void)
{
    int n;
    printf("Please enter the size of the array (minimum 5): ");
    scanf("%d", &n);

    if(n < 5 || n > 100)
    {
        printf("Error: Please enter at least 5 elements (and no more than 100).\n");
        return 1;
    }

    int arr[n];

    printf("Please enter 5 Elements\n");
    for(int i = 0; i < n; i++)
    {
        printf("Element #%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter rotation count: ");
    scanf("%d", &k);

    rotateArray(arr, n, k);

    return 0;
}

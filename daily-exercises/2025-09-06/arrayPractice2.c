#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN)
    {
        printf("No second largest element exists.\n");
        return INT_MIN;
    }

    return secondLargest;
}



int main(void)
{
    int n;
    printf("Please enter the size of the array (1-100): ");
    scanf("%d", &n);

    if(n <= 100 && n >= 1)
    {
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            printf("Please enter the number of Elemenet #%d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        printf("Arrays: \n");
        for(int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    
        printf("\nThe Second Largest of the Array: \n");
        int result = findSecondLargest(arr, n);
        printf("%d ", result);

    }

    else
    {
        printf("Please enter a number within 1 - 100 range only!");
    }

}
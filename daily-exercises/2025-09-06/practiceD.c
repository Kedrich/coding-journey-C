#include <stdio.h>

void checkElement(int arr[], int n)
{
    int search;
    printf("\nPlease enter the number you would like to search: ");
    scanf("%d", &search);

    int found = 0;

    for(int i = 0; i < n; i++)
    {
        if(search == arr[i])
        {
            printf("Found");
            found = 1;  
            break;
        }
    }
    
    if(!found)
    {
        printf("Not Found!\n");
    }
}

int main(void)
{
    
    int n;
    printf("Please enter the number of arrays: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("Please enter the array #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("Array: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    checkElement(arr, n);

    return 0;
}
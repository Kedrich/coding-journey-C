#include <stdio.h>

void arrayIntersection(int arr1[], int arr2[], int n1, int n2)
{
    printf("\nCommon Elements: ");
    int found = 0;

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]); 
                found = 1;
                break; 
            }
        }
    }

    if(!found)
    {
        printf("None");
    }
}

int main(void)
{
    int n1, n2;
    printf("Please enter the number of array1: ");
    scanf("%d", &n1);
    printf("Please enter the number of array2: ");
    scanf("%d", &n2);

    int arr1[n1];
    int arr2[n2];

    for(int i = 0; i < n1; i++)
    {
        printf("Please enter the #%d Element in Arr1: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < n2; i++)
    {
        printf("Please enter the #%d Element in Arr2: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("\nArr1: ");
    for(int i = 0; i < n1; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nArr2: ");
    for(int i = 0; i < n2; i++)
    {
        printf("%d ", arr2[i]);
    }

    arrayIntersection(arr1, arr2, n1, n2);

    return 0;
}

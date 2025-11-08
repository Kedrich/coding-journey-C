#include <stdio.h>

int main(void)
{

    int n;
    printf("Input the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input the elements in the array in ascending order: \n");
    for(int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int p;
    printf("Input the position where to delete: ");
    scanf("%d", &p);

    printf("The new list: ");
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == arr[p-1])
        {
            continue;
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
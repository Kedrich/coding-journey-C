#include <stdio.h>

int main(void)
{
    int arr[] = {5, 3, 7, 3, 9, 3, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
    printf("Array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");

    printf("Found at indices: ");

    for(int i = 0; i < size; i++)
    {
        if (arr[i] == 3)
        {
            count++;
            printf("%d ", i);
        }
    }

    printf("\nNumber 3 appears %d times\n", count);


}
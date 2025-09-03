#include <stdio.h>

int main(void)
{

    int arr[] = {5, 3, 7, 3, 9, 3, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int appearCount = 0;
    int indices;

    printf("Arrays:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Number 3 appears %d times\n", appearCount);

    printf("Found at indices:\n");
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 3)
        {
            appearCount++;
            printf("%d ", i);
        }
    }

    return 0;
}
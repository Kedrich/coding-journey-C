#include <stdio.h>

#define ELEMENT 5

int main(void)
{
    int arr[ELEMENT];

    printf("Enter 5 Numbers:\n");
    for(int i = 0; i < ELEMENT; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Here are the array of 5 numbers: \n");
    for(int i = 0; i < ELEMENT; i++)
    {
        printf("Element %d: %d\n", i, arr[i]);
    }

    printf("Here are the reversed array of the 5 numbers: \n");
    for(int i = ELEMENT - 1; i >= 0; i--)
    {
        printf("Element %d: %d\n", i, arr[i]);
    }

    return 0;
}
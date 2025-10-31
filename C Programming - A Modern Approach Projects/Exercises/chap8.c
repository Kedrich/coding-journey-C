#include <stdio.h>

int main(void)
{

    int arr[10];

    printf("Enter 10 numbers: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }   

    printf("In reverse order: ");

    for(int i = 10; i > 0; i--)
    {
        printf("%d ", arr[i-1]);
    }

    return 0;
}
#include <stdio.h>

int main(void)
{

    int n, *p;
    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("element - %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    p = &arr[0];

    printf("\n");

    printf("The element of array in reverse order are: \n");

    for(int i = n-1; i >= *p-1; i--)
    {
        printf("element - %d : %d\n", i+1, *(p+i));
    }

    return 0;
}
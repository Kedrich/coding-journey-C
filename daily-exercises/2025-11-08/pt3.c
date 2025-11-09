#include <stdio.h>

int main(void)
{

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], *p, count;

    for(p = arr, count = 1; p < arr + n; p++, count++)
    {
        printf("Enter element %d: ", count);
        scanf("%d", p);
    }

    printf("Reversed array: \n");
    for(p = arr + (n-1); p >= arr; p--)
    {
        printf("%d ", *p);
    }

    return 0;
}
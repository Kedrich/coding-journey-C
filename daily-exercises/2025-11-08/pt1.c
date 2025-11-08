#include <stdio.h>

int main(void)
{

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], *p, i;
    
    for(p = &arr[0], i = 1; p <= &arr[n-1]; p++, i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", p);
    }

    for(p = &arr[0];  p <= &arr[n-1]; p++)
    {
        printf("%d ", *p);
    }

    return 0;
}
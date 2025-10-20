#include <stdio.h>

int main(void)
{   

    int n;
    printf("Please input the size of the array: ");
    scanf("%d", &n);

    printf("\n");

    int arr[n], *p, i, sum = 0;
    printf("Please input %d integers \n", n);
    for(i=1, p = arr; p < arr+n; p++, i++)
    {
        printf("Element #%d: ", i);
        scanf("%d", p);
    }

    for(p = arr; p < arr+n; p++)
    {
        sum += *p;
    }

     printf("Sum of the array elements: %d", sum);

    return 0;
}
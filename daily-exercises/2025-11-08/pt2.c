#include <stdio.h>

int main(void)
{

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], *p, i;
    for(p = arr, i = 1;p < arr + n; p++,  i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", p);
    }

    int sum  = 0;
    for(p = arr; p < arr + n; p++)
    {
        sum += *p;
    }

    printf("The sum of the %d array is: %d", n, sum);

    return 0;
}
#include <stdio.h>

int main(void)
{

    int n;
    printf("Please input the size of the array: ");
    scanf("%d", &n);

    printf("\n");

    int arr[n], *p, i;
    printf("Please input %d integers \n", n);
    for(i=1, p = arr; p < arr+n; p++, i++)
    {
        printf("Element #%d: ", i);
        scanf("%d", p);
    }

    int max = 0;

    for(p = arr; p < arr+n; p++)
    {
        if(max < *p)
        {
            max =*p;
        }
    }

    printf("The Maximum Element is %d", max);

    return 0;
}
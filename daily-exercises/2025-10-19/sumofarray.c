#include <stdio.h>

int main()
{

    int arr[] = {1,2,3,4,5};
    int sum = 0, *p;
    p = &arr[0];

    for(p = &arr[0]; p <= &arr[4]; p++)
    {
        sum += *p;
    }

    printf("SUM: %d", sum);

    return 0;
}
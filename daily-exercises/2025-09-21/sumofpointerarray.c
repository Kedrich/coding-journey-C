#include <stdio.h>

int main(void)
{

    int arr[] = {1,2,3,4,5};
    int sum = 0, *p;

    for(p = &arr[0]; p <= &arr[4]; p++)
    {
        sum += *p;
    }
    
    printf("%d", sum);

    return 0;
}
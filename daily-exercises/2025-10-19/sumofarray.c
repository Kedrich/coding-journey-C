#include <stdio.h>

int main()
{

    /*

    Old Code:

    int arr[] = {1,2,3,4,5};
    int sum = 0, *p;
    p = &arr[0];

    for(p = &arr[0]; p <= &arr[4]; p++)
    {
        sum += *p;
    }

    printf("SUM: %d", sum);*/

    //New Code:

    int a[] = {11, 22, 36, 5, 2};
    int sum = 0, *p;

    for (p = a; p <= a + 4; p++)
    {
        sum += *p;
    }

    printf("SUM: %d", sum);

    return 0;
}
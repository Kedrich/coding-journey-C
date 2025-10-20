#include <stdio.h>
#define N 5


int main(void)
{

    int a[N], *p;

    printf("Enter %d elemenets in the array: ", N);
    for(p = a; p <= a+N-1; p++)
    {
        scanf("%d", p);
    }

    printf("Elemenet in reversed order: ");
    for(p = a+N-1; p >= a; p--)
    {
        printf("%d ", *p);
    }

    return 0;
}
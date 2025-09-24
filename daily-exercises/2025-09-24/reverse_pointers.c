#include <stdio.h>
#define N 5

int main(int argc, char const *argv[])
{
    int a[N], *p;
    int i = 1;
    printf("Enter the %d elements of the array: \n", N);
    for(p = a; p <= a+N-1; p++)
    {   
        printf("Enter Element #%d: ", i);
        scanf("%d", p);
        i++;
    }

    printf("Elements in reverse: \n");
    for(p = a+N-1; p >= a; p--)
        printf("%d\n", *p);



    return 0;
}

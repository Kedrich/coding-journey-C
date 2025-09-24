#include <stdio.h>
#define N 6

int main(void)
{
    int a[N], *p, i = 1, sum_even = 0, sum_odd = 0;

    printf("Enter 6 Elements:\n");
    for(p = a; p <= a+N-1; p++)
    {
        printf("Enter Element No.%d: ", i++);
        scanf("%d", p);
    }

    for(p = a; p <= a+N-1; p++)
    {
        if(*p % 2 == 0)
        {
            sum_even += *p;
        }
        else
        {
            sum_odd += *p;
        }
    }

    printf("Sum of even elements: %d\n", sum_even);
    printf("Sum of odd elements: %d", sum_odd);


    return 0;
}
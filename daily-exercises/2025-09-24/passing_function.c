#include <stdio.h>

int add(int a[], int len)
{
    int sum = 0, i;
    for(i = 0; i < len; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main(void)
{

    int a[] = {1, 2, 3, 4, 5};
    int len = sizeof(a) / sizeof(a[0]);

    int sum = add(a, len);
    printf("%d", sum);

    return 0;
}
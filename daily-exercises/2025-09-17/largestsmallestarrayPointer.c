#include <stdio.h>

int findSmallLarge(int a[], int size, int *min, int *max)
{
    for(int i = 0; i < size; i++)
    {
        if (a[i] < *max)
        {
            *max = a[i];
        }

        if (a[i] > *min)
        {
            *min = a[i];
        }
    }
}

int main(void)
{
    int a[] = {5, 5546, 5535, 876, 93556, 442};
    int size = sizeof(a) / sizeof(a[0]);

    int min, max;
    min = max = a[0];

    findSmallLarge(a, size, &min, &max);

    printf("%d %d", max, min);


    return 0;
}
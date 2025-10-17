#include <stdio.h>

void minmax(int a[10], int *min, int *max)
{

    *min = *max = a[0];

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }

        if (a[i] < *min)
        {
            *min = a[i];
        }
    }
}

int main(void)
{

    int a[10];
    int min, max;

    printf("Please enter 10 numbers: ");
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    minmax(a, &min, &max);

    printf("%d %d", min, max);

    return 0;
}
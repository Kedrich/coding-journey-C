#include <stdio.h>

int main(void)
{

    int a[4];
    
    printf("Please enter 4 numbers: ");
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    int max, min;
    max = min = a[0];

    for (int i = 1; i < 4; i++) {
        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("%d\n", max);
    printf("%d", min);

    return 0;
}
#include <stdio.h>
#define N 5

int main(void)
{
    int a[N], *p, i = 1;
    int *max;
    
    // Input elements
    for(p = a; p <= a+N-1; p++)
    {
        printf("Please enter element %d: ", i);
        scanf("%d", p);
        i++;
    }

    // Find maximum element
    max = a;  // Start by assuming first element is maximum
    
    printf("Maximum element: ");
    for(p = a + 1; p <= a+N-1; p++)  // Start from second element
    {
        if (*p > *max)  // Compare values, not pointers
        {
            max = p;    // Update max to point to larger element
        }
    }
    printf("%d\n", *max);

    return 0;
}
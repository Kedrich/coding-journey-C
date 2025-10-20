#include <stdio.h>

// Function to copy elements using pointers only
void copyArray(int *source, int *destination, int size)
{
    int *end = source + size; 

    while (source < end)
    {
        *destination = *source; 
        source++;               
        destination++;
    }
}

int main(void)
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int source[n], destination[n];
    int *p;
    int i = 1;

    printf("\nEnter %d elements for the source array:\n", n);
    for (p = source; p < source + n; p++, i++)
    {
        printf("Element #%d: ", i);
        scanf("%d", p);
    }

    copyArray(source, destination, n);

    printf("\nElements in the destination array:\n");
    for (p = destination; p < destination + n; p++)
    {
        printf("%d ", *p);
    }

    printf("\n");
    return 0;
}

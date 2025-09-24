#include <stdio.h>
#define N 5

int main(void)
{
    int a[N], *p, i = 1;
    
    // Input elements
    for(p = a; p <= a+N-1; p++)
    {
        printf("Enter Element #%d: ", i++);
        scanf("%d", p);
    }

    int search;
    int position = 0;
    int found = 0;  // Flag to track if element is found
    
    printf("Please enter the number you want to search: ");
    scanf("%d", &search);

    // Search for the element
    for(p = a; p <= a+N-1; p++)
    {
        position++;
        if(search == *p)
        {
            found = 1;  // Mark as found
            break;      // Exit loop when found
        }
    }

    // Print result
    if(found)
        printf("Element found at position %d\n", position);
    else
        printf("Element not found\n");

    return 0;
}
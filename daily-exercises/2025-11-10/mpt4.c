#include <stdio.h>

void positionFinder(int array[], int n, int findNumber)
{
    int found = 0;

    printf("Positions: ");
    for (int i = 0; i < n; i++)  
    {
        if (array[i] == findNumber)
        {
            printf("%d ", i + 1);  
            found = 1;
        }
    }

    if (!found)
        printf("Number not found");
    
    printf("\n");
}

int main(void)
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)  // fill array safely
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int findNumber;
    printf("Please enter the number you want to find in the array: ");
    scanf("%d", &findNumber);

    positionFinder(array, n, findNumber);

    return 0;
}

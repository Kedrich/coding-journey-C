#include <stdio.h>

void allOccurence(int array[], int n)
{
    int position;
    int position_array;
    int i;

    printf("\nWhat number you would like to find: ");
    scanf("%d", &position);

    printf("Position: ");
    for( i = 0; i < n; i++)
    {   
        if(position == array[i])
        {
            printf("%d ", i+1);
        }
    }
}

int main(void)
{
    int n;
    printf("Please enter the number of arrays: ");
    scanf("%d", &n);

    int array[n];
    for(int i = 0; i < n; i++)
    {
        printf("Please enter the #%d Array: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Arrays: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    allOccurence(array, n);

    return 0;
}
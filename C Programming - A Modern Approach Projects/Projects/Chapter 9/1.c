#include <stdio.h>

void selection_sort(int array[], int n, int max)
{
    
}

int main(void)
{

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter %d elements in the array: \n", n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &array[i]);
    }

    int max = 0;
    for(int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    
    selection_sort(array, n, max);


    return 0;
}
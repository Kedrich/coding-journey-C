#include <stdio.h>

void minArray(int array[], int n)
{
    int min = array[0]; //3
    for(int i = 1; i < n; i++)
    {
        if(array[i] < min)
        min = array[i];
    }
    printf("\nThe minimum array is: %d", min);
}

int main()
{
    int n;  
    printf("Please enter the number of array: ");
    scanf("%d", &n);

    int array[n];
    for(int i = 0; i < n; i++)
    {
        printf("Please enter the array #%d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Arrays: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    minArray(array, n);

}
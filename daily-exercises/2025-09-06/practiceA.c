#include <stdio.h>

void findtheMAX(int array[])
{
    int max = array[0];  
    
    for(int i = 1; i < 5; i++) 
    {
        if(array[i] > max)  
        {
            max = array[i];  
        }
    }
    
    printf("The Maximum value is %d\n", max);
}


int main(void)
{
    int array[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Please enter the %d array: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Array:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    findtheMAX(array);
}
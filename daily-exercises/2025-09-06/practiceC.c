#include <stdio.h>

float arrayAvarage(int array[], int n)
{
    float average;
    int sum;


    for(int i = 0; i < n; i++)
    {
        sum += array[i];
        
    }
    average = sum / n;

    return average;

}

int main(void)
{
    int n;
    printf("Please enter the number of arrays: ");
    scanf("%d", &n);

    int array[n];
    for(int i = 0; i < n; i++)
    {
        printf("Please enter the array number #%d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Arrays: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    float result = arrayAvarage(array, n);

    printf("\nThe average of all the arrays is: %.1f", result);


}
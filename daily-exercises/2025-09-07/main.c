#include <stdio.h>

void countEvenorOddNumbers(int arr[], int n)
{
    int odd = 0; 
    int even = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("\nOdd: %d, Even: %d", even, odd);

}

int main(void)
{
    int n;  
    printf("Please enter the number of arrays: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("Please enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Arrays: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    countEvenorOddNumbers(arr, n);

    return 0;
}
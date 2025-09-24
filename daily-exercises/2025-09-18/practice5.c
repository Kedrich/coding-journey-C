#include <stdio.h>

int sumFirstTwo(int arr[])
{
    return *arr + *(arr + 1); 
    
}


int main(void)
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sumoftwo = sumFirstTwo(arr);
    printf("%d\n", sumoftwo);


    return 0;
}
#include <stdio.h>

int main(void)
{

    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n], *p;
    for(int i = 0; i < n; i++)
    {
        printf("element - %d : ", i+1);
        scanf("%d", &arr[i]);
    }


    printf("The element you entered are: ");
    for(p = &arr[0]; p <= &arr[n-1]; p++)
    {
        printf("%d ", *p);
    }

    return 0;
}
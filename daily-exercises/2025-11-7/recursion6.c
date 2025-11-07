#include <stdio.h>

int print_array(int n, int arr[])
{

    if(n == 0)
    {
        return 0;
    }
    else
    {
        print_array(n - 1, arr);
        printf("%d ", arr[n - 1]);
    }

}

int main(void)
{

    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are: ");
    print_array(n, arr);

    return 0;
}
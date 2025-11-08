#include <stdio.h>

void arrayAscender(int n, int arr[])
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

int main(void)
{

    int n;
    printf("Input the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array: \n", n);
    for(int i = 0; i < n; i++)
    {
        printf("elemet %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Elements of array in sorted ascending order: \n");

    arrayAscender(n, arr);

    return 0;
}
#include <stdio.h>

void arraySorter(int *n, int *arr)
{
    for (int i = 0; i < *n - 1; i++)
    {
        for (int j = i + 1; j < *n; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("The elements in the array after sorting:\n");
    for (int i = 0; i < *n; i++)
    {
        printf("element - %d : %d\n", i + 1, *(arr + i));
    }
}

int main(void)
{
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    arraySorter(&n, arr); 

    return 0;
}

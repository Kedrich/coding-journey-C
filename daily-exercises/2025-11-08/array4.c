#include <stdio.h>

int main(void)
{
    int n;
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &n);

    while (n <= 0 || n >= 5)
    {
        printf("Input the size of the square matrix (less than 5): ");
        scanf("%d", &n);
    }

    int first[n][n], second[n][n], sum[n][n];

    for (int k = 0; k < 2; k++)
    {
        if (k == 0)
            printf("Input elements in the first matrix:\n");
        else
            printf("Input elements in the second matrix:\n");

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("element - [%d],[%d]: ", i, j);
                if (k == 0)
                    scanf("%d", &first[i][j]);
                else
                    scanf("%d", &second[i][j]);
            }
        }
    }

    printf("\nThe First matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", first[i][j]);
        printf("\n");
    }

    printf("\nThe Second matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", second[i][j]);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
        }
    }

    printf("\nThe Addition of two matrices is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}

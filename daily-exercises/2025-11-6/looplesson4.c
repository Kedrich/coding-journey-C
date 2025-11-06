#include <stdio.h>

int main(void)
{

    int r, c, nr, nc;
    printf("Enter width: ");
    scanf("%d", &nc);
    printf("Enter height: ");
    scanf("%d", &nr);

    for(r = 0; r < nr; r++)
    {
        for(c = 0; c < nc; c++)
        {
            printf("*");
        }
        printf("\n");
    }

    int i, j;

    printf("Multiplication Table (1-9):\n\n");

    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= 9; j++)
        {
            printf("%4d ", i * j);
        }
        printf("\n");
    }

    return 0;
}
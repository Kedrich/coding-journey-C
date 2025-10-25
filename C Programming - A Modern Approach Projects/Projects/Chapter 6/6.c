#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;
    while (i * i <= n)
    {
        int square = i * i;

        if (square % 2 == 0)
            printf("%d\n", square);

        i++;
    }

    return 0;
}

#include <stdio.h>

int main(void)
{

    int n = 10, sum = 0;

    printf("The first 10 natural number is : \n");
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }

    printf("\nThe sum is : %d", sum);

    return 0;
}
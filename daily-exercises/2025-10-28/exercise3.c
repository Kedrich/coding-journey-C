#include <stdio.h>

int main(void)
{

    int n, sum = 0;
    printf("Enter a positive number: "); 
    scanf("%d", &n);

    printf("The first %d natural number is : \n", n);
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }

    printf("\nThe Sum of Natural Number upto %d terms : %d", n, sum);

    return 0;
}
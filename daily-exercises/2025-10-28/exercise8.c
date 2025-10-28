#include <stdio.h>

int main(void)
{

    int number, sum = 0;
    printf("Input number of terms: ");
    scanf("%d", &number);

    int limit = number * 2;

    printf("The odd numbers are: ");
    for(int i = 0; i < limit; i++)
    {
        if(i % 2 == 1)
        {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nThe Sum of odd Natural Number upto %d terms: %d", number, sum);

    return 0;
}
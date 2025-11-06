#include <stdio.h>

int main(void)
{

    int terms, sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    while (terms < 0)
    {
        printf("Enter positive number of terms: ");
        scanf("%d", &terms);
    }

    printf("The even numbers are: \n");
    for(int i = 1; i <= terms; i++)
    {
        printf("%d ", 2 * i);
        sum += 2 * i;
    }

    printf("The Sum of even Natural Number upto 5 terms: %d", sum);

    return 0;
}
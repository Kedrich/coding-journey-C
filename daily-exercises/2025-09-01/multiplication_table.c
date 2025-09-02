#include <stdio.h>

int main(void)
{

    int number, product, count;

    printf("Please entere a number: ");
    scanf("%d", &number);

    for(count = 1; count <= 10; count++)
    {
        product = count * number;
        printf("%d x %d = %d\n", number, count, product);
    }

    return 0;
}
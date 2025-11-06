#include <stdio.h>

int main(void)
{

    int i = 1;
    int product = 1;
    while (i <= 5)
    {
        product *= i;
        printf("Current number: %d, Current product: %d\n", i, product);
        i++;
    }

    return 0;
}
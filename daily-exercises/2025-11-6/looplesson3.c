#include <stdio.h>

int main(void)
{

    float number;

    while (1)
    {

        scanf("%f", &number);

        if (number == 0)
        {
            break;
        }

        printf("Reciprocal: %.2f\n", 1/number);

    }

    return 0;
}
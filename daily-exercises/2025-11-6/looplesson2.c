#include <stdio.h>

int main(void)
{

    float nextNum, sum = 0.0;

    while(scanf("%f", &nextNum) != EOF)
    {
        sum+=nextNum;
    }

    printf("Sum: %.2f", sum);

    return 0;
}
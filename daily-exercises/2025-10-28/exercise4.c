#include <stdio.h>

int main(void)
{

    int sum = 0, i, k = 10, n;

    printf("Input the 10 numbers: \n");
    for(i = 1; i <= k; i++)
    {
        printf("Number-%d :", i);
        scanf("%d", &n);

        sum += n;
    }

    printf("The sum of %d no is : %d\n", k, sum);

    float average = (sum / (float)k);

    printf("The Average is : %f", average);

    return 0;
}
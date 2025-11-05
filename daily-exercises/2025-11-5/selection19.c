#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    printf("Please enter 3 numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int max = n1;
    
    if (n2 > max)
    {
        max = n2;
    }
    if (n3 > max)
    {
        max = n3;
    }

    printf("The largest is %d.\n", max);

    return 0;
}

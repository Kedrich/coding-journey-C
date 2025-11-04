#include <stdio.h>

int main(void)
{

    int n1, n2;
    printf("Enter 2 numbers\n");
    printf("No. #1: ");
    scanf("%d", &n1);
    printf("No. #2: ");
    scanf("%d", &n2);

    if(n1 > n2)
    {
        printf("%d is the maximum.", n1);
    }
    else if (n1 == n2) 
    {
        printf("%d and %d are equal.", n1, n2);
    }
    else
    {
        printf("%d is the maximum.", n2);
    }

    return 0;
}
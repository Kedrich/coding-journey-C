#include <stdio.h>

int main(void)
{
    
    int n, sum = 0;

    printf("This program sums a series of integers.");
    printf("Enter integers (0 to terminate) : ");
    
    while(n != 0)
    {
        scanf("%d", &n);

        sum += n;
    }

    printf("The sum is: %d", sum);
    
    return 0;

}
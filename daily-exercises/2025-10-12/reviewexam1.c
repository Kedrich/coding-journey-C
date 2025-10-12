#include <stdio.h>

int main(void)
{

    int n, d;
    int even_sum = 0, odd_sum = 0, num = 1;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    printf("Enter the divisor (d): ");
    scanf("%d", &d);

    if(n <=0 || d == 0)
    {
        printf("Invalid input.");
    }
    else
    {
        while(num <= n)
        {
            if(num % 2 == 0)
            {
                if(num % d == 0)
                {
                    even_sum = even_sum + num;
                }
                else
                {
                    even_sum++;
                }
            }
            else
            {
                if (num % d == 0)
                {
                    odd_sum = odd_sum + num;
                }
            }
            num++;
        }
    }

    printf("Even sum = %d\n", even_sum);
    printf("Odd_sum = %d", odd_sum);


    return 0;
}
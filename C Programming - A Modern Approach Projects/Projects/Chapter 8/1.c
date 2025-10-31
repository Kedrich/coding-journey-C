#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false};   
    bool repeated[10] = {false}; 
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
            repeated[digit] = true;  
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digit(s): ");
    bool any_repeated = false;
    for (int i = 0; i < 10; i++)
    {
        if (repeated[i]) {
            printf("%d ", i);
            any_repeated = true;
        }
    }

    if (!any_repeated)
        printf("None");

    printf("\n");
    return 0;
}

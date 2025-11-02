#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    long n;
    
    while (1) {
        bool digit_seen[10] = {false};
        int digit;
        bool repeated = false;

        printf("Enter a number (<=0 to quit): ");
        scanf("%ld", &n);

        if (n <= 0)
            break;

        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit]) {
                repeated = true;
                break;
            }
            digit_seen[digit] = true;
            n /= 10;
        }

        if (repeated)
            printf("Repeated digit\n\n");
        else
            printf("No repeated digit\n\n");
    }

    printf("Program terminated.\n");
    return 0;
}

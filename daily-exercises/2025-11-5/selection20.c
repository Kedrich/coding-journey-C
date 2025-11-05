#include <stdio.h>

int main(void)
{
    int code;
    printf("Enter 4-digit card: ");
    scanf("%d", &code);

    int first_digit = code / 1000;     // e.g., 5123 → 5
    int first_two_digits = code / 100; // e.g., 5123 → 51

    if (first_digit == 4)
    {
        printf("Visa.\n");
    }
    else if (first_two_digits >= 51 && first_two_digits <= 55)
    {
        printf("MasterCard.\n");
    }
    else if (first_two_digits == 34 || first_two_digits == 37)
    {
        printf("American Express.\n");
    }
    else
    {
        printf("Unknown or invalid card.\n");
    }

    return 0;
}

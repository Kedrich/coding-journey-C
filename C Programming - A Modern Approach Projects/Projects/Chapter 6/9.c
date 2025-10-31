#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment, balance;
    int number_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter number of payments: ");
    scanf("%d", &number_payment);  // Changed to %d for integer input

    interest_rate = interest_rate / 100.0;
    float monthly_interest_rate = interest_rate / 12.0;

    balance = loan;

    for (int i = 1; i <= number_payment; i++)
    {
        balance = balance * (1 + monthly_interest_rate) - monthly_payment;
        printf("Balance after payment %d: %.2f\n", i, balance);
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    interest_rate = interest_rate / 100.0;
    float monthly_interest_rate = interest_rate / 12.0;

    // First month
    balance = loan * (1 + monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after first payment: %.2f\n", balance);

    // Second month
    balance = balance * (1 + monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after second payment: %.2f\n", balance);

    // Third month
    balance = balance * (1 + monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}

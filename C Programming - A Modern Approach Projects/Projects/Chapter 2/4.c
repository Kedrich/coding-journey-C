#include <stdio.h>

int main(void)
{

    float dollar_cents, tax = 0.05;

    printf("Enter an amount: ");
    scanf("%f", &dollar_cents);

    float tax_added = dollar_cents + (dollar_cents * tax);
    printf("-----------------------\n");
    printf("With tax added: $%.2f", tax_added);

    return 0;
}
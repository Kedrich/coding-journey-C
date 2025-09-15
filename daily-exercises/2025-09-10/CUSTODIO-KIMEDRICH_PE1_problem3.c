#include <stdio.h>

int main(void)
{
    float amount, tip;
    int people;

    printf("Enter the bill amount: ");
    scanf("%f", &amount);

    printf("Enter the tip percentage: ");
    scanf("%f", &tip);

    printf("Enter the number of people: ");
    scanf("%d", &people);

    float total_bill = amount + (amount * (tip/100));

    float payment_per_person = total_bill / people;

    printf("Total bill including tip: %.2f\n", total_bill);
    printf("Each person should pay: %.2f", payment_per_person);

    return 0;
}
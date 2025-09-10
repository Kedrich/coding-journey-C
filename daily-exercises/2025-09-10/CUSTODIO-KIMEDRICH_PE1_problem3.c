#include <stdio.h>

float totalbillCalculation(float amount, float tip)
{
    float total_bill = amount + (amount * (tip/100));
    return total_bill;
}

float paymentPerPerson(float total_bill, float people)
{
    float payment_per_person = total_bill / people;
    return payment_per_person;
}

int main()
{

    float amount, tip, people;

    printf("Enter the bill amount: $");
    scanf("%f", &amount);
    printf("Enter the tip percentage: ");
    scanf("%f", &tip);
    printf("Enter the number of people/s: ");
    scanf("%f", &people);

    float total_bill = totalbillCalculation(amount, tip);
    float payment_per_person = paymentPerPerson(total_bill, people);

    printf("Total bill including tip: $%.2f\n", total_bill);
    printf("Each person should pay: $%.2f", payment_per_person);
    
    return 0;
}
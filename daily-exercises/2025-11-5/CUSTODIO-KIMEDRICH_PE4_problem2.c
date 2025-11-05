#include <stdio.h>

int main(void)
{

    printf("***Electricity Bill Calculator***\n\n");

    char name[99];
    int power_consumption;
    float electricity_bill = 0;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter power consumption (kWh): ");
    scanf("%d", &power_consumption);

    printf("\n");

    if (power_consumption < 0)
    {
        printf("Please enter a valid value.\n");
        return 0;
    }

    if (power_consumption <= 100)
    {
        electricity_bill = power_consumption * 0.50;
        printf("%s's bill at $0.50/kWh is: $%.2f\n", name, electricity_bill);
    }
    else if (power_consumption <= 300)
    {
        electricity_bill = power_consumption * 0.75;
        printf("%s's bill at $0.75/kWh is: $%.2f\n", name, electricity_bill);
    }
    else
    {
        electricity_bill = power_consumption * 1.00;
        printf("%s's bill at $1.00/kWh is: $%.2f\n", name, electricity_bill);
    }

    return 0;
}

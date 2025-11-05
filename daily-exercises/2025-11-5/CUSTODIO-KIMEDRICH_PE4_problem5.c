#include <stdio.h>

int main(void)
{
    printf("*** Employee Bonus Calculator ***\n\n");

    int years, position;
    float salary, bonus = 0;

    printf("Enter years of service: ");
    scanf("%d", &years);
    printf("Enter position (1-3): ");
    scanf("%d", &position);
    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("\n");
    
    if (years < 0)
    {
        printf("Invalid years of service.\n");
        return 0;
    }

    if (position < 1 || position > 3)
    {
        printf("Invalid position.\n");
        return 0;
    }

    if (years >= 5)
    {
        if (position == 1)
        {
            bonus = salary * 0.20;
            printf("Bonus: %.0f (20%% of salary for Manager)\n", bonus);
        }
        else if (position == 2)
        {
            bonus = salary * 0.15;
            printf("Bonus: %.0f (15%% of salary for Team Lead)\n", bonus);
        }
        else //position == 3
        {
            bonus = salary * 0.10;
            printf("Bonus: %.0f (10%% of salary for Staff)\n", bonus);
        }
    }
    else
    {
        printf("No bonus.\n");
    }

    return 0;
}

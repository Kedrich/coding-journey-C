#include <stdio.h>

int main()
{

    int basic_salary, deduction_percent;

    printf("Enter basic salary: ");
    scanf("%d", &basic_salary);

    printf("Enter deduction percent: ");
    scanf("%d", &deduction_percent);

    float deduction_salary_amount = (basic_salary * (deduction_percent / 100.00));

    float net_salary = basic_salary - deduction_salary_amount;

    printf("Net Salary: %.2f", net_salary);
    

    return 0;
}
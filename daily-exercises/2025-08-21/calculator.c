#include <stdio.h>

int main(void)
{

    int num1, num2;
    float add;
    float sub;
    float mul;
    float div;
    char operator;

    printf("Please enter number 1: ");
    scanf("%d", &num1);

    printf("Please enter the operator that u want to use [+, -, *, /]: ");
    scanf(" %c", &operator);

    printf("Please enter number 2: ");
    scanf("%d", &num2);
    

    switch (operator)
    {
    case '+':
        add = num1 + num2;
        printf("%.1f", add);
        break;
    
    case '-':
        sub = num1 - num2;
        printf("%.1f", sub);
        break;

    case '*':
        mul = num1 * num2;
        printf("%.1f", mul);
        break;
    
    case '/':
        if (num2 == 0)
        {
            printf("Undefined, please enter a valid number othere than 0 (not equals to 0)");
        }
        else
        {
            div = num1 / num2;
            printf("%.1f", div);
        }
        break;

    default:
        printf("Please enter a valid number.");
        break;
    }

    return 0;

}
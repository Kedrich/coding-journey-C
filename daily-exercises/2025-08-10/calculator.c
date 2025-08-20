#include <stdio.h>

void add (float *, float *, float *);
void substract (float *, float *, float *);
void multiply(float *, float *, float *);
void divide(float *, float *, float *);

int main(void)
{

    float num1, num2, result;
    char operation;

    //Getting input sa user (number 1)
    printf("Please enter a number: ");
    scanf("%f", &num1);

    //Getting input sa user (operation to use)
    printf("Please enter the operation that u want to use (+, -, *, /): ");
    scanf(" %c", &operation);

    //Getting input sa user (number 2)
    printf("Please enter a number: ");
    scanf("%f", &num2);

    //if-else condition para sa calculator type shi
    if (operation == '+')
    {
        add(&num1, &num2, &result);
        printf("%.2f + %.2f = %.2f",num1, num2, result);
    }
    else if (operation == '-')
    {
        substract(&num1,  &num2, &result);
        printf("%.2f - %.2f = %.2f", num1, num2, result);
    }
    else if (operation == '*')
    {
        multiply(&num1, &num2, &result);
        printf("%.2f * %.2f = %.2f", num1, num2, result);
    }
    else if (operation == '/')
    {
        divide(&num1, &num2, &result);
        if (num2 != 0)
        {  
        printf("%.2f / %.2f = %.2f", num1, num2, result);
        }
    }

    else
    {
        printf("Please enter a proper value / number!");
    }
    
    return 0;
}

void add (float *num1, float *num2, float *result)
{
    *result = *num1 + *num2;
}

void substract (float *num1, float *num2, float *result)
{
    *result = *num1 - *num2;
}

void multiply (float *num1, float *num2, float *result)
{
    *result = *num1 * *num2;
}

void divide (float *num1, float *num2, float *result)
{
    if (*num2 != 0)
    {
        *result = *num1 / *num2;
    }
    else
    {
        printf("Error: Division by zero!");
        result = 0;
    }
    
}
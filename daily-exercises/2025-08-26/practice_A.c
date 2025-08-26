#include <stdio.h>

int global_var = 100;

int add (int a, int b)
{
    int sum = a + b;
    int temp = sum * 2;
    return temp;
}

int multiply(int x, int y)
{

    int product = x * y;
    int result = add(product, 5);
    return result;
}

int main(void)
{
    int num1 = 10;
    int num2 = 3;
    int final_result = multiply(num1, num2);
    printf("Result: %d\n", final_result);
    return 0;
}
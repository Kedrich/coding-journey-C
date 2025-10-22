#include <stdio.h>

int main(void)
{
    int decimal_num;
    int d1, d2, d3, d4, d5; 

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimal_num);

    d5 = decimal_num % 8;
    decimal_num = decimal_num / 8;

    d4 = decimal_num % 8;
    decimal_num = decimal_num / 8;

    d3 = decimal_num % 8;
    decimal_num = decimal_num / 8;

    d2 = decimal_num % 8;
    decimal_num = decimal_num / 8;

    d1 = decimal_num % 8;
    
    printf("In octal, your number is: %d%d%d%d%d\n", d1, d2, d3, d4, d5);

    return 0;
}
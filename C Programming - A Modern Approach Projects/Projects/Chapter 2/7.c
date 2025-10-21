#include <stdio.h>

int main(void)
{
    
    int dollar_amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amount);

    int twenty = dollar_amount / 20;
    dollar_amount = dollar_amount - (twenty * 20);
    int ten = dollar_amount / 10;
    dollar_amount = dollar_amount - (ten * 10);
    int five = dollar_amount / 5;
    dollar_amount = dollar_amount - (five * 5);
    int one = dollar_amount / 1;

    printf("$20 Bills: %d\n", twenty);
    printf("$10 Bills: %d\n", ten);
    printf("$5 Bills: %d\n", five);
    printf("$1 Bills: %d", one);

    return 0;
}
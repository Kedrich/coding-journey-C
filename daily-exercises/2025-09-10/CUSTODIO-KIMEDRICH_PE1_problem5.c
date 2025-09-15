#include <stdio.h>

int main(void)
{

    int payable, receive;
    printf("Enter the total amount payable: ");
    scanf("%d", &payable);
    printf("Payment received: ");
    scanf("%d", &receive);

    int change = receive - payable;
    printf("The total amount of change: %d\n", change);

    int thousand = change / 1000;
    change = change - (thousand * 1000);

    int fivehundred = change / 500;
    change = change - (fivehundred * 500);

    int twohundred = change / 200;
    change = change - (twohundred * 200);

    int onehundred = change / 100;
    change = change - (onehundred * 100);

    int fifty = change / 50;
    change = change - (fifty * 50);

    int twenty = change / 20;
    change = change - (twenty * 20);

    int ten = change / 10;
    change = change - (ten * 10);

    int five = change / 5;
    change = change - (five * 5);

    int one = change / 1;

    printf("Number of 1000 bills: %d\n", thousand);
    printf("Number of 500 bills: %d\n", fivehundred);
    printf("Number of 200 bills: %d\n", twohundred);
    printf("Number of 100 bills: %d\n", onehundred);
    printf("Number of 50 bills: %d\n", fifty);
    printf("Number of 20 bills: %d\n", twenty);
    printf("Number of 10 bills: %d\n", ten);
    printf("Number of 5 bills: %d\n", five);
    printf("Number of 1 bills: %d\n", one);

    return 0;
}
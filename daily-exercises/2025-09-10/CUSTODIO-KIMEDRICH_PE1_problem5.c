#include <stdio.h>

int changeCalculation(int payable, int receive)
{
    int change = receive - payable;
    return change;
}

int thousandBillCalculation(int change)
{
    int thousand = change / 1000;
    return thousand;
}

int fivehundredCalculation(int change)
{
    int fivehundred = (change / 500);
    return fivehundred;
}

int twohundredCalculation(int change)
{
    int twohundred = (change / 200);
    return twohundred;
}

int onehundredCalculation(int change)
{
    int onehundred = (change / 100);
    return onehundred;
}

int fiftyCalculation(int change)
{
    int fifty = (change / 50);
    return fifty;
}

int twentyCalculation(int change)
{
    int twenty = (change / 20);
    return twenty;
}

int tenCalculation(int change)
{
    int ten = (change / 10);
    return ten;
}

int fiveCalculation(int change)
{
    int five = (change / 5);
    return five;
}

int oneCalculation(int change)
{
    int one = (change / 1);
    return one;
}

int main(void)
{
    int payable, receive;
    printf("Enter the total amount payable: ");
    scanf("%d", &payable);
    printf("Payment received: ");
    scanf("%d", &receive);

    printf("\n");

    int change = changeCalculation(payable, receive);

    int thousand = thousandBillCalculation(change);
    change = change - (thousand * 1000);

    int fivehundred = fivehundredCalculation(change);
    change = change - (fivehundred * 500);

    int twohundred = twohundredCalculation(change);
    change = change - (twohundred * 200);

    int onehundred = onehundredCalculation(change);
    change = change - (onehundred * 100);

    int fifty = fiftyCalculation(change);
    change = change - (fifty * 50);

    int twenty = twentyCalculation(change);
    change = change - (twenty * 20);

    int ten = tenCalculation(change);
    change = change - (ten * 10);

    int five = fiveCalculation(change);
    change = change - (five * 5);

    int one = oneCalculation(change);
    change = change - (one * 1);

    printf("1000: %d\n", thousand);
    printf("500: %d\n", fivehundred);
    printf("200: %d\n", twohundred);
    printf("100: %d\n", onehundred);
    printf("50: %d\n", fifty);
    printf("20: %d\n", twenty);
    printf("10: %d\n", ten);
    printf("5: %d\n", five);
    printf("1: %d\n", one);

}
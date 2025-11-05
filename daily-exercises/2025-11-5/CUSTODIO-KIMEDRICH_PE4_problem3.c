#include <stdio.h>

int main(void)
{
    int age, type;
    float price;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter membership type (1-3): ");
    scanf("%d", &type);

    if (type < 1 || type > 3)
    {
        printf("Invalid membership type. Please enter a number between 1 and 3.\n");
        return 0;
    }

    if (age < 0 || age >= 123)
    {
        printf("Invalid age.\n");
        printf("If your age is 123 or older, you just set a new world record! Your gym membership is FREE!\n");
        return 0;
    }

    if (age < 18)
    {
        if (type == 1)
        {
            price = 100 - (100 * 0.20);
            printf("Price after discount: $%.0f (20%% discount applied to Basic membership)\n", price);
        }
        else if (type == 2)
        {
            price = 500 - (500 * 0.20);
            printf("Price after discount: $%.0f (20%% discount applied to Premium membership)\n", price);
        }
        else
        {
            price = 1000 - (1000 * 0.20);
            printf("Price after discount: $%.0f (20%% discount applied to VIP membership)\n", price);
        }
    }
    else if (age >= 18 && age <= 60)
    {
        if (type == 1)
        {
            price = 100;
            printf("Price after discount: $%.0f (No discount applied to Basic membership)\n", price);
        }
        else if (type == 2)
        {
            price = 500;
            printf("Price after discount: $%.0f (No discount applied to Premium membership)\n", price);
        }
        else
        {
            price = 1000;
            printf("Price after discount: $%.0f (No discount applied to VIP membership)\n", price);
        }
    }
    else
    {
        if (type == 1)
        {
            price = 100 - (100 * 0.30);
            printf("Price after discount: $%.0f (30%% discount applied to Basic membership)\n", price);
        }
        else if (type == 2)
        {
            price = 500 - (500 * 0.30);
            printf("Price after discount: $%.0f (30%% discount applied to Premium membership)\n", price);
        }
        else
        {
            price = 1000 - (1000 * 0.30);
            printf("Price after discount: $%.0f (30%% discount applied to VIP membership)\n", price);
        }
    }

    return 0;
}

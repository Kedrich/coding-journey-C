#include <stdio.h>

int main(void)
{

    int items;
    printf("Please enter the number of item/s you purchased: ");
    scanf("%d", &items);

    if (items < 0)
    {
        printf("Please enter a valid value.");
        return 0;
    }

    if (items > 10)
    {
        printf("Discount.");
    }
    else
    {
        printf("No discount.");
    }

    return 0;
}
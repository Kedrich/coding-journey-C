#include <stdio.h>

int main(void)
{

    printf("***Triangle Type Identifier***\n\n");

    int side1, side2, side3;
    printf("Enter side 1: "); 
    scanf("%d", &side1);
    printf("Enter side 2: ");
    scanf("%d", &side2);
    printf("Enter side 3: ");
    scanf("%d", &side3);

    if (side1 < 0 || side2 < 0 || side3 < 0)
    {
        printf("Invalid sides.\n");
        return 0;
    }

    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
    {
        printf("Not a valid triangle.\n");
        return 0;
    }

    if (side1 == side2 && side2 == side3)
    {
        printf("Triangle type: Equilateral");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("Triangle type: Isosceles");
    }
    else
    {
        printf("Triangle type: Scalene");
    }


    return 0;
}
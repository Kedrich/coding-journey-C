#include <stdio.h>
#include <math.h>

int main(void)
{
    float a,b,c;

    printf("Please enter the value of A: ");
    scanf("%f", &a);
    printf("Please enter the value of B: ");
    scanf("%f", &b);
    printf("Please enter the value of C: ");
    scanf("%f", &c);

    if(a + b <= c || a + c <= b || b + c <= a) { //To check if the triangle is valid or not.
        printf("Invalid triangle sides.\n");
        return 1;
    }

    int perimeter = perimeterCalculation(a,b,c);
    printf("Perimeter = %d m\n", perimeter);

    float semiperimeter = (a + b + c) / 2;
    float s = semiperimeter;

    float area = sqrt(s * ((s-a) * (s-b) * (s-c)));
    printf("Area = %.0f sq.m.", area);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main(void)
{

    float a, b, c;
    
    printf("Please input values for the 3 sides (in meters): ");
    scanf("%f %f %f", &a, &b, &c);

    int perimeter = a + b + c;
    printf("Perimeter = %d m\n", perimeter);

    float semiperimeter = (a + b + c) / 2;
    float s = semiperimeter;

    float area = sqrt(s * ((s-a) * (s-b) * (s-c)));
    printf("Area = %.0f sq.m.", area);

    return 0;
}
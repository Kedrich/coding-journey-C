#include <stdio.h>
#include <math.h>

int main(void)
{

    float const PI = 3.1416;
    float radius;
    float area, circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * pow(radius, 2);
    circumference = 2 * PI * radius;

    printf("Area: %.2f\n", area);
    printf("Circumeference: %.2f\n", circumference);


    return 0;
}
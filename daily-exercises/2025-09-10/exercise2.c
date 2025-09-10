#include <stdio.h>
#include <math.h>

int perimeterCalculation(int a, int b, int c)
{
    int perimeter = a + b + c;
    return perimeter;
}

float semiperimeterCalculation(float a, float b, float c)
{
    float semiperimeter = (a+b+c) / 2;
    return semiperimeter;  
}

float areaCalculation(float a, float b, float c, float semiperimeter)
{
    float s = semiperimeter;
    float area = sqrt(s * ((s-a)*(s-b)*(s-c)));
    return area;
}

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

    float semiperimeter = semiperimeterCalculation(a,b,c);

    float area = areaCalculation(a,b,c,semiperimeter);
    printf("Area = %.2f sq.m.", area);

    return 0;
}
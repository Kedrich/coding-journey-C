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
    int a,b,c;

    printf("Please enter the value of A: ");
    scanf("%d", &a);
    printf("Please enter the value of B: ");
    scanf("%d", &b);
    printf("Please enter the value of C: ");
    scanf("%d", &c);

    int perimeter = perimeterCalculation(a,b,c);
    printf("Perimeter = %d m\n", perimeter);

    float semiperimeter = semiperimeterCalculation(a,b,c);

    int area = areaCalculation(a,b,c,semiperimeter);
    printf("Area = %d sq.m.", area);

    return 0;
}
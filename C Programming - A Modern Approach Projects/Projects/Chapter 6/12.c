#include <stdio.h>

int main(void)
{
    double epsilon, e = 1.0;
    double factorial = 1.0;
    double term;
    int i = 1;

    printf("Enter epsilon (small value): ");
    scanf("%lf", &epsilon);

    do
    {
        factorial *= i;
        term = 1.0 / factorial;
        e += term;
        i++;
    } while (term >= epsilon);

    printf("Approximation of e: %.10f\n", e);
    printf("Number of terms used: %d\n", i - 1);

    return 0;
}
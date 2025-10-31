#include <stdio.h>

int main(void)
{
    int n;
    double e = 1.0;
    double factorial = 1.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        e += 1.0 / factorial;
    }

    printf("Approximation of e: %.10f\n", e);

    return 0;
}

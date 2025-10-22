#include <stdio.h>

int main(void)
{
    int d1, f1, f2, f3, f4, f5, s1, s2, s3, s4, s5, s6;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &f1, &f2, &f3, &f4, &f5, &s1, &s2, &s3, &s4, &s5, &s6);

    int sum_first, sum_second, total;

    sum_first = f1 + f3 + f5 + s2 + s4 + s6;
    sum_second = d1 + f2 + f4 + s1 + s3 + s5;
    total = 3 * sum_first + sum_second;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}

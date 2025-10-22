#include <stdio.h>

int main(void)
{
    int d1, f1, f2, f3, f4, f5, s1, s2, s3, s4, s5;

    printf("Enter the first (single) digit: ");
    scanf("%d", &d1);

    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &f1, &f2, &f3, &f4, &f5);

    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &s1, &s2, &s3, &s4, &s5);

    int sum_first, sum_second, total;

    sum_first = d1 + f2 + f4 + s1 + s3 + s5;
    sum_second = f1 + f3 + f5 + s2 + s4;
    total = 3 * sum_first + sum_second;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}

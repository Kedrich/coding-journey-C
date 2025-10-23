#include <stdio.h>

int main(void)
{
    int d1, f1, f2, f3, f4, f5, s1, s2, s3, s4, s5, d12;
    int sum_first, sum_second, total, check_digit;

    printf("Enter the 12 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &d1, &f1, &f2, &f3, &f4, &f5, &s1, &s2, &s3, &s4, &s5, &d12);

    sum_first = d1 + f2 + f4 + s1 + s3 + s5;
    sum_second = f1 + f3 + f5 + s2 + s4;
    total = 3 * sum_first + sum_second;
    check_digit = 9 - ((total - 1) % 10);

    if (d12 == check_digit)
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return 0;
}

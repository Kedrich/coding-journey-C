#include <stdio.h>

int main(void)
{

    FILE *sum_file;

    sum_file = fopen("numbers.txt", "wt");
    
    int num1, num2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    fprintf(sum_file, "Sum of numbers from file: %d", sum);

    return 0;
}
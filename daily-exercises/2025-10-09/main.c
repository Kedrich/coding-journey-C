#include <stdio.h>

int main(void)
{

    FILE *input, *output;

    input = fopen("data.in", "rt");
    output = fopen("output.out", "wt");

    int num1, num2, sum;
    fscanf(input, "%d %d", &num1, &num2);
    sum = num1 + num2;
    fprintf(output, "The sum of the two numbers are: %d", sum);
    printf("%d", sum);

    fclose(input);
    fclose(output);



    return 0;
}
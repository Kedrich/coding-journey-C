#include <stdio.h>

int main(void)
{

    float nextNum, sum = 0.0;
    int count = 0, totalNumbers;

    printf("How many numbers? ");
    scanf("%d", &totalNumbers);

    while(count < totalNumbers)
    {
        printf("Enter number: ");
        scanf("%f", &nextNum);
        sum += nextNum;
        count++;
    }

    float average = sum / totalNumbers;

    printf("The sum is: %.2f\nThe average is %.2f", sum, average);

    return 0;
}
/*In this practice set. I will try to code all the example codes in our Lesson 3 in Computer Programming PART 1*/


#include <stdio.h>

int main(void)
{

    int totalNumbers;
    int sum = 0;
    int count = 0;
    int nextNum;

    printf("Please enter the total of numbers: ");
    scanf("%d", &totalNumbers);

    while(count < totalNumbers)
    {
        printf("Please enter a number for nextNum: ");
        scanf("%d", &nextNum);  
        sum = nextNum + sum;
        count++;
    }

    printf("Value for SUM: %d\n", sum);
    printf("Value of mean: %d", sum/count);

    return 0;
}

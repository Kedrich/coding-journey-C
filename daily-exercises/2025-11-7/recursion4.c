#include <stdio.h>

int countSum(int number)
{

    if(number < 0)
    {
        return 0;
    }
    else
    {
        return number + countSum(number - 1);
    }

}

int main(void)
{

    int number;

    printf("Input the last number of the range starting from 1 : ");
    scanf("%d", &number);

    int sum = countSum(number);

    printf("The sum of the number from 1 to %d : \n", number);
    printf("%d", sum);

    return 0;
}
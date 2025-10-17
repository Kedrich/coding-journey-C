#include <stdio.h>

int main()
{
    

    int num1, num2;

    scanf("%d", &num1);

    if(num1 % 4 == 0)
    {
        printf("The number %d is Leap Year!", num1);
    }
    else
    {
        printf("The number %d is not a Leap Year!", num1);
    }


    return 0;
}

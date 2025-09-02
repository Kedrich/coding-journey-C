#include <stdio.h>

int main(void)
{
    
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are elligible to vote! Since your age is %d", age);
    }
    else
    {
        printf("Sadly, you are not elligible to vote. Sicne your age is %d", age);
    }


    return 0;
}
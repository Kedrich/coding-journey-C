#include <stdio.h>

int main(void)
{

    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age == 0 || age < 0)
    {
        printf("Please enter a valid age.");
        return 0;
    }

    if (age >= 18)
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("You are not eligible to vote.");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{

    int score;
    printf("Enter score: ");
    scanf("%d", &score);

    if (score < 0)
    {
        printf("Please enter a valid score.");
        return 0;
    }

    if (score >= 50)
    {
        printf("You passed.");
    }
    else
    {
        printf("You did not passed.");
    }

    return 0;
}
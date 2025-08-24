#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

//This one po is a random guessing game po


int randomNum (int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

int main(void)
{
    srand(time(NULL));
    
    int guess;
    int count = 0;
    int result;

    result = randomNum(1, 100);

    printf("*** NUMBER GUESSING GAME! ***\n");
    printf("I'm thinking of a number between 1 and 100!\n\n");

    printf("Please enter your guess number: ");
    scanf("%d", &guess);
    count++; 
    
    while(guess != result)
    {
        if (guess < result)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > result)
        {
            printf("Too high! Try again.\n");
        }


        printf("Please enter your guess number: ");
        scanf("%d", &guess);
        count++; 
    }
    

    printf("That's correct! The number was %d\n", result);
    printf("Congratulations! You won the Guessing Game in %d attempts!\n", count);

    return 0;
}
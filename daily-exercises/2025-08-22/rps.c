#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* displayMenu(int);
int getPlayerChoice(void);
int getComputerChoice(void);
char* determineWinner(int, int);
void displayResults(int, int, char*);
char askPlayerAgain(void);

int main(void)
{
    srand(time(NULL));

    int playerChoice;
    int computerChoice;
    int playerScore;
    int computerScore;
    char *result;
    char playAgain;

    do
    {
        playerScore = 0;
        computerScore = 0;

        printf("*** Welcome to Rock Paper & Scissors Ultimate! ***\n");

        while (playerScore < 3 && computerScore < 3)
        {
            playerChoice = getPlayerChoice();
            computerChoice = getComputerChoice();
            result = determineWinner(playerChoice, computerChoice);
            displayResults(playerChoice, computerChoice, result);

            if (strcmp(result, "Player") == 0)
                playerScore++;
            else if (strcmp(result, "Computer") == 0)
                computerScore++;

            printf("Score => Player: %d | Computer: %d\n\n", playerScore, computerScore);
        }

        if (playerScore == 3)
            printf("Congratulations! You are the champion!\n");
        else
            printf("Computer is the champion! Better luck next time.\n");

        playAgain = askPlayerAgain();

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}

int getPlayerChoice(void)
{
    int playerChoice;

    printf("Display Menu:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &playerChoice);

    while (playerChoice < 1 || playerChoice > 3)
    {
        printf("Invalid Choice! Please enter 1, 2, or 3 only: ");
        scanf("%d", &playerChoice);
    }

    return playerChoice;
}

int getComputerChoice(void)
{
    int min = 1;
    int max = 3;
    return (rand() % (max - min + 1)) + min;
}

char* determineWinner(int playerChoice, int computerChoice)
{
    if (playerChoice == computerChoice)
    {
        return "Tie";
    }
    else if ((playerChoice == 1 && computerChoice == 3) ||
             (playerChoice == 2 && computerChoice == 1) ||
             (playerChoice == 3 && computerChoice == 2))
    {
        return "Player";
    }
    else
    {
        return "Computer";
    }
}

char* displayMenu(int choice)
{
    if (choice == 1)
    {
        return "Rock";
    }
    else if (choice == 2)
    {
        return "Paper";
    }
    else if (choice == 3)
    {
        return "Scissors";
    }
    else
    {
        return "Invalid";
    }
}

void displayResults(int playerChoice, int computerChoice, char* winner)
{
    printf("You chose: %s\n", displayMenu(playerChoice));
    printf("Computer chose: %s\n", displayMenu(computerChoice));

    if (strcmp(winner, "Tie") == 0)
    {
        printf("It's a tie!\n");
    }
    else if (strcmp(winner, "Player") == 0)
    {
        printf("You win this round!\n");
    }
    else
    {
        printf("Computer wins this round!\n");
    }
}

char askPlayerAgain(void)
{
    char choice;
    printf("Do you want to play again? (y/n): \n\n");
    scanf(" %c", &choice);
    return choice;
}

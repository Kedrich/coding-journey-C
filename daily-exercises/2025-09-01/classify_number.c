#include <stdio.h>
#include <stdbool.h>

void classifyNumber(int);
bool wantToTryAgain(void);

int main(void)
{
    int number;
    int result;

    do
    {
        while (true)
        {
            printf("Please enter a number: ");
            result = scanf("%d", &number);

            if (result == 1)
            {
                classifyNumber(number);
                break;
            }
            else
            {
                printf("Invalid input! Please enter a valid integer.\n");
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF) { }
            }
        }
    } while (wantToTryAgain());

    printf("Goodbye!\n");
    return 0;
}

void classifyNumber(int n)
{
    if (n == 0)
    {
        printf("Zero\n");
    }
    else if (n < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Positive\n");
    }
}

bool wantToTryAgain(void)
{
    char answer;

    while (true)
    {
        printf("Do you want to try again? (y/n): ");
        if (scanf(" %c", &answer) != 1)
        {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) { }
            continue;
        }

        if (answer == 'y' || answer == 'Y')
        {
            return true;
        }
        else if (answer == 'n' || answer == 'N')
        {
            return false;
        }
        else
        {
            printf("Invalid choice. Please type y or n.\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) { }
        }
    }
}

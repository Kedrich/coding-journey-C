#include <stdio.h>

int main(void)
{

    char letter;
    printf("Please enter a letter (a-z or A-Z): ");
    scanf(" %c", &letter);

    if(letter >= 'a' && letter <= 'z')
    {
        printf("The letter %c is lowercase.", letter);
    }
    else if (letter >= 'A' && letter <= 'Z')
    {
        printf("The letter %c is uppercase.", letter);
    }
    else
    {
        printf("Please enter a valid letter.");
    }

    return 0;
}
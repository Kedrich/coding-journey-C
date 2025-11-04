#include <stdio.h>

int main(void)
{

    char ch;
    printf("Please enter a leter: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Letter %c is a vowel.", ch);
    }
    else
    {
        printf("Letter %c is a consonant.", ch);
    }

    return 0;
}
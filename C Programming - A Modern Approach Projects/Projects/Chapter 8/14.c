#include <stdio.h>
#define MAX_MSG 100

int main(void)
{

    char message[MAX_MSG];
    char ch;
    int i = 0;

    printf("Enter a sentence: ");
    
    while ((ch = getchar()) != '\n' && i < MAX_MSG)
    {
        message[i] = ch;
        i++;
    }

    
    

    return 0;
}
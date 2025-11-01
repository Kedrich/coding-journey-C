#include <stdio.h>
#include <ctype.h>

#define MAX_MSG 100 

int main(void) {
    char message[MAX_MSG];
    char ch;
    int i = 0;

    printf("Enter message: ");

    while ((ch = getchar()) != '\n' && i < MAX_MSG) {
        message[i] = ch;
        i++;
    }

    printf("In B1FF-speak: ");

    for (int j = 0; j < i; j++) 
    {

        ch = toupper(message[j]);

        switch (ch) {
            case 'A':
                printf("4");
                break;
            case 'B':
                printf("8");
                break;
            case 'E':
                printf("3");
                break;
            case 'I':
                printf("1");
                break;
            case 'O':
                printf("0");
                break;
            case 'S':
                printf("5");
                break;
            default:
                printf("%c", ch);
                break;
        }
    }

    for (int j = 0; j < 10; j++) {
        printf("!");
    }
    printf("\n");

    return 0;
}
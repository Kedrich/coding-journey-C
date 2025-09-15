#include <stdio.h>

int main(void)
{
    int inputSeconds;
    printf("Enter total of seconds: ");
    scanf("%d", &inputSeconds);

    int hours = inputSeconds / 3600;
    int minutes = (inputSeconds % 3600) / 60;
    int seconds = inputSeconds - ((hours * 3600) + (minutes * 60));

    printf("That is %d hours, %d minutes, and %d seconds.", hours, minutes, seconds);

    return 0;
}
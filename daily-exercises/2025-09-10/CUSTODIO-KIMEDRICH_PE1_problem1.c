#include <stdio.h>

int secondtohoursConverter(int inputSeconds)
{
    int hours = inputSeconds / 3600;
    return hours;
}

int secondtominutesConverter(int inputSeconds)
{
    int minutes = (inputSeconds % 3600) / 60;
    return minutes;
}

int remainingSeconds(int inputSeconds, int hours, int minutes)
{
    int seconds = inputSeconds - ((hours * 3600) + (minutes * 60));
    return seconds;
}

int main(void)
{

    int inputSeconds;
    printf("Enter total of seconds: ");
    scanf("%d", &inputSeconds);

    int hours = secondtohoursConverter(inputSeconds);
    int minutes = secondtominutesConverter(inputSeconds);
    int seconds = remainingSeconds(inputSeconds, hours, minutes);

    printf("%d hour/s, %d minute/s, %d second/s.", hours, minutes, seconds);

    return 0;
}
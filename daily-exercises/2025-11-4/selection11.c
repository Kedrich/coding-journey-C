#include <stdio.h>

int main(void)
{

    int speed;
    printf("Enter your speed: ");
    scanf("%d", &speed);

    if (speed < 0)
    {
        printf("Please enter a valid speed.");
        return 0;
    }

    if (speed > 60)
    {
        printf("Speeding.");
    }
    else
    {
        printf("Safe.");
    }

    return 0;
}
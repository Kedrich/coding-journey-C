#include <stdio.h>

int main(void)
{

    int days, starting_day;
    int i, day;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week: (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    if (starting_day < 1)
        starting_day = 1;
    else if (starting_day > 7)
        starting_day = 7;

    for(i = 1; i < starting_day; i++)
    {
        printf("   ");
    }

    for(day = 1; day <= days; day++)
    {
        printf("%3d", day);

        if((day + starting_day - 1) % 7 == 0)
        {
            printf("\n");
        }
    }

    if ((days + starting_day - 1) % 7 != 0)
    {
        printf("\n");
    }

    return 0;
}
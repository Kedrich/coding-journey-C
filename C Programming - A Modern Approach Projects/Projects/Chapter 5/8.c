#include <stdio.h>

int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    int dt1, dt2, dt3, dt4, dt5, dt6, dt7, dt8;
    dt1 = 8 * 60;       // 8:00 a.m.
    dt2 = 9 * 60 + 43;  // 9:43 a.m.
    dt3 = 11 * 60 + 19; // 11:19 a.m.
    dt4 = 12 * 60 + 47; // 12:47 p.m.
    dt5 = 14 * 60;      // 2:00 p.m.
    dt6 = 15 * 60 + 45; // 3:45 p.m.
    dt7 = 19 * 60;      // 7:00 p.m.
    dt8 = 21 * 60 + 45; // 9:45 p.m.

    int input = hour * 60 + minute;

    if (input < dt1 + (dt2 - dt1) / 2)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if (input < dt2 + (dt3 - dt2) / 2)
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if (input < dt3 + (dt4 - dt3) / 2)
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if (input < dt4 + (dt5 - dt4) / 2)
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if (input < dt5 + (dt6 - dt5) / 2)
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if (input < dt6 + (dt7 - dt6) / 2)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if (input < dt7 + (dt8 - dt7) / 2)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}

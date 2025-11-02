#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    int input = hour * 60 + minute;

    int departure[] = {480, 583, 679, 767, 840, 945, 1140, 1305};

    int arrival[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    int closest_index = 0;
    int min_diff = abs(input - departure[0]);

    for (int i = 1; i < 8; i++) {
        int diff = abs(input - departure[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_index = i;
        }
    }

    int dep_hr = departure[closest_index] / 60;
    int dep_min = departure[closest_index] % 60;
    int arr_hr = arrival[closest_index] / 60;
    int arr_min = arrival[closest_index] % 60;

    printf("Closest departure time is %d:%02d ", dep_hr % 12 == 0 ? 12 : dep_hr % 12, dep_min);
    printf(dep_hr < 12 || dep_hr == 24 ? "a.m." : "p.m.");
    printf(", arriving at %d:%02d ", arr_hr % 12 == 0 ? 12 : arr_hr % 12, arr_min);
    printf(arr_hr < 12 || arr_hr == 24 ? "a.m.\n" : "p.m.\n");

    return 0;
}

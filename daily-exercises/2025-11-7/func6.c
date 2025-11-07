#include <stdio.h>

int main(void)
{

    int x = 1;
    printf("Outer x: %d\n", x);
    {
        int x = 2;
        printf("Inner x: %d\n", x);
    }

    printf("Outer x (checked): %d", x);

    return 0;
}
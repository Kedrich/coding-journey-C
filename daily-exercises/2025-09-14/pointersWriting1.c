#include <stdio.h>

int main(void)
{

    /*
    
    PROBLEM 1

    int num = 25;
    int *ptr = &num;

    printf("%d", *ptr);*/

    int score = 100;
    int *ptr = &score;

    printf("%d\n", *ptr);

    *ptr = 85;
    printf("%d", *ptr);

    return 0;
}
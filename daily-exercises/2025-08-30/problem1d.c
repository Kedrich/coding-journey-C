#include <stdio.h>

int series(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + series(n-1);
    }
}
/*  (5) = 10 + 5 = 15
    (4) = 6 + 4 = 10
    (3) = 3 + 3 = 6
    (2) = 1 + 2 = 3
    (1) = 0 + 1 = 1
    (0) = 0*/


int main(void)
{
    printf("%d", series(5));
    return 0;
}
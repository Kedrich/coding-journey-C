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

int main(void)
{
    printf("%d", series(5));
    return 0;
}
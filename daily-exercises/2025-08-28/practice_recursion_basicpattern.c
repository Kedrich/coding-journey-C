#include <stdio.h>

int mystery1(int n)
{
    if (n == 0)
    {
        return 2;
    }
    else
    {
        return 5 + mystery1(n-1);
    }
}

int main(void)
{
    printf("%d", mystery1(3));
    return 0;
}

/*  mystery1(3) = 5
    mystery(2) = 5
    mystery(1) = 5
    mystery(0) = 2
    5 + 5 + 5 + 2 = 17*/
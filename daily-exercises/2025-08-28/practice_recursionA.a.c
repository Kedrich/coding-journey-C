#include <stdio.h>

int fun(int n)
{
    if (n == 0)
    {
        return 1;
    }

    else
    {
        return 7 + fun(n-2);
    }
}

int main(void)
{   
    printf("%d", fun(4));
    return 0;
}

/*  fun(4) = 7
    fun(2) = 7
    fun(0) = 1
    7 + 7 + 1 = 15*/
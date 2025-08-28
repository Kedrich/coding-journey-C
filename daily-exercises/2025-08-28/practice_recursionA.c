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

/*  fun(4)
    fun(2) = 9
    fun(0) = 7
    return 1*/
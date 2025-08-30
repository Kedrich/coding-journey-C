#include <stdio.h>

int fun(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1 + fun(n/3);
    }
}

int main(void)
{   
    printf("%d", fun(27));
    return 0;
}

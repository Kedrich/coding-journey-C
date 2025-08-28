#include <stdio.h>

int mystery2(int n)
{
    if (n <= 1)
    {
        return 3;
    }
    else
    {
        return 4 + mystery2(n - 2);
    }
}

int main(void)
{
    printf("%d", mystery2(6));
    return 0;
}

/*  mystery2(6) = 4
    mystery2(4) = 4
    mystery2(2) = 4
    mystery2(0) = 3
    4 + 4 + 4 + 3 = 15
*/
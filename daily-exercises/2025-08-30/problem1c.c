#include <stdio.h>

int strange(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 2 * strange(n - 1);
    }
}

//5 = 4, 4 = 3, 3 = 2, 2 = 1, 1 = 0, 0 = 1
// 1 * 2 = 2 * 2 = 4 * 2 = 8 * 2 = 16 * 2 = 32

int main(void)
{
    printf("%d", strange(5));
    return 0;
}
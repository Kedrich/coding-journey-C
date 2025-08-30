#include <stdio.h>

int mystery(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + mystery(n / 10);
    }

    //472 = 2, 47 = 7, 4 = 4, 0 = 0

}

int main(void)
{
    printf("%d", mystery(472));
    return 0;
}

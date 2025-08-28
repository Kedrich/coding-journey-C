#include <stdio.h>

void countdown (int n) //5
{
    if (n == 0)
    {
        printf("Blast Off!");
        return;
    }
    printf("%d\n", n);
    countdown(n - 1);
}

int main(void)
{
    countdown(5);
    return 0;
}
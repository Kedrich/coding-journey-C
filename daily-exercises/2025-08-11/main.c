#include <stdio.h>

int fun(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return  1 + fun(n-1);
    }  // <- This closes the else, but it also closes the whole function.
}

int main(void)  // <- This is inside fun(), which is not allowed.
{
    int n = 3;
    printf("%d", fun(n));
    return 0;
}
// <- This last brace doesn't match properly

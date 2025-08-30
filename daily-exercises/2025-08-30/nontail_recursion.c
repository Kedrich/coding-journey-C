#include <stdio.h>

/*void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    fun(n-1);
    printf("%d ", n);
}

int main()
{
    fun(3);
    return 0;
}*/

int fun(int n)
{
    if (n==1)
    {
        return 0;
    }
    else
    {
        return 1 + fun(n/2); //
    }
}

int main(void)
{   
    printf("%d ", fun(8));
    return 0;
}
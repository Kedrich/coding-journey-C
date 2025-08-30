#include <stdio.h>

int ite(int n)
{
    int res = 1;
    while (n != 0) //5
    {
        res = res*n;
        n--;
    }
    return res;
}

int recur(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * recur(n-1);
    }

}

int main(void)
{
    int result_ite;
    result_ite = ite(5);
    printf("%d ", result_ite);

    int result_recur;
    result_recur = recur(5);
    printf("%d ", result_recur);

    return 0;
}
#include <stdio.h>

/*void f(int *p, int *q)
{
    p = q;
    *p = 2;
}

int i = 0, j = 1;
int main(void)
{
    f(&i, &j);
    printf("%d %d\n", i ,j);
    return 0;
}*/

int main(void)
{

    int i = 0, j = 1;
    int *p = &i, *q = &j;

    p = q;
    *p = 2;

    printf("%d %d", i, j);

    return 0;
}
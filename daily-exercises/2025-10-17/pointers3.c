#include <stdio.h>

int main(void)
{
    /*
    BASE:

    int i = 10, j = 20;

    int *p, *q;

    p = &i;

    q = &j;

    printf("%d ", *p);
    printf("%d ", *q);
    */

    //Homework:

    int i = 1;
    int *p = &i, *q; //p = 1000
    q = p; //q = p = 1000
    *q = 5;
    printf("%d", *p);

    return 0;
}
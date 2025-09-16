#include <stdio.h>

int main(void)
{
    /*int i = 10; //Address: 1000

    int *p, *q;

    p = &i; //Address of p is now containing 1000
    q = p; //Address of q is now containing 1000

    printf("%d %d", *p, *q);*/

    //Note: q = p is not same as *q and *p


    /*int i = 10, j = 20;
    int *p, *q;

    p = &i;
    q = &j;
    *q = *p

    return 0;*/

    int *q;
    int i = 1;
    int *p = &i; //p = 1000 (10)
     q = p; //q = 1000 (address of p (10))
    *q = 5; //1000 is now 5 since q = p and *p = &i
    printf("%d", *p);


    return 0;
}




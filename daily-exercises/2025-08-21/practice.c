#include <stdio.h>


//0000000000


int func (int num)
{

    int count = 0;
    while(num)
    {
        count++;
        num >>= 1;
    }
    return (count);

}

int main (void)
{

    int count;
    count = func(435);
    printf("%d", count);
    return 0;

}
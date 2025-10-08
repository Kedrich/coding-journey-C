#include <stdio.h>

int main(void)
{

    int a[2][2][2] = 
    {{{1,2}, 
    {3,4}}, 
    {{5,6}, 
    {7,8}}}, *p;
    
    printf("%d", **(*(a+1)+1));

    return 0;
}
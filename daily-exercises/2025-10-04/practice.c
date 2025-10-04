#include <stdio.h>

int main(void)
{

    int a,b,c;

    printf("Please input 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(((a + b) > c) && ((a + c) > b) && ((b + c) > a))
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    
    return 0;
}
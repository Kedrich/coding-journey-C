#include <stdio.h>
#include <math.h>

void make_positive(int *ptr)
{
    *ptr = *ptr * (-1);
}

int main(void)
{

    int x;

    printf("Please enter a negative number: ");
    scanf("%d", &x);

    if (x < 0)
    {
    make_positive(&x);
    printf("%d", x);
    }
    else
    {
        printf("Try again!");
    }

    return 0;
}



/*

PROBLEM 3

void add_ten(int *ptr)  
{
    *ptr = *ptr + 10;   
}


int main(void)
{
    int x = 5;
    
    add_ten(&x);        
    
    printf("%d", x);    
    
    return 0;
}
*/
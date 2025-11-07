#include <stdio.h>

void menu(void)
{
    printf("***50 Natural Numbers using Recursion.***\n\n");
}

int countFifty(int n)
{
    if (n <= 50)
    {
        printf(" %d", n);
        countFifty(n+1);
    }
}

int main(void)
{ 
    int n = 1;
	printf("\n\n Recursion : print first 50 natural numbers :\n");
	printf("-------------------------------------------------\n"); 
	printf(" The natural numbers are :");
    countFifty(n);
    printf("\n\n");
    return 0;
}
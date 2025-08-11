#include <stdio.h>

int fact(int n)
{

    if(n == 1)
    {
        return 1;
    }

    else
    {
        return n * fact(n-1);
    }

}

int main(void)
{

    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    printf("The factorial of that number is: %d", fact(n));


}
/*fact()
{

    if() //if statement is the base case. Need to specify SECOND
    {

    }

    else //else statement is the recursive procedure. Need to specify FIRST
    {

    }

}*/
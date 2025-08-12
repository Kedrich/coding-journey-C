#include <stdio.h>
#include <windows.h>

int countdown(int n)
{

    if (n == 0)
    {
        return 0;
    }

    else
    {
     printf("%d ", n);  
     countdown(n-1); 
    }

}

int main(void)
{

    int count_down;
    printf("Please enter a number for a countdown: ");
    scanf("%d", &count_down);
    printf("%d ", countdown(count_down));
    return 0;

}


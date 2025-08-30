#include <stdio.h>

void odd();
void even();
int n = 1;

int main(void)
{

    odd();

}

void odd ()
{

    if (n <= 10)
    {
        printf("%d ", n + 1);
        n++;
        even();
    }
    return;

}

void even ()
{   
    if (n % 2 == 0)
    {
        printf("%d ", n - 1);
        n++;
        odd();
    }
    return;
}   

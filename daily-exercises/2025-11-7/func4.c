#include <stdio.h>

int global = 100;

void function1(void)
{
    printf("f1: %d\n", global);
    global = 300;
    printf("f1 modified: %d\n", global);
}

void function2(void)
{
    printf("f2: %d\n", global);
}

int main(void)
{

    printf("main: %d\n", global);
    function1();
    function2();
    return 0;
}
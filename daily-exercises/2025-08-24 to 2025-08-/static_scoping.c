#include <stdio.h>

int fun1(int);
int fun2(int);

int a = 5;
int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d", a); //Value is 25
}

int fun1(int b)
{
    b = b + 10; // 10 + 10
    b = fun2(b); // b = 20
    return b;
}

int fun2(int b)
{
    int c;
    c = a + b; //? + 20, we gonna use the global variable which is a = 5, therefore it will be 5 + 20
    return c;
}
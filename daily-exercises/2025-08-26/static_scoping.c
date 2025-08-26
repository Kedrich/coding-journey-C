#include <stdio.h>

/*int fun1(int);
int fun2(int);

int a = 5;
int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d", a); 
}

int fun1(int b)
{
    b = b + 10; 
    b = fun2(b); 
    return b;
}

int fun2(int b)
{
    int c;
    c = a + b; 
    return c;
}*/

int a, b;

void print();
int fun1();
void fun2();

int main()
{
    a = fun1();
    /*Static Scoping a = 2
      Dynamic Scoping a = ? */
    fun2();
}

int fun1()
{
    int a, c;
    a = 0; b = 1; c = 2; //Step 1: Local a = 0, c = 2; Global b = 1
    return c;
}

void fun2()
{
    int b;
    a = 3; b = 4; //Step 2: Global a = 3, c = 2, Local = 4
    print();
}

void print()
{
    printf("%d %d", a ,b);
    /*Static Function: 3, 1 because it will print the global variable
      Dynamic Function: 3, 4*/
}
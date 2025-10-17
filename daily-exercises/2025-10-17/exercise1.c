#include <stdio.h>

int main(void)
{

    int m = 10, n, o;
    int *z = &m;

    printf(" Pointer : Show the basic declaration of pointer :\n");
    printf("-------------------------------------------------------\n");
    printf(" Here is m=10, n and o are two integer variable and *z is an integer\n\n");
    printf("z stores the address of m = %p\n\n", z);
    printf("*z store the value of m = %d\n\n", *z);
    printf("&m is the address of m = %p\n\n", &m);
    printf("&n is the address of m = %p\n\n", &n);
    printf("&o is the address of m = %p\n\n", &o);
    printf("&z is the address of m = %p\n\n", &z);


    return 0;
}
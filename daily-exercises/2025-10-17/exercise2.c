#include <stdio.h>

int main(void)
{

    int m = 29;
    int *ab = &m;

    
    printf("Address of m: %p\n", &m);
    printf(" Value of m: %d\n\n", m);
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab: %p\n", &ab);
    printf("Content of pointer ab: %d\n\n", *ab);

    m = 34;

    printf("The value of m assigned to %d now\n", m);
    printf("Address of pointer  ab: %p\n", &ab);
    printf("Content of pointer ab: %d\n\n", *ab);

    *ab = 7;

    printf("The pointer variable ab is assigned with the value %d now.\n", *ab);
    printf("Address of m: %p\n", &m);
    printf("Value of m: %d", m);


    return 0;
}
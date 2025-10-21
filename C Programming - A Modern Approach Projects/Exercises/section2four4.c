#include <stdio.h>

int main() {
    // 1. Declare several int and float variables
    //    Notice they are NOT initialized.
    int a;
    int b;
    float x;
    float y;

    // 2. Print their values
    printf("Value of uninitialized int 'a': %d\n", a);
    printf("Value of uninitialized int 'b': %d\n", b);
    printf("Value of uninitialized float 'x': %f\n", x);
    printf("Value of uninitialized float 'y': %f\n", y);

    return 0;
}
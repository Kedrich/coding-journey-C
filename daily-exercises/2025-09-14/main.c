#include <stdio.h>

int main(void) {
    int a = 25;
    int b = 50;
    int *ptr1 = &a;
    int *ptr2 = &b;
    
    printf("1: %d\n", a); //25
    printf("2: %d\n", *ptr1); //25
    printf("3: %d\n", *ptr2); //50
    
    *ptr1 = 100; 
    
    printf("4: %d\n", a);//100
    printf("5: %d\n", *ptr1);//100
    
    return 0;
}
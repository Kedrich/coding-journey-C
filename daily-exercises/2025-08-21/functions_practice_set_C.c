#include <stdio.h>

int divide_and_store (int *first, int *second)
{
    int original = *first;
    int qoutient = *first / *second;
    int remainder = *first % *second;

    *first = qoutient;
    *second = remainder;

    return original;
    
}

int main (void)
{

    int first = 17;
    int second = 5;
    int original;
    original = divide_and_store(&first, &second);
    printf("Original: %d\nQoutient: %d\nRemainder: %d", original, first, second);
    return 0;

}
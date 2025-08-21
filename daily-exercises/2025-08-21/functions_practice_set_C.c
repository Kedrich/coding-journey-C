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

    int first;
    int second;
    int original;

    printf("Please enter your first number: ");
    scanf("%d", &first);
    printf("Please enter your second number: ");
    scanf("%d", &second);

    original = divide_and_store(&first, &second);
    printf("Original: %d\nQoutient: %d\nRemainder: %d", original, first, second);
    return 0;

}
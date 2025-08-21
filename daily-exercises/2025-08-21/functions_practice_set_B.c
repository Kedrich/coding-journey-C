#include <stdio.h>

int multiply_by_factor (int *, int);

int main(void)
{
    int num = 4;
    int factor = 3;
    int original;
    
    original = multiply_by_factor(&num, factor);  // Capture return value
    printf("Original: %d, Modified: %d", original, num);  // Fix format string
    
    return 0;  // Add return statement
}

int multiply_by_factor (int *num, int factor)
{
    int original = *num;        // Store original value
    *num = (*num) * factor;     // Multiply pointed value by factor
    return original;            // Return original value
}
#include <stdio.h>

int multiply_by_factor (int *, int);

int main(void)
{
    int num = 4;
    int factor = 3;
    int original;
    
    original = multiply_by_factor(&num, factor);  
    printf("Original: %d, Modified: %d", original, num);  
    
    return 0;
}

int multiply_by_factor (int *num, int factor)
{
    int original = *num;        
    *num = (*num) * factor;     
    return original;            
}
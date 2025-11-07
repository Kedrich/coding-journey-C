#include <stdio.h>

void process(int param)
{
    param *= 2;
    printf("%d\n", param);
}

int main(void)
{
    
    int param = 5;
    process(param);
    printf("%d", param);
    
    return 0;
}
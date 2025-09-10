#include <stdio.h>

int main()
{

    int num = 25;
    int *ptr;
    ptr = &num;

    printf("%d\n", num);
    printf("%p\n",&num);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    return 0;
}
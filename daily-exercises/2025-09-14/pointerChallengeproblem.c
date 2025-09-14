#include <stdio.h>

void find_max(int *ptr1, int *ptr2, int *ptr3)
{

    int max = *ptr1;

    if(*ptr2 > max)
    {
        max = *ptr2;
    }

    if (*ptr3 > max)
    {
        max = *ptr3;
    }
    
    *ptr1 = max;

}

int main(void)
{

    int num1, num2, num3;
    printf("Please input 3 numbers (seperate them with spaces): ");
    scanf("%d %d %d", &num1, &num2, &num3);

    find_max(&num1, &num2, &num3);

    printf("%d", num1);

    return 0;
}
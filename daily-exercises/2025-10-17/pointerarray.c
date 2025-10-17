#include <stdio.h>

int main(void)
{

    int myNumbers[4] = {25, 50, 75, 100};
    int *ptr = myNumbers;

    printf("\n");

    for (int i = 0; i < 4; i++) 
    {
       printf("%d\n", *(ptr+i));
    }

    return 0;
}
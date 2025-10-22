#include <stdio.h>

int main(void)
{

    int n1,n2,n3;
    printf("Enter three-digits number: ");
    scanf("%1d%1d%1d", &n1, &n2, &n3);

    printf("The reversal is: %d%d%d", n3,n2,n1);

    return 0;
}
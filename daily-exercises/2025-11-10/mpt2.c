#include <stdio.h>

int main(void)
{

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n], *p, i;

    for(p = array, i = 1; p < array + (n); p++, i++)
    {
        printf("Enter %d elemet: ", i);
        scanf("%d", p);
    }

    printf("Arrays: \n");
    
    for(p = array; p < array + (n); p++)
    {
        printf("%d ", *p);
    }

    return 0;
}
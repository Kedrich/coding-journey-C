#include <stdio.h>

int main(void)
{

    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], *p, i;
    for(i = 1, p = arr; p < arr+n; p++, i++)
    {
        printf("Enter element #%d: ", i);
        scanf("%d", p);
    }

    int count = 0;

    for(p = arr; p < arr+n; p++)
    {
        if(*p % 2 == 0)
        {
            count++;
        }
    }

    printf("There is %d even number/s in the array.", count);

    return 0;
}
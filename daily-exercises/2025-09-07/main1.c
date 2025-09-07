#include <stdio.h>

int main()
{

    int w;
    printf("Please enter the weight of the watermelons: ");
    scanf("%d", &w);

    if(w >= 1 && w <= 100)
    {
        if (w % 2 == 0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("Please enter the weight within 1 to 100 kilos only");
    }

    return 0;
}
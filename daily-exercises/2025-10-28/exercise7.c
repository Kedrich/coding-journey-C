#include <stdio.h>

int main(void)
{
    int number;

    printf("Input upto the table number starting from 1 : ");
    scanf("%d", &number);

    for(int i = 1; i <= 10; i++)
    {   
        for(int j = 1; j <= number; j++)
        {
            printf("%dx%d = %d", j, i, i * j);
            if(j < number) {printf(", ");}
        }
        printf("\n");
    }

    return 0;
}
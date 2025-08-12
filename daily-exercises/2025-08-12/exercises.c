//Sum of all odd numbers

/*int main (void)



{

    int count = 1;
    int sum = 0;
    int num;

    printf("Please enter a number to find the sum of all odd numbers of that n number: ");
    scanf("%d", &num);

    while (count <= num)
    {
    
        if (count % 2 == 1)
        {
        sum = sum+count;
        }

        count++;

    }
    printf("%d", sum);
    return 0;

}*/

//Multiplication Number of any number

/*#include <stdio.h>

int main(void)
{

    int num;
    int count = 1;
    int product;

    printf("Please enter a number: ");
    scanf("%d", &num);

    for(count; count<=10; count++)
    {

        product = count * num;
        printf("%d x %d = %d\n",num, count, product);

    }

    return 0;

}*/

/*#include <stdio.h>

int main (void)
{

    int rows, columns, num;

    printf("Please enter the number of rows: ");
    scanf("%d", &num);


    for(rows = 0; rows <= num; rows++)
    {
        for(columns = 0; columns <= rows; columns++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;   
}*/


#include <stdio.h>

int isEven(int n)
{

    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main(void)
{
    printf("1 = True, 0 = False\n");

    
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("%d", isEven(num));
    return 0;

}


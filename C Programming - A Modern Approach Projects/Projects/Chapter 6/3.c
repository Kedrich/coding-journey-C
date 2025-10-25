#include <stdio.h>

int main(void)
{
    
    int e,d, remainder;
    printf("Enter a fraction: ");
    scanf("%d/%d", &e, &d);

    int gcde = e, gcdd = d;

    if(d == 0)
    {
        printf("Undefined");
        return 1;
    }

    while(gcde != 0)
    {   
        remainder = gcdd % gcde;
        gcdd = gcde;
        gcde = remainder;
    }

    e = e / gcdd;
    d = d / gcdd;

    printf("In lowest term: %d/%d", e, d);


    return 0;
}
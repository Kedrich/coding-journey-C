#include <stdio.h>

int main(void)
{

    int s1, s2, s3;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 < 0 || s2 < 0 || s3 < 0)
    {
        printf("Please enter a valid side.");
    }

    if (s1 == s2 && s2 == s3)
    {
        printf("Equalateral.");
    }
    else if (s1 == s2 || s2 == s3 || s1 == s3)
    {
        printf("Isosceles.");
    }
    else
    {
        printf("Scalene.");
    }

    return 0;
}
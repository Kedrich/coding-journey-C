#include <stdio.h>

int main(void)
{

    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;

    printf("Enter the numbers from 1 to 16 in any order: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);
    printf("%d\t%d\t%d\t%d\n", n1, n2, n3,n4);
    printf("%d\t%d\t%d\t%d\n", n5, n6, n7,n8);
    printf("%d\t%d\t%d\t%d\n", n9, n10, n11,n12);
    printf("%d\t%d\t%d\t%d\n", n13, n14, n15,n16);

    int row_sum1, row_sum2, row_sum3, row_sum4;
    int column1, column2, column3, column4;
    int diagonalA, diagonalB;

    row_sum1 = n1+n2+n3+n4;
    row_sum2 = n5+n6+n7+n8;
    row_sum3 = n9+n10+n11+n12;
    row_sum4 = n13+n14+n15+n16;

    column1 = n1+n5+n9+n13;
    column2 = n2+n6+n10+n14;
    column3 = n3+n7+n11+n15;
    column4 = n4+n8+n12+n16;

    diagonalA = n1+n6+n11+n16;
    diagonalB = n13+n10+n7+n4;

    printf("\n");

    printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4);
    printf("Column sums: %d %d %d %d\n", column1, column2, column3, column4);
    printf("Diagonal sums: %d %d", diagonalA, diagonalB);

    

    return 0;
}
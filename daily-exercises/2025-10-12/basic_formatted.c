#include <stdio.h>

int main(void)
{
 
    char item[50];
    int quantity;
    float price_per_unit, total_cost;

    scanf("%s %d %f", &item, &quantity, &price_per_unit);

    total_cost = quantity * price_per_unit;
    
    printf("%s ", item);
    printf("%d ", quantity);
    printf("%.2f ", price_per_unit);
    printf("%.2f ", total_cost);
}
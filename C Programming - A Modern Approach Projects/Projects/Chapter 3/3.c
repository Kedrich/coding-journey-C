#include <stdio.h>

int main(void)
{

    int prefix, group_identifier, publisher_code, item_number, digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group_identifier, &publisher_code, &item_number, &digit);

    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", digit);

    return 0;
}
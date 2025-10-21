#include <stdio.h>

int main(void)
{

    int first, second, third;
    printf("Enter a phone number: [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first, &second, &third);

    printf("You entered: %d.%d.%d", first, second, third);

    return 0;
}
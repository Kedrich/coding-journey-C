#include <stdio.h>

int main()
{

    int nums[3] = {100, 200, 300}; //1000, 1004, 1008
    int *p = &nums[1]; // *p = 1004

    printf("1: %d\n", *p); //1004 = 200
    printf("2: %d\n", *(p - 1)); //1004 - 4 = 100  
    printf("3: %d\n", *(p + 1)); //1004 + 4 = 300

    p--; // 1004 - 4 = 1000

    printf("4: %d\n", *p); //1000 = 100
    printf("5: %d\n", *(p + 2)); // 1000 + 8 = 1008 = 300

    

    return 0;
}
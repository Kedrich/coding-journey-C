#include <stdio.h>

int global_count = 5;

int calculate(int x, int y) {
    int local_result = x + y;
    printf("In calculate: x=%d, y=%d, result=%d\n", x, y, local_result);
    return local_result * 2;
}

int process(int a) {
    int temp = a + 10;
    printf("In process: a=%d, temp=%d\n", a, temp);
    
    int calc_result = calculate(temp, global_count);
    
    printf("Back in process: calc_result=%d\n", calc_result);
    return calc_result - 5;
}

int main(void) {
    int num = 7;
    printf("In main: starting with num=%d\n", num);
    
    int final = process(num);
    
    printf("In main: final=%d\n", final);
    return 0;
}
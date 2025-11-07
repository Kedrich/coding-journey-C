#include <stdio.h>

void print_fibonacci(int terms)
{
    if (terms <= 0) {
        printf("No terms to print.\n");
        return;
    }

    long long fib1 = 1, fib2 = 1;

    if (terms >= 1) {
        printf("%lld", fib1); 
    }
    if (terms >= 2) {
        printf(" %lld", fib2);
    }

    for (int i = 3; i <= terms; i++) {  
        long long next = fib1 + fib2;  
        printf(" %lld", next);
        fib1 = fib2;    
        fib2 = next;
    }

    printf("\n");
}

int main(void)
{
    int terms;
    printf("Input number of terms: ");
    if (scanf("%d", &terms) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    print_fibonacci(terms);

    return 0;
}

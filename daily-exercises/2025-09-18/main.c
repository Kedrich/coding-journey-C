#include <stdio.h>

int findMid(int a, int n)
{
    int mid;    


}

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a) / sizeof(a[0]);
    int *mid = findMid(a, n);
    printf("%d", *mid);
    return 0;
}

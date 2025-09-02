#include <stdio.h>

int main(void)
{
    int arr[7] = {45, 12, 78, 23, 67, 89, 34};
    int max = arr[0];   // start with the first element
    int min = arr[0];   // same for minimum

    for(int i = 1; i < 7; i++)   // loop from index 1 to 6
    {
        if(arr[i] > max)
        {
            max = arr[i];  // update max if a bigger value is found
        }
        if(arr[i] < min)
        {
            min = arr[i];  // ✅ fix: update min here
        }
    }

    printf("The Maximum number is %d\n", max);
    printf("The Minimum number is %d\n", min);

    return 0;
}

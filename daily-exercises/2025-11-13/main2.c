#include <stdio.h>

int main(void)
{

    int arr[2][2][2] = 
    {
        {
            {10,20},
            {30,40}
        },
        {
            {50,60},
            {70,80}
        }
    };

    printf("%d", *(*(*(arr+1)+1)+1));

    /*
    
    * **arr = 10
    * (**arr++1) = 20
    * *(*arr+1) = 30
    * (*(*arr+1)+1) = 40
    * **(arr+1) = 50
    * (**(arr+1)+1) = 60
    * *(*(arr+1)+1) = 70
    * (*(*(arr+1)+1)+1) = 80

    */

    //Note to Claude: Can you please explain this to me fully please, can u give me the best analogy that u can ever give me. The topic is Processing the Multidimensional Array Elements or Address Arithmetic of Multidimensional Arrays.
    //Like a step by step instructions on reading and writing them.
    //Like arr points to the pointer to 1st 2d array, *a pointer to 1st 1d array of 1st 2d array and so on and so fort, yk in every element.

    return 0;
}
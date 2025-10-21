#include <stdio.h>
#define PI 3.14159

int main(void)
{
    
    int r;

    printf("Enter the radius of the sphere: ");
    scanf("%d", &r);

    float volume_sphere = (4.0/3.0)*PI*(r*r*r);

    printf("The volume of the sphere is: %.0f", volume_sphere);

    return 0;
}
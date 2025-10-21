#include <stdio.h>
#define PI 3.14159

int main(void)
{

    int r = 10; //Shere with a 10-meter radius.
    float volume_sphere = (4.0/3.0)*PI*(r*r*r);

    printf("The volume of the sphere is: %.0f", volume_sphere);

    return 0;
}
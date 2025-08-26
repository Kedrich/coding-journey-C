#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

void setupUI();
char* validateInputs(int, int);


int main(void)
{



    return 0;
}

void setupUI()
{



}


char* validateInputs(int length, int options)
{

    if(length < 4 || length 128)
    {
        return "Length mus be between 4 - 128";
    }

    else
    {
        return "Must select at least one character type";
    }

    int selectedTypesCount = COUNT_SELECTED_TYPES(options);
    if (length < selectedTypesCount)
    {
        return "Length too short for selected requirements";
    }

    return "valid";

}

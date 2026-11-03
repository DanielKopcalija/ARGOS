// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Local includes
#include "ex_0018_Squares.h"

// Function definitions
// TODO: implement ex_0018_Square and ex_0018_Squares
int ex_0018_Square(int number)
{
    return pow(number, 2);
}

bool ex_0018_Squares(int number)
{
    if(number >= 1 && number <= 1000)
    {
        for(int i = 1; i <= number; ++i)
        {
            int value = pow(i, 2);
            if(i == number)
            {
                printf("%d \n", value);
            }
            else
            {
                printf("%d ", value);
            }      
        }
        return true;
    }
    else
    {
        return false;
    }
}
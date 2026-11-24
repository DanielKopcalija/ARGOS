// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0110_Minmax.h"

// Function definitions
// TODO: implement ex_0110_Minmax
void ex_0110_Minmax(int a, int b, int c, int *min, int *max)
{
    int temp = 0;
    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if(b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    *min = c;
    *max = a;
}

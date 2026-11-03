// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0021_SumN.h"

// Function definitions
// TODO: implement ex_0021_SumN
int ex_0021_SumN(int a, int b)
{
    int min = 0;
    int max = 0;

    if(a > b)
    {
        min = b;
        max = a;
    }
    else
    {
        min = a;
        max = b;
    }

    int somme = 0;
    for(int i = min; i <= max; ++i)
    {
        somme += i;
    }
    return somme;
}

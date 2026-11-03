// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0022_Invert.h"

// Function definitions
// TODO: implement ex_0022_Invert
int ex_0022_Invert(int nbre)
{
    if(nbre < 0)
    {
        return -1;
    }

    int inverse = 0;

    while(nbre > 0)
    {
        int chiffre = nbre % 10;
        inverse = inverse * 10 + chiffre;
        nbre /= 10;
    }
    return inverse;
}

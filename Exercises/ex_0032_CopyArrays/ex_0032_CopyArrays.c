// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0032_CopyArrays.h"

// Function definitions
// TODO: implement ex_0032_CopyArrays
void ex_0032_CopyArrays(const int *tabSrc, int *tabDest, int nbrCopy)
{
    for(int i = 0; i < nbrCopy; ++i)
    {
        tabDest[i] = tabSrc[i];
    }
}

// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0033_SwapPtr.h"

// Function definitions
// TODO: implement ex_0033_SwapPtr
void ex_0033_SwapPtr(int *ptrA, int *ptrB)
{
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

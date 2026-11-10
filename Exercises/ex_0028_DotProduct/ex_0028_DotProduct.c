// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0028_DotProduct.h"

// Function definitions
// TODO: implement ex_0028_DotProduct
int ex_0028_DotProduct(int array1[], int array2[], int size)
{
    int vectSum = 0;
    int value = 0;
    for(int i = 0; i < size; ++i)
    {
        value = 0;
        value = array1[i] * array2[i];
        vectSum += value;
    }
    return vectSum;
}

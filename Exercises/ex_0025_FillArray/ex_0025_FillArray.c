// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

// Function definitions
// TODO: implement ex_0025_FillArray
int ex_0025_FillArray(int array[], int max_capacity)
{
    int nbreCorrect = 0;
    if(max_capacity <= 0)
    {
        return 0;
    }
    else
    {
        for(int i = 0; i < max_capacity; ++i)
        {
            int status = 0;
            const int nbExpectedValues = 1;
            int value = 0;
            do
            {
            status = scanf("%d", &value);

            {
                int c;
                do
                {
                c = getchar();
                } while (c != '\n' && c != EOF);
            }
            } while (status != nbExpectedValues && status != EOF);
            if (value < 0 || status == EOF)
            {
                return nbreCorrect;
            }
            else
            {
                array[i] = value;
                nbreCorrect++;
            }    
        } 
    }
    return nbreCorrect;
}

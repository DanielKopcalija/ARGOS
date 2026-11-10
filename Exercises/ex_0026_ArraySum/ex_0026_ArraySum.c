// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0026_ArraySum.h"

// Function definitions
// TODO: implement ex_0026_ArraySum
void ex_0026_ArraySum()
{
    int array[50];

    int status = 0;
    const int nbExpectedValues = 1;
    int nbValues = 0;
    do
    {
    printf("Nb values (max.50): ");
    status = scanf("%d", &nbValues);

    {
        int c;
        do
        {
        c = getchar();
        } while (c != '\n' && c != EOF);
    }
    } while (((status != nbExpectedValues) || (nbValues < 0) || (nbValues > 50)) && status != EOF);

    for(int i = 0; i < nbValues; ++i)
    {
        int status = 0;
        const int nbExpectedValues = 1;
        int value = 0;
        do
        {
        printf("Value %d? ", i);
        status = scanf("%d", &value);

        {
            int c;
            do
            {
            c = getchar();
            } while (c != '\n' && c != EOF);
        }
        } while (status != nbExpectedValues && status != EOF);
        array[i]=value;
    }

    printf("array:\n");
    int sum = 0;
    for(int i = 0; i < nbValues; ++i)
    {
        if(i == (nbValues-1))
        {
            printf("%d", array[i]); 
        }
        else
        {
           printf("%d ", array[i]); 
        }
        sum += array[i]; 
    }
    printf("\nTotal sum: %d\n", sum);

}

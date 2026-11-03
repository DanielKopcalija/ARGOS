// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0019_MultiplicationTable.h"

// Function definitions
// TODO: implement ex_0019_Read and ex_0019_MultiplicationTable

int ex_0019_Read(int valMin, int valMax)
{
    int status = 0;
    const int nbExpectedValues = 1;
    int nbre = 0;

    do
    {
    printf("Please enter the multiplication table (in [%d..%d]): ", valMin, valMax);
    status = scanf(" %d", &nbre);

    {
        int c;
        do
        {
        c = getchar();
        }while(c != '\n' && c != EOF);
    }
    } while((status != nbExpectedValues || nbre < valMin || nbre > valMax) && status !=  EOF);

    return nbre;
}

void ex_0019_MultiplicationTable(int nbre)
{
    printf("\nMULTIPLICATION TABLE FOR %d\n", nbre);
    
    for(int i = 1; i <= 10; ++i)
    {
        printf("%d X %d = %d\n", nbre, i, nbre * i);
    }

}
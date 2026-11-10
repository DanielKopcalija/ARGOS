// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0027_Array2DSum.h"

// Function definitions
// TODO: implement ex_0027_Array2DSum
void ex_0027_Array2DSum()
{
    int array[50][50];

    int nbLines = saisie_User("Nb lines (max.50): ");
    int nbColumns = saisie_User("Nb columns (max.50): ");

    for(int i = 0; i < nbLines; ++i)
    {
        for(int j = 0; j < nbColumns; ++j)
        {
            int status = 0;
            const int nbExpectedValues = 1;
            int value = 0;
            do
            {
            printf("array[%d][%d]: ", i, j);
            status = scanf("%d", &value);

            {
                int c;
                do
                {
                c = getchar();
                } while (c != '\n' && c != EOF);
            }
            } while (status != nbExpectedValues && status != EOF);
            array[i][j]=value;
        }
    }

    int sum = 0;
    for(int i = 0; i < nbLines; ++i)
    {
        for(int j = 0; j < nbColumns; ++j)
        {
            sum += array[i][j];
        }
    }
    printf("Total sum: %d\n", sum);

    
}

int saisie_User(char message[])
{
    int status = 0;
    const int nbExpectedValues = 1;
    int value = 0;
    do
    {
    printf("%s", message);
    status = scanf("%d", &value);

    {
        int c;
        do
        {
        c = getchar();
        } while (c != '\n' && c != EOF);
    }
    } while (((status != nbExpectedValues) || (value < 0) || (value > 50)) && status != EOF);
    return value;
}
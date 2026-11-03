// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0012_DecreasingOutput.h"

// Function definitions
void ex_0012_DecreasingOutput(void)
{
  // TODO: read 3 integers separated by commas, then print them in decreasing order
  int status = 0;
  const int nbExpectedValues = 3;
  int value1 = 0;
  int value2 = 0;
  int value3 = 0;

  do
  {
    printf("Please enter 3 integers separated by commas: ");
    status = scanf("%d , %d , %d", &value1, &value2, &value3);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF); 
    }
  } while (status != nbExpectedValues && status != EOF);

  int temp = 0;
  if (value3 > value1)
  {
    temp = value3;
    value3 = value1;
    value1 = temp;
  }
  if (value2 > value1)
  {
    temp = value2;
    value2 = value1;
    value1 = temp;
  }
  if (value3 > value2)
  {
    temp = value3;
    value3 = value2;
    value2 = temp;
  }

  printf("The 3 integers sorted in decreasing order: %d, %d, %d\n", value1, value2, value3);
}

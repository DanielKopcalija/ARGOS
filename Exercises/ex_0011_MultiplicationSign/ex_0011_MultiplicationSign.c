// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0011_MultiplicationSign.h"

// Function definitions
void ex_0011_MultiplicationSign(void)
{
  // TODO: read 2 integers, then print the sign of their product without computing it
  int status = 0;
  const int nbExpectedValues = 2;
  int value1 = 0;
  int value2 = 0;

  do
  {
    printf("Please enter 2 integers: ");
    status = scanf(" %d %d", &value1, &value2);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF); 
    }
  } while (status != nbExpectedValues && status != EOF);

  if (value1 == 0 || value2 == 0)
  {
    printf("%d * %d = 0\n", value1, value2);
  }
  else if ((value1 > 0 && value2 > 0) || (value1 < 0 && value2 < 0))
  {
    printf("%d * %d > 0\n", value1, value2);
  }
  else
  {
    printf("%d * %d < 0\n", value1, value2);
  }
}

// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0017_Factorial.h"

// Function definitions
void ex_0017_Factorial(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter a non-negative integer N: ";

  // TODO: read a non-negative integer N, then compute and print N!
  int status = 0;
  const int nbExpectedValues = 1;
  int nvalue = 0;

  do
  {
    printf("%s", input_message);
    status = scanf(" %d", &nvalue);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues || nvalue < 0 && status != EOF);

  long long factorial = 1;
  for(int i = 1; i <= nvalue; ++i)
  {
    factorial = factorial * i;
  }
  printf("%d! = %lld\n", nvalue, factorial);
}

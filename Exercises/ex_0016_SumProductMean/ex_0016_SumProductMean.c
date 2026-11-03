// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0016_SumProductMean.h"

// Function definitions
void ex_0016_SumProductMean(void)
{
  // Use the following messages
  // print with printf("%s", input_message);
  const char *input_message = "Number of values to read: ";
  // print with printf(value_message, i); where i is the value number, starting at 1
  const char *value_message = "%d. number: ";

  // TODO: read N (between 1 and 15), then N integers, and print their sum, product and mean
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
  } while ((status != nbExpectedValues || nvalue < 1 || nvalue > 15) && status != EOF);

  int somme = 0;
  int product = 1;
  double mean = 0;

  for (int i = 1; i <= nvalue; ++i)
  {
    int status = 0;
    const int nbExpectedValues = 1;
    int value = 0;

    do
    {
      printf(value_message, i);
      status = scanf(" %d", &value);

      {
        int c;
        do
        {
          c = getchar();
        } while (c != '\n' && c != EOF);
      }
    } while (status != nbExpectedValues && status != EOF);

    somme += value;
    product *= value;
  }

  mean = (double)somme / (double)nvalue;
  printf("Sum = %d\n", somme);
  printf("Product = %d\n", product);
  printf("Mean = %.4lf\n", mean);
}

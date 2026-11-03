// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h> // for bool, true, false

// Local includes
#include "ex_0014_CurrencyConverter.h"

const double WON2CHF = 0.00070;
const double USD2CHF = 0.99;
const double YEN2CHF = 0.0067;
const double POUND2CHF = 1.13;

// Function definitions
void ex_0014_CurrencyConverter(void)
{
  // Use the following messages
  // print with printf("%s", input_message);
  const char *input_message = "USAGE: non-negative value [W | $ | Y | P]\n"
                              "Won = W  Dollar = $  Yen = Y  Pound = P\n"
                              "Please enter the amount to convert: ";
  // print with printf("%s", error_message);
  const char *error_message = "The input format is not correct!!\n";
  // print with printf("%s", unsupported_currency_message);
  const char *unsupported_currency_message = "Unsupported currency!!\n";
  // print with printf("%s", negative_amount_message);
  const char *negative_amount_message = "The input amount is negative!!\n";

  // TODO: read an amount and a currency, validate them, then convert to Swiss francs
  int status = 0;
  const int nbExpectedValues = 2;
  double amount = 0;
  char currency;

  do
  {
    printf("%s", input_message);
    status = scanf(" %lf %c", &amount, &currency);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }

    if (status != nbExpectedValues)
    {
      printf("%s", error_message);
    }

    
    if (!(currency == 'W' || currency == '$' || currency == 'Y' || currency == 'P'))
    {
      printf("%s", unsupported_currency_message);
    }

    if (amount < 0)
    {
      printf("%s", negative_amount_message);
    }

  } while (status != nbExpectedValues || !(currency == 'W' || currency == '$' || currency == 'Y' || currency == 'P') || amount < 0  && status != EOF);
 
  switch (currency)
  {
  case 'W':
    printf("Swiss francs: %.3lf\n", amount * WON2CHF);
    break;
  case '$':
    printf("Swiss francs: %.3lf\n", amount * USD2CHF);
    break;
  case 'Y':
    printf("Swiss francs: %.3lf\n", amount * YEN2CHF);
    break;
  case 'P':
    printf("Swiss francs: %.3lf\n", amount * POUND2CHF);
    break;
  }
}

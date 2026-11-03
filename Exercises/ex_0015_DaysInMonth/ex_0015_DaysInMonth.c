// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0015_DaysInMonth.h"

// Function definitions
void ex_0015_DaysInMonth(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter the number of the month (january=1, ... , december=12): ";

  // TODO: read a month number between 1 and 12, then print its number of days
  int status = 0;
  const int nbExpectedValues = 1;
  int month = 0;

  do
  {
    printf("%s", input_message);
    status = scanf(" %d", &month);

    {
      int c;
      do
      {
        c = getchar();
      }while(c != '\n' && c != EOF);
    }
  } while((status != nbExpectedValues || month < 1 || month > 12) && status != EOF);

  switch (month)
  {
    case 1 :
      printf("Month 1 has 31 days.\n");
      break;
    case 2 :
      printf("Month 2 has 28 days.\n");
      break;
    case 3 :
      printf("Month 3 has 31 days.\n");
      break;
    case 4 :
      printf("Month 4 has 30 days.\n");
      break;
    case 5 :
      printf("Month 5 has 31 days.\n");
      break;
    case 6 :
      printf("Month 6 has 30 days.\n");
      break;
    case 7 :
      printf("Month 7 has 31 days.\n");
      break;
    case 8 :
      printf("Month 8 has 31 days.\n");
      break;
    case 9 :
      printf("Month 9 has 30 days.\n");
      break;
    case 10 :
      printf("Month 10 has 31 days.\n");
      break;
    case 11 :
      printf("Month 11 has 30 days.\n");
      break;
    case 12 :
      printf("Month 12 has 31 days.\n");
      break;
    }

}

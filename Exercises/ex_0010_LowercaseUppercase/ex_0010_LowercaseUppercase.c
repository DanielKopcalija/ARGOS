// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0010_LowercaseUppercase.h"

// Function definitions
void ex_0010_LowercaseUppercase(void)
{
  // TODO: read a character, then tell whether it is lowercase, uppercase or not a letter
  int status = 0;
  const int nbExpectedValues = 1;
  char caractere;

  do
  {
    printf("Type a letter: ");
    status = scanf(" %c", &caractere);

    {
      int c;
      do
      {
        c = getchar();
      }while(c != '\n' && c != EOF);
    }
  } while(status != nbExpectedValues && status !=  EOF);

  if(caractere >= 97 && caractere <= 122)
  {
    printf("lowercase\n");
  }else if(caractere >= 65 && caractere <= 90)
  {
    printf("UPPERCASE\n");
  }else
  {
    printf("The character you entered is not a letter.\n");
  }
}
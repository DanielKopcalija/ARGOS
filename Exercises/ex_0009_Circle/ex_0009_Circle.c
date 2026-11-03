// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <math.h>

// Local includes
#include "ex_0009_Circle.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function definitions
void ex_0009_Circle(void)
{
  // TODO: read the radius with scanf, then print pi and the circle surface
  int status = 0;
  const int nbExpectedValues = 1;
  double radius = 0;

  do
  {
    printf("Circle radius: ");
    status = scanf(" %lf", &radius);

    {
      int c;
      do
      {
        c = getchar();
      }while(c != '\n' && c != EOF);
    }
  }while(status != nbExpectedValues && status != EOF);  

  printf("pi = %.6lf\n", M_PI);

  printf("Circle surface = %.2lf\n", M_PI*pow(radius,2));
}
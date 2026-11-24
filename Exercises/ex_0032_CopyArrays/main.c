// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0032_CopyArrays.h"

int main(void)
{
  int src[] = {4, -1, 7, 0, 12};
  int dst[] = {0, 0, 0, 0, 0};
  ex_0032_CopyArrays(src, dst, 5);
  return 0;
}

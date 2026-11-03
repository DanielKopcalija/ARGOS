// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0020_Calculator.h"

// Function definitions
// TODO: implement ex_0020_Calculator
double ex_0020_Calculator(double operande1, double operande2, char operateur)
{
    switch (operateur)
    {
    case '+':
        return operande1 + operande2;
        break;
    case '-':
        return operande1 - operande2;
        break;
    case '*':
        return operande1 * operande2;
        break;
    case '/':
        if(operande2 == 0)
        {
            return 0;
        }
        else
        {
            return operande1 / operande2;
        }
        break;
    default:
        break;
    }
    return 0;
}
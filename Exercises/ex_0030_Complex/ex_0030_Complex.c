// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0030_Complex.h"

// Function definitions
// TODO: implement ex_0030_InputComplex, ex_0030_SumComplex, ex_0030_DiffComplex, ex_0030_PrintComplex and ex_0030_Complex
Complex ex_0030_InputComplex()
{
    int status = 0;
    const int nbExpectedValues = 2;
    bool valid = false;
    Complex complex;
    complex.imaginary = 0;
    complex.real = 0;

    do
    {
        printf("Please enter a complex number (r,i): ");
        status = scanf(" ( %lf , %lf )", &complex.real, &complex.imaginary);

        if(status == nbExpectedValues)
        {
            valid = true;
        }
        else
        {
            valid = false;
        }

        {
            int c;
            do
            {
                c = getchar();

                if (c != '\n' && c != EOF && c != ' ' && c != '\t')
                {
                    valid = false;
                }
            } while (c != '\n' && c != EOF);
        }
    } while (!valid && status != EOF);
    
    return complex;
}

Complex ex_0030_SumComplex(Complex complex1, Complex complex2)
{
    Complex sumComplex;
    sumComplex.real = complex1.real + complex2.real;
    sumComplex.imaginary = complex1.imaginary + complex2.imaginary;
    return sumComplex;
}

Complex ex_0030_DiffComplex(Complex complex1, Complex complex2)
{
    Complex diffComplex;
    diffComplex.real = complex1.real - complex2.real;
    diffComplex.imaginary = complex1.imaginary - complex2.imaginary;
    return diffComplex;
}

void ex_0030_PrintComplex(Complex complex)
{
    printf("%.2lf + %.2lfi\n", complex.real, complex.imaginary);
}

void ex_0030_Complex()
{
    Complex complex1 = ex_0030_InputComplex();
    Complex complex2 = ex_0030_InputComplex();

    Complex sumComplex = ex_0030_SumComplex(complex1, complex2);
    Complex diffComplex = ex_0030_DiffComplex(complex1, complex2);

    printf("\nSum = ");
    ex_0030_PrintComplex(sumComplex);

    printf("\nDiff = ");
    ex_0030_PrintComplex(diffComplex);
}

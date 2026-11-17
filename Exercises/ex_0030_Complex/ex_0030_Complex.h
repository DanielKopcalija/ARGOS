// Author: HE-Arc

#ifndef EX_0030_COMPLEX_H
#define EX_0030_COMPLEX_H

// Standard includes

// Local includes

// Types
typedef struct
{
    double real;
    double imaginary;
}Complex;

// Function prototypes
Complex ex_0030_InputComplex();
Complex ex_0030_SumComplex(Complex complex1, Complex complex2);
Complex ex_0030_DiffComplex(Complex complex1, Complex complex2);
void ex_0030_PrintComplex(Complex complex);
void ex_0030_Complex();

#endif // EX_0030_COMPLEX_H

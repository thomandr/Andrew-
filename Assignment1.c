#include <math.h>
#include "polynomial.h"
//-------------------------------------------
//polynomial(double a, double b, double c, double x, double xi, double *fPrime, double *f, double *area)
//This function calculates fPrime, f(x), and area
//Inputs: a
//        b
//        c
//        x
//        xi
//        *fPrime
//        *f
//        *area
//Output: returns values for fPrime, f, and area
//-------------------------------------------

void polynomial(double a, double b, double c, double x, double xi, double *fPrime, double *f, double *area)
{
    *f = ((a * pow(x, 2)) + (b * x) + c); // Calculating the function

    *fPrime = ((2 * a * x) + b); // Calculating fprime

    *area = ((((a / 3) * pow(xi, 3))+ ((b / 2) * pow(xi, 2)) + (c * xi)) - (((a / 3) * pow(x, 3))+ ((b / 2) * pow(x, 2)) + (c * x))); // Calculates the area between the given points
}

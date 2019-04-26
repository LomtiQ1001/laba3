#include "complex.h"
#include <iostream>
#include <cmath>

void Complex::set_real(double complex_real)
{
    real = complex_real;
}

void Complex::set_imag(double complex_imag)
{
     imag = complex_imag;
}

double Complex::get_modul()
{
    mod = sqrt((real * real) + (imag * imag));
    return mod;
}

double Complex::get_argum()
{
    arg = cos(real/mod);
    return arg;
}

#include "complex.h"
#include <iostream>
#include <cmath>

void Complex::set_real(double complex_real)
{
    Complex::real = complex_real;
}

void Complex::set_imag(double complex_imag)
{
     Complex::imag = complex_imag;
}

double Complex::get_modul()
{
    Complex::mod = sqrt((real * real) + (imag * imag));
    return Complex::mod;
}

double Complex::get_argum()
{
    Complex::arg = cos(real/mod);
    return Complex::arg;
}

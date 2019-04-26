#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
private:
    double real;
    double imag;
    double mod;
    double arg;
public:
    void set_real(double);
    void set_imag(double);

    void modul();
    void argum();

    double get_modul();
    double get_argum();
};

#endif // COMPLEX_H

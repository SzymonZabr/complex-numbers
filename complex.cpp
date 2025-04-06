#include <iostream>
#include "Complex.h"

using namespace std;

void print_complex(complex c)
{
    if (c.im >= 0)
        cout << c.re << "+" << c.im << "i" << endl;
    else
        cout << c.re << c.im << "i" << endl;
}

complex add_complex(complex a, complex b)
{
    complex c;
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    return c;
}

complex subtract_complex(complex a, complex b)
{
    complex c;
    c.re = a.re - b.re;
    c.im = a.im - b.im;
    return c;
}

complex multiply_complex(complex a, complex b)
{
    complex c;
    c.re = a.re * b.re - a.im * b.im;
    c.im = a.re * b.im + a.im * b.re;
    return c;
}

complex divide_complex(complex a, complex b)
{
    complex c;
    double denominator = b.re * b.re + b.im * b.im;
    if (denominator == 0)
    {
        cout << "Błąd: dzielenie przez zero!" << endl;
        c.re = 0;
        c.im = 0;
        return c;
    }
    c.re = (a.re * b.re + a.im * b.im) ;
    c.im = (a.im * b.re - a.re * b.im) ;
    return c;
}

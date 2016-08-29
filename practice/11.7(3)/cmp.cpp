#include <iostream>
#include "cmp.h"

using std::cout;

Cmp::Cmp(double real, double imaginary)
{
    n_real = real;
    n_imaginary = imaginary;
}

Cmp::~Cmp() {}

Cmp operator+ (const Cmp &a, const Cmp &b)
{
    return Cmp(a.n_real + b.n_real, a.n_imaginary + b.n_imaginary);
}

Cmp operator- (const Cmp &a, const Cmp &b)
{
    return Cmp(a.n_real - b.n_real, a.n_imaginary - b.n_imaginary);
}

Cmp operator* (const Cmp &a, const Cmp &b)
{
    return Cmp(a.n_real * b.n_real - a.n_imaginary * b.n_imaginary,
               a.n_real * b.n_imaginary + a.n_imaginary * b.n_real);
}

Cmp operator* (const double n, const Cmp &cmplx)
{
    return Cmp(n * cmplx.n_real, n * cmplx.n_imaginary);
}

Cmp operator~ (const Cmp &cmplx)
{
    return Cmp(cmplx.n_real, -cmplx.n_imaginary);
}

std::istream &operator>> (std::istream &is, Cmp &cmplx)
{
    cout << "real: ";
    is >> cmplx.n_real;
    cout << "imaginary: ";
    is >> cmplx.n_imaginary;

    return is;
}

std::ostream &operator<< (std::ostream &os, Cmp &cmplx)
{
    os << "(" << cmplx.n_real << ", " << cmplx.n_imaginary << "i)";

    return os;
}

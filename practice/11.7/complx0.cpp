#include <iostream>
#include "complex0.h"

using std::cout;

Complex0::Complex0(double r, double i)
{
    n_real = r;
    n_imaginary = i;
}

Complex0::~Complex0() {}

Complex0 Complex0::operator+(const Complex0 &b)
{
    return Complex0(n_real + b.n_real, n_imaginary + b.n_imaginary);
}

Complex0 Complex0::operator-(const Complex0 &b)
{
    return Complex0(n_real - b.n_real, n_imaginary - b.n_imaginary);
}

Complex0 Complex0::operator*(const Complex0 &b)
{
    return Complex0(n_real * b.n_real - n_imaginary * b.n_imaginary);
}

Complex0 operator*(double n, const Complex0 &cmplx)
{
    return Complex0(cmplx.n_real * n, cmplx.n_imaginary * n);
}

Complex0 Complex0::operator~()
{
    return Complex0(n_real, -n_imaginary);
}

std::istream &operator>>(std::istream &is, Complex0 &cmplx)
{
    cout << "real: ";
    is >> cmplx.n_real;
    cout << "\nimaginary: ";
    is >> cmplx.n_imaginary;

    return is;
}

std::ostream &operator<<(std::ostream &os, Complex0 &cmplx)
{
    os << "(" << cmplx.n_real << "," << cmplx.n_imaginary << "i)";

    return os;
}

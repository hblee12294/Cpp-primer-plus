#ifndef COMPLEX0_H_INCLUDED
#define COMPLEX0_H_INCLUDED

class Complex0
{
private:
    double n_real;
    double n_imaginary;
public:
    Complex0(double r = 0, double i = 0);
    ~Complex0();
    Complex0 operator+(const Complex0 &b);
    Complex0 operator-(const Complex0 &b);
    Complex0 operator*(const Complex0 &b);
    Complex0 operator~();
    friend Complex0 operator*(double n, const Complex0 &cmplx);
    friend std::istream &operator>>(std::istream &is, Complex0 & cmplx);
    friend std::ostream &operator<<(std::ostream &os, Complex0 & cmplx);
};

#endif // COMPLEX0_H_INCLUDED

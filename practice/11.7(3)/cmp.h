#ifndef CMP_H_INCLUDED
#define CMP_H_INCLUDED

#include <iostream>
using std::ostream;
using std::istream;

class Cmp
{
private:
    double n_real;
    double n_imaginary;
public:
    Cmp(double real = 0, double imaginary = 0);
    ~Cmp();
    friend Cmp operator+ (const Cmp &a, const Cmp &b);
    friend Cmp operator- (const Cmp &a, const Cmp &b);
    friend Cmp operator* (const Cmp &a, const Cmp &b);
    friend Cmp operator* (double n, const Cmp &cmplx);
    friend Cmp operator~ (const Cmp &cmplx);
    friend std::istream &operator>> (std::istream &is, Cmp &cmplx);
    friend std::ostream &operator<< (std::ostream &os, Cmp &cmplx);
};


#endif // CMP_H_INCLUDED

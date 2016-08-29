#ifndef VECT_H_INCLUDED
#define VECT_H_INCLUDED

#include <iostream>

namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode {RECT, POL};
    private:
        double x;
        double y;
        Mode mode;

    public:
        Vector();
        Vector(double nl, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const;
        double yval() const;
        double magval() const;
        double angval() const;
        void polar_mode();
        void rect_mode();
        Vector operator+(const Vector &v) const;
        Vector operator-(const Vector &v) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        friend Vector operator*(double n, const Vector &v);
        friend std::ostream &operator<<(std::ostream &os, const Vector &v);
    };
}

#endif // VECT_H_INCLUDED

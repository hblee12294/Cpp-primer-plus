#ifndef STOCK_H_INCLUDED
#define STOCK_H_INCLUDED

#include <iostream>

class Stonewt
{
    enum {Lbs_per_stn = 14};
    enum Mode {STN, PDS};
    int stone;
    double pds_left;
    double pounds;
    Mode mode;
public:
    Stonewt(double lbs);
    Stonewt();
    ~Stonewt();
    void mode_stn();
    void mode_pds();
    Stonewt operator+(const Stonewt &s);
    Stonewt operator-(const Stonewt &s);
    Stonewt operator*(double n);
    friend Stonewt operator*(double n, Stonewt &s) { return s * n; }
    friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
};

#endif // STOCK_H_INCLUDED

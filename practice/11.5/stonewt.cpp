#include <iostream>
#include "stock.h"

using std::cout;

Stonewt::Stonewt(double lbs)
{
    pounds = lbs;
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
    mode = PDS;
}

Stonewt::Stonewt()
{
    pounds = 0.0;
    stone = 0;
    pds_left = 0.0;
    mode = PDS;
}

Stonewt::~Stonewt() {}

void Stonewt::mode_stn()
{
    mode = STN;
}

void Stonewt::mode_pds()
{
    mode = PDS;
}

Stonewt Stonewt::operator+(const Stonewt &s)
{
        return Stonewt(pounds + s.pounds);
}

Stonewt Stonewt::operator-(const Stonewt &s)
{
    if (pounds < s.pounds)
    {
        cout << "result can't be negative.";
        return *this;
    }
    else
        return Stonewt(pounds - s.pounds);
}

Stonewt Stonewt::operator*(double n)
{
    pounds *= n;
    return Stonewt(pounds);
}

std::ostream &operator<<(std::ostream &os, const Stonewt &s)
{
    if (s.mode == Stonewt::PDS)
        cout << "weight = " << s.pounds << " pounds";
    else
        cout << "weight = " << s.stone << " st, " << s.pds_left << " pd";
}

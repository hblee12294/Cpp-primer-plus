#ifndef MYTIME2_H_INCLUDED
#define MYTIME2_H_INCLUDED

class Time
{
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddMHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time &t) const;
    Time operator-(const Time &t) const;
    Time operator*(double n) const;
    void Show() const;
};

#endif // MYTIME2_H_INCLUDED

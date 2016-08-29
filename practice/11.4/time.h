#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include <iostream>

class Time
{
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    friend Time &operator+(Time &t1, const Time &t2);
    friend Time &operator-(Time &t1, const Time &t2);
    friend Time &operator*(Time &t, double n);
    friend Time &operator*(double n, Time & t);
    friend std::ostream &operator<<(std::ostream &os, const Time &t);
};

#endif // TIME_H_INCLUDED

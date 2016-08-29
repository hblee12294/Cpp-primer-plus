#include "time.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time &operator+(Time &t1, const Time &t2)
{
    t1.minutes = t1.minutes + t2.minutes;
    t1.hours = t1.hours + t2.hours + t1.minutes / 60;
    t1.minutes %= 60;
    return t1;
}

Time &operator-(Time &t1, const Time &t2)
{
    int tot1, tot2;
    tot1 = t1.minutes + 60 * t1.hours;
    tot2 = t2.minutes + 60 * t2.hours;
    t1.minutes = (tot1 - tot2) % 60;
    t1.hours = (tot1 - tot2) / 60;
    return t1;
}

Time &operator*(Time &t, double mult)
{
    long totalminutes = (t.hours * 60 + t.minutes) * mult;
    t.hours = totalminutes / 60;
    t.minutes = totalminutes % 60;
    return t;
}

Time &operator*(double n, Time & t)
{
    return t * n;
}

std::ostream &operator<<(std::ostream &os, const Time &t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}

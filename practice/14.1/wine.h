#ifndef WINE_H_INCLUDED
#define WINE_H_INCLUDED

#include <string>
#include <iostream>
#include <valarray>

using std::string;

class Wine
{
private:
    typedef std::valarray<int> ArrayInt;
    typedef std::pair<ArrayInt, ArrayInt> PairArray;

    const string name;
    const int years;
    PairArray year_to_bottles;
public:
    Wine(const char *l, const int y, const int yr[],const int bot[])
        : name(l), years(y), year_to_bottles(ArrayInt(yr,y), ArrayInt(bot,y)) {}
    Wine(const char *l, int y)
        : name(l), years(y), year_to_bottles(ArrayInt(0,y), ArrayInt(0,y)) {}

    void GetBottles();
    void Show() const;
    const string &Label() const { return name; }
    int sum() const;
};

#endif // WINE_H_INCLUDED

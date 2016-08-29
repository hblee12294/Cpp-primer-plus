#ifndef WINE_H_INCLUDED
#define WINE_H_INCLUDED

#include <string>
#include <iostream>
#include <valarray>

typedef std::valarray<int> ArrayInt;
typedef std::pair<ArrayInt, ArrayInt> PairArray;

class Wine : private std::string, private ArrayInt, private PairArray
{
private:
    const int years;
public:
    Wine(const char *l, const int y, const int yr[],const int bot[])
        : std::string(l), years(y), PairArray(ArrayInt(yr,y), ArrayInt(bot,y)) {}
    Wine(const char *l, int y)
        : std::string(l), years(y), PairArray(ArrayInt(0,y), ArrayInt(0,y)) {}

    void GetBottles();
    void Show() const;
    const std::string &Label() const { return (const std::string &) *this; }
    int sum() const;
};


#endif // WINE_H_INCLUDED

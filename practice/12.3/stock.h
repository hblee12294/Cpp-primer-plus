#ifndef STOCK_H_INCLUDED
#define STOCK_H_INCLUDED

#include <iostream>
using std::ostream;

class Stock
{
private:
    char *company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();
    Stock(const char *co, long n = 0, double pr = 0.0);
    Stock(const Stock &s);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    friend ostream &operator << (ostream &os, const Stock &s);
    friend ostream &operator << (ostream &os, const Stock *s);
    const Stock &topval(const Stock &s) const;
};

#endif // STOCK_H_INCLUDED

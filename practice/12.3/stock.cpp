#include <iostream>
#include <cstring>
#include "stock.h"

Stock::Stock()
{
    company = new char [1];
    company[0] = '\0';
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char *co, long n, double pr)
{
    company = new char [std::strlen(co) + 1];
    std::strcpy(company, co);

    if (n < 0)
    {
        std::cout << "Numbers of shares can't be negative; "
                  << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::Stock(const Stock &s)
{
    company = new char [std::strlen(s.company) + 1];
    std::strcpy(company, s.company);
    shares = s.shares;
    share_val = s.share_val;
    set_tot();
}

Stock::~Stock()
{
    std::cout << company << " related info is erased.\n";
    delete [] company;
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Numbers of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Numbers of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

std::ostream &operator << (std::ostream &os, const Stock &s)
{
    using std::ios_base;

    ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = os.precision(3);

    os << "Company: " << s.company
       << "  Shares: " << s.shares << std::endl;
    os.precision(2);
    os << "  Total Worth: $" << s.total_val << std::endl;

    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
}

std::ostream &operator << (std::ostream &os, const Stock *s)
{
    using std::ios_base;

    ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = os.precision(3);

    os << "Company: " << s->company
       << "  Shares: " << s->shares << std::endl;
    os.precision(2);
    os << "  Total Worth: $" << s->total_val << std::endl;

    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
}

const Stock &Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}

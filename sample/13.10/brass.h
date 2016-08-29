#ifndef BRASS_H_INCLUDED
#define BRASS_H_INCLUDED

#include <string>

class Brass
{
private:
    std::string fullname;
    long acctNum;
    double balance;
public:
    Brass(const std::string &s = "Nullbody", long an = -1,
          double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt);
    double Balance() const;
    virtual void ViewAcct() const;
    virtual ~Brass() {}
};

class BrassPlus : public Brass
{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string &s = "Nullbody", long an = -1,
              double bal = 0.0, double ml = 500, double r = 0.11125);
    BrassPlus(const Brass &ba, double ml = 500, double r = 0.11125);
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);
    void ResetMax(double m);
    void ResetRate(double r);
    void ResetOwes() {owesBank = 0; }
};

#endif // BRASS_H_INCLUDED

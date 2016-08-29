#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

#include <string>

class Account
{
    std::string fullname;
    std::string accnum;
    double balance;
public:
    Account();
    Account(const std::string &client, const std::string &num, double bal);
    ~Account();
    void show() const;
    void deposit(double cash);
    void withdraw(double cash);
};

#endif // ACCOUNT_H_INCLUDED

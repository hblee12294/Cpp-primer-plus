#include <iostream>
#include <string>
#include "account.h"

Account::Account()
{
    fullname = "null";
    accnum = "null";
    balance = 0.0;
}

Account::Account(const std::string &client, const std::string &num, double bal)
{
    fullname = client;
    accnum = num;

    if (bal < 0)
    {
        std::cout << "Initial balance can't be negative, your balance set to 0.\n";
        balance = 0.0;
    }
    else
        balance = bal;
}

Account::~Account() {}

void Account::deposit(double cash)
{
    if (cash <= 0)
        std::cout << "Invalid Amount!\n";
    else
        balance += cash;
}

void Account::withdraw(double cash)
{
    if (cash <= 0)
        std::cout << "Invalid Amount!\n";
    else if (cash > balance)
        std::cout << "Insufficient Balance!\n";
    else
        balance -= cash;
}

void Account::show() const
{
    using std::cout;
    using std::endl;

    cout << "#" << accnum << endl;
    cout << "  Account Holder: " << fullname << '\t'
         << "  Balance: $" << balance << endl;
}

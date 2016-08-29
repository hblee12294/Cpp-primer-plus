#include <iostream>
#include <string>
#include "wine.h"

using std::endl;
using std::cout;
using std::cin;
using std::string;

void Wine::GetBottles()
{
    cout << "Enter " << (const string&) *this << " data for " << years << " year(s):\n";

    for (int i = 0; i < years; ++i)
    {
        cout << "Enter year: ";
        cin >> year_to_bottles.first[i];
        cout << "Enter bottles for that year: ";
        cin >> year_to_bottles.second[i];
    }
}

void Wine::Show() const
{
    cout << "Wine: " << (const string &) *this << endl;
    cout << "\tYear\tBottles" << endl;

    for (int i = 0; i < years; ++i)
        cout << '\t' << year_to_bottles.second[i]
             << '\t' << year_to_bottles.second[i]
             << endl;
}

int Wine::sum() const
{
    return year_to_bottles.second.ArrayInt::sum();
}

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
        cin >> PairArray::first(ArrayInt::operator[](i));
        cout << "Enter bottles for that year: ";
        cin >> PairArray::second(ArrayInt::operator[](i));
    }
}

void Wine::Show() const
{
    cout << "Wine: " << (const string &) name << endl;
    cout << "\tYear\tBottles" << endl;

    for (int i = 0; i < years; ++i)
        cout << '\t' << PairArray::first(ArrayInt::operator[](i))
             << '\t' << PairArray::second(ArrayInt::operator[](i))
             << endl;
}

int Wine::sum() const
{
    return PairArray::second(ArrayInt::sum());
}

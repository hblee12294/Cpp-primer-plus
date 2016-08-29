#include <iostream>
#include "wine.h"

using std::endl;
using std::cout;
using std::cin;

void Wine::GetBottles()
{
    cout << "Enter " << name << " data for " << years << " year(s):\n";

    int year;
    int bottle;

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
    cout << "Wine: " << name << endl;
    cout << "\tYear\tBottles" << endl;

    for (int i = 0; i < years; ++i)
        cout << '\t' << year_to_bottles.first[i]
             << '\t' << year_to_bottles.second[i]
             << endl;
}

int Wine::sum() const
{
    return year_to_bottles.second.sum();
}

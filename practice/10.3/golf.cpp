#include <iostream>
#include "golf.h"
#include <cstring>

Golf::Golf()
{
    strcpy(fullname, "null");
    handicap = 0;
}

Golf::Golf(const char *name, const int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

int Golf::setgolf()
{
    using std::cout;
    using std::cin;

    cout << "Enter player's name: ";
    char temp_name[Len];
    cin.getline(temp_name, Len);
    if (temp_name == '\0')
        return 0;

    cout << "Enter player's handicap:";
    int temp_hc;
    cin >> temp_hc;

    *this = Golf(temp_name, temp_hc);

    return 1;
}

void Golf::hcmodify(int hc)
{
    handicap = hc;
}

void Golf::showgolf() const
{
    std::cout << fullname << ": " << handicap
              << std::endl;
}

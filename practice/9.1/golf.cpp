#include <iostream>
#include "golf.h"
#include <cstring>

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    using std::cout;
    using std::cin;

    cout << "Enter fullname of Andy: ";
    cin.getline(g.fullname, Len);
    cout << "Enter handicap of Andy: ";
    cin >> g.handicap;

    if(g.fullname == '\0')
        return 1;
    else
        return 0;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    std::cout << g.fullname << ": " << g.handicap
              << std::endl;
}

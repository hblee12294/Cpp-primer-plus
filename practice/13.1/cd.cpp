#include <iostream>
#include <cstring>
#include "cd.h"

using namespace std;

Cd::Cd(char *s1, char *s2, int n, double x)
{
    strncpy(performance, s1, LIM_P);
    strncpy(label, s2, LIM_L);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    strcpy(performance, d.performance);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    strcpy(performance, "null");
    strcpy(label, "null");
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd() {}

void Cd::Report() const
{
    cout << "Performance: " << performance << endl
         << "Label      : " << label << endl
         << "Selections : " << selections << endl
         << "Playtime   : " << playtime << endl;
}
Cd &Cd::operator = (const Cd &d)
{
    strcpy(performance, d.performance);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(char *ht, char *s1, char *s2, int n, double x)
                : Cd(s1, s2, n, x)
{
    strncpy(hit, ht, LIM_H);
}

Classic::Classic(char *ht, const Cd &cls) : Cd(cls)
{
    strncpy(hit, ht, LIM_H);
}

Classic::Classic(const Classic &cls) : Cd(cls)
{
    strcpy(hit, cls.hit);
}

Classic::Classic() : Cd()
{
    strcpy(hit, "null");
}

Classic::~Classic() {}

void Classic::Report() const
{
    cout << "hit     : " << hit << endl;
    Cd::Report();
}

/*Classic &Classic::operator = (const Classic &cls)
{
    strcpy(hit, cls.hit);

    return *this;
} */

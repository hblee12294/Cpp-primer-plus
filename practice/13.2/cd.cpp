#include <iostream>
#include <cstring>
#include "cd.h"

using namespace std;

Cd::Cd(char *s1, char *s2, int n, double x)
{
    performance = new char [strlen(s1) + 1];
    strcpy(performance, s1);
    label = new char [strlen(s2) + 1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    performance = new char [strlen(d.performance) + 1];
    strcpy(performance, d.performance);
    label = new char [strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd()
{
    delete [] performance;
    delete [] label;
}

void Cd::Report() const
{
    cout << "Performance: " << performance << endl
         << "Label      : " << label << endl
         << "Selections : " << selections << endl
         << "Playtime   : " << playtime << endl;
}

Cd &Cd::operator = (const Cd &d)
{
    delete [] performance;
    delete [] label;

    performance = new char [strlen(d.performance) + 1];
    strcpy(performance, d.performance);
    label = new char [strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}

//classic
Classic::Classic(char *ht , char *s1, char *s2, int n, double x)
                : Cd(s1, s2, n, x), hit(ht) {}

Classic::Classic(char *ht, const Cd &d) : Cd(d), hit(ht) {}

Classic::Classic(const Classic &cls) : Cd(cls)
{
    hit = new char [strlen(cls.hit) + 1];
    strcpy(hit, cls.hit);
}

Classic::~Classic()
{
    delete [] hit;
}

void Classic::Report() const
{
    cout << "hit       : " << hit << endl;
    Cd::Report();
}

Classic &Classic::operator = (const Classic &cls)
{
    Cd::operator = (cls);
    delete [] hit;
    hit = new char [strlen(cls.hit) + 1];
    return *this;
}

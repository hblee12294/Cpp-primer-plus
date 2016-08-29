#include <iostream>
#include <cstring>
#include "prog.h"

Plorg::Plorg(char *nm, int c)
{
    strcpy(name, nm);
    ci = c;
}

Plorg::~Plorg() {}

void Plorg::update(const int c)
{
    ci = c;
}

void Plorg::show() const
{
    std::cout << "name : " << name << '\t'
              << "CI: " << ci << std::endl;
}


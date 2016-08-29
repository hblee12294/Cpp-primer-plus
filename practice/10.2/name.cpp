#include <iostream>
#include <string>
#include <cstring>
#include "name.h"

Person::Person(const std::string &ln, const char *fn)
{
    lname = ln;
    strcpy(fname, fn);
}

Person::~Person() {};

void Person::Show() const
{
    std::cout << "Casual format:\n"
              << "  " << fname << " " << lname
              << std::endl;
}

void Person::FormalShow() const
{
    std::cout << "Formal format:\n"
              << "  " << lname << ", " << fname
              << std::endl;
}

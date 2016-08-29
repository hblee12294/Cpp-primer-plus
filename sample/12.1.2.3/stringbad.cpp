#include <cstring>
#include "strngbad.h"

using std::cout;

int Stringbad::num_strings = 0;

Stringbad::Stringbad(const char *s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str
         << "\" object created\n";
}

Stringbad::Stringbad()
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << str
         << "\" object created\n";
}

Stringbad::~Stringbad()
{
    cout << "\"" << str << "\" object delete, ";
    --num_strings;
    cout << num_strings << " left\n";
    delete [] str;
}

std::ostream  &operator << (std::ostream &os, const Stringbad &st)
{
    os << st.str;
    return os;
}

#ifndef STRNGBAD_H_INCLUDED
#define STRNGBAD_H_INCLUDED

#include <iostream>

class Stringbad
{
private:
    char * str;
    int len;
    static int num_strings;
public:
    Stringbad(const char *s);
    Stringbad();
    ~Stringbad();
    friend std::ostream &operator << (std::ostream &s, const Stringbad &st);
};

#endif // STRNGBAD_H_INCLUDED

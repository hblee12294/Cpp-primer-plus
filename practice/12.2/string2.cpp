#include <cstring>
#include <cctype>
#include "string2.h"
using std::cout;
using std::cin;

int String::num_strings;

String::String(const char *s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings;
}

String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String &s)
{
    num_strings++;
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);
}

String::~String()
{
    --num_strings;
    delete [] str;
}

void String::stringlow()
{
    for(int i = 0; str[i] != '\0'; ++i)
        str[i] = tolower(str[i]);
}

void String::stringup()
{
    for (int i = 0; i < len; ++i)
        str[i] = toupper(str[i]);
}

int String::has(const char ch)
{
    int n = 0;
    for (int i = 0; i < len; ++i)
        if (str[i] == ch) ++n;
    return n;
}

String &String::operator = (const String &s)
{
    if (this == &s)
        return *this;
    delete [] str;
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);
    return *this;
}

String &String::operator = (const char *s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

String &String::operator + (const String &s)
{
    char temp[len + 1];
    std::strcpy(temp, str);

    delete [] str;
    len += s.len;
    str = new char[len + 1];
    std::strcpy(str, std::strcat(temp, s.str));
    return *this;
}

String &String::operator + (const char *s)
{
    char temp[len + 1];
    std::strcpy(temp, str);

    delete [] str;
    len += strlen(s);
    str = new char [len + 1];
    std::strcpy(str, std::strcat(temp, s));
    return *this;
}

char & String::operator [] (int i)
{
    return str[i];
}

const char &String::operator [] (int i) const
{
    return str[i];
}

bool operator < (const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator > (const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator == (const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

String operator + (const char *st1, String &str2)
{
    return str2 + st1;
}

ostream &operator << (ostream &os, const String &st)
{
    os << st.str;
    return os;
}

istream &operator >> (istream &is, String &st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

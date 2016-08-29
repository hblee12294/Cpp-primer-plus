#ifndef STRING2_H_INCLUDED
#define STRING2_H_INCLUDED

#include <iostream>
using std::istream;
using std::ostream;

class String
{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    String(const char *s);
    String();
    String(const String &s);
    ~String();

    int length () const {return len; }
    void stringlow();
    void stringup();
    int has(const char ch);

    String &operator = (const String &s);
    String &operator = (const char *s);
    String &operator + (const String &s);
    String &operator + (const char *s);
    char &operator [] (int i);
    const char&operator [] (int i) const;

    friend bool operator < (const String &st1, const String &st2);
    friend bool operator > (const String &st1, const String &st2);
    friend bool operator == (const String &st1, const String &st2);
    friend String operator + (const char *st1, String &st2);
    friend ostream &operator << (ostream &os, const String &st);
    friend istream &operator >> (istream &is, String &st);
};

#endif // STRING2_H_INCLUDED

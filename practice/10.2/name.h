#ifndef NAME_H_INCLUDED
#define NAME_H_INCLUDED

#include <string>

class Person
{
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];
public:
    Person() {lname = ""; fname[0] = '\0'; }
    Person(const std::string &ln, const char *fn = "Heyyou");
    ~Person();
    void Show() const;
    void FormalShow() const;
};

#endif // NAME_H_INCLUDED

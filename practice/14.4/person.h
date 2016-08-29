#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>

class Person
{
private:
    std::string fname;
    std::string lname;
public:
    Person(const char *fn = " ", const char *ln = " ") : fname(fn), lname(fn) {}
//    Person(const Person &ps) { fname = ps.fname; lname = ps.lname; }
    ~Person() {}
    virtual void Show() = 0;
};

class Gunslinger : virtual public Person
{
private:
    double draw_time;
    int notch;
public:
    Gunslinger() : Person(), draw_time(0), notch(0) {}
    Gunslinger(const char *fn, const char *ln, double dt = 0.0, int n = 0)
                : Person(fn, ln), draw_time(dt), notch(n) {}
    Gunslinger(const Person &ps, double dt, int n) : Person(ps), draw_time(dt), notch(n) {}
    ~Gunslinger() {}
    double Draw() const { return draw_time; }
    void Show();
};

class PokerPlayer : virtual public Person
{
public:
    PokerPlayer() : Person() {}
    PokerPlayer(const char *fn, const char *ln) : Person(fn, ln) {}
    ~PokerPlayer() {}
    int Draw();
    void Show();
};

class BadDude : public Gunslinger, public PokerPlayer
{
public:
    BadDude() {}
    BadDude(const char *fn, const char *ln, double dt = 0.0, int n = 0)
            : Person(fn, ln), Gunslinger(fn, ln, dt, n), PokerPlayer() {}
    ~BadDude() {}
    double Gdraw() const;
    int Cdraw();
    void Show();
};

#endif // PERSON_H_INCLUDED

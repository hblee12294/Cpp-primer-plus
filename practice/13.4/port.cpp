#include <iostream>
#include <cstring>
#include "port.h"

using namespace std;

Port::Port(const char *br, const char *st, int b)
{
    brand = new char [strlen(br) + 1];
    strcpy(brand, br);
    strncpy(style, st, 20);
    bottles = b;
}

Port::Port(const Port &p)
{
    brand = new char [strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port &Port::operator = (const Port &p)
{
    delete [] brand;
    brand = new char [strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;

    return *this;
}

Port &Port::operator += (int b)
{
    bottles += b;
    return *this;
}

Port &Port::operator -= (int b)
{
    bottles -= b;
    return *this;
}

void Port::Show() const
{
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream &operator << (ostream &os, const Port &p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}


//VintagePort
VintagePort::VintagePort()
{
    Port("null", "vintage",0);
    nickname = "null";
    year = 0;
}

VintagePort::VintagePort(const char *br, int b, const char *nm, int y)
            : Port(br, "vintage", b)
{
    nickname = new char [strlen(nm) + 1];
    strcpy(nickname, nm);
    year = y;
}

VintagePort::VintagePort(const VintagePort &vp) : Port(vp) // vp已经是vintagee了，所以不用重新设定stylele
{
    nickname = new char [strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort &VintagePort::operator = (const VintagePort &vp)
{
    if (this == &vp)
        return *this;

    Port::operator = (vp);
    delete [] nickname;
    nickname = new char [strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year= vp.year;

    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}

ostream &operator << (ostream &os, const VintagePort &vp)
{
    os << Port(vp);
    os << ", " << vp.nickname << ", " << "year";
    return os;
}

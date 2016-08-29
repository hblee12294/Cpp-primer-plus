#include <iostream>
#include "emp.h"

using std::endl;
using std::cout;
using std::cin;
using std::string;


//abstr_emp methods
abstr_emp::abstr_emp()
{
    fname = "null";
    lname = "null";
    job = "null";
}

abstr_emp::abstr_emp(const string &fn, const string &ln, const string &j)
                    : fname(fn), lname(ln), job(j) {}

void abstr_emp::ShowAll() const
{
    cout << "Name: " << lname << " " << fname << endl
         << "Job: " << job << endl;
}

void abstr_emp::SetAll()
{
    cout << "Enter first name: ";
    getline(cin, fname);
    cout << "Enter last name: ";
    getline(cin, lname);
    cout << "Enter job: ";
    getline(cin, job);
}

std::ostream &operator << (std::ostream &os, const abstr_emp &e)
{
    os << e.lname << " " << e.fname;
    return os;
}

abstr_emp::~abstr_emp() {}

//employee methods
emplyee::emplyee() : abstr_emp() {}

emplyee::emplyee(const string &fn, const string &ln, const string &j)
                : abstr_emp(fn, ln, j) {}

void emplyee::ShowAll() const
{
    abstr_emp::ShowAll();
}

void emplyee::SetAll()
{
    abstr_emp::SetAll();
}

//manager methods
manager::manager() : abstr_emp() {}

manager::manager(const string &fn, const string &ln,
                 const string &j, int ico)
                 : abstr_emp(fn, ln, j), inchargeof(ico) {}

manager::manager(const abstr_emp &e, int ico = 0) : abstr_emp(e), inchargeof(ico) {}

manager::manager(const manager &m) {}

void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "In charge of: " << inchargeof << endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter the number of employees in charge of: ";
    cin >> inchargeof;
}

//fink methods
fink::fink() : abstr_emp() {}

fink::fink(const string &fn, const string &ln,
           const string &j, const string &rpo)
           : abstr_emp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_emp &e, const string &rpo = '\0') : abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink &e) {}

void fink::getReportsTo()
{
    cout << "Enter the person who receive reports: ";
    getline(cin, reportsto);
}

void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "Reports to: " << reportsto << endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter the person who receive reports: ";
    getline(cin, reportsto);
}

//highfink methods
highfink::highfink() : abstr_emp(), manager(), fink() {}

highfink::highfink(const string &fn, const string &ln,
         const string &j, const string &rpo, int ico)
         : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp &e, const string &rpo, int ico)
        : abstr_emp(e), manager(e, ico), fink(e, rpo) {}

highfink::highfink(const fink &f, int ico) : abstr_emp(f), manager(f,ico), fink(f) {}

highfink::highfink(const manager &m, const string &rpo) : abstr_emp(m), manager(m), fink(m,rpo) {}

highfink::highfink(const highfink &h) {}

void highfink::ShowAll() const
{
    manager::ShowAll();
    cout << "Reports to: " << fink::ReportsTo() << endl;
}

void highfink::SetAll()
{
    manager::SetAll();
    cout << "Enter the person who receive reports: ";
    fink::getReportsTo();
}

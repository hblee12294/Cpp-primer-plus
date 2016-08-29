#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
    char *str;
    int ct;
};

void set(stringy &str_pt, const char *cpyer);
void show(const stringy &str_pt, int n = 1);
void show(const char *str_adr, int n = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality is not what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany,2);

    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Done!");

    delete [] beany.str;
    return 0;
}

void set(stringy &str_pt, const char *cpyer)
{
    char *pt = new char[strlen(cpyer)+1];
    str_pt.str = pt;
    strcpy(str_pt.str, cpyer);

    int n = 0;
    for(int i = 0; i < strlen(cpyer); ++i)
    {
        if(cpyer[i] != '\0') n++;
    }
    str_pt.ct = n;
}

void show(const stringy &str_pt, int n)
{
    while(n)
    {
        cout << str_pt.str << " ";
        --n;
    }
    cout << str_pt.ct;
    cout << endl;
}

void show(const char *str_adr, int n)
{
    while(n)
    {
        cout << str_adr << " ";
        --n;
    }
    cout << endl;
}

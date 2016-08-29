#include <iostream>
#include "cd.h"
using namespace std;

void Bravo(const Cd &disk);

int main()
{
    Cd cd1("Beatles", "Capital", 14, 35.5);
    Classic cd2 = Classic("Piano Sonata in B flat, fantastic in c", "Alfred Brandel", "Philips", 2, 57.17);
    Cd *pcd = &cd1;

    cout << "Using object directly:\n";
    cd1.Report();
    cd2.Report();

    cout << endl;
    cout << "Using type cd *pointer to objects:\n";
    pcd->Report();
    pcd = &cd2;
    pcd->Report();

    cout << endl;
    cout << "Calling a function with a Cd reference argument:\n";
    Bravo(cd1);
    Bravo(cd2);

    cout << endl;
    cout << "Testing assignment: \n";
    Classic copy;
    copy = cd2;
    copy.Report();

    return 0;
}

void Bravo(const Cd &disk)
{
    disk.Report();
}

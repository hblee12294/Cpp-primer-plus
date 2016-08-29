#include <iostream>

int main()
{
    using namespace std;
    int higgens = 5;
    int *pt = &higgens;

    cout << "Values of higgens = " << higgens
         << "; Address of higgens = " << &higgens << endl;
    cout << "Values of *pt = " << *pt
         << "; Value of pt = " << pt << endl;

    return 0;
}

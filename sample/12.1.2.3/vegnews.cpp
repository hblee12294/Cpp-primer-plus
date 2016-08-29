#include <iostream>
#include "strngbad.h"
using std::cout;

void callme1(Stringbad &);
void callme2(Stringbad);

int main()
{
    using std::endl;
    {
        cout << "Starting an inner block.\n";
        Stringbad headline1("Celery Stalk at Midnight");
        Stringbad headline2("Lettuce Prey");
        Stringbad sports("Spinach Leaves Bow1 for Dollars");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
        callme1(headline1);
        cout << "headline2: " << headline1 << endl;
        callme2(headline2);
        cout << "headline2: " << headline2 << endl << endl;

        Stringbad sailor = sports;
        cout << "sailor: " << sailor << endl << endl;

        cout << "Assign one object to another:\n";
        Stringbad knot;
        knot = headline1;
        cout << "knot: " << knot << endl << endl;
        cout << "Exiting the block.\n";
    }
    cout << "End of main()\n";

    return 0;
}

void callme1(Stringbad &rsb)
{
    cout << "String passed by reference:\n";
    cout << "   \"" << rsb << "\"\n";
}

void callme2(Stringbad sb)
{
    cout << "String passed by value:\n";
    cout << "   \"" << sb << "\"\n";
}

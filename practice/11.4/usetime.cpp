#include <iostream>
#include "time.h"

int main()
{
    using std::cout;
    using std::endl;
    Time now(3, 35);
    Time modifying(2, 48);
    Time temp;

    cout << "Now and Modifying:\n";
    cout << now << "; " << modifying << endl;
    now + modifying;
    cout << "now + modifying = " << now << endl;
    now * 1.7;
    cout << "now * 1.17: " << now << endl;
    cout << "10.0 * now: " << 10.0 * now << endl;

    return 0;
}

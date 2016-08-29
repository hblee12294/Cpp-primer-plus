#include <iostream>
#include "stock.h"

using std::cout;
using std::endl;

int main()
{
    Stonewt s1(178);
    Stonewt s2(100);
    Stonewt result;
    int n = 4;

    cout << "s1 & s2:\n"
         << s1 << endl
         << s2 << endl;

    cout << "s1 + s2" << endl;
    result = s1 + s2;
    cout << result << endl;
    result.mode_stn();
    cout << result << endl;

    cout << "s1 - s2" << endl;
    result = s1 - s2;
    cout << result << endl;
    result.mode_stn();
    cout << result << endl;

    cout << "s1 * 7" << endl;
    result = s1 * 7;
    cout << result << endl;
    result.mode_stn();
    cout << result << endl;

    return 0;
}

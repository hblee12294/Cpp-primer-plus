#include <iostream>
const int T = 60;
const int D = 24;

int main()
{
    using namespace std;
    cout << "Enter the number of seconds: ";
    int sec;
    cin >> sec;

    int rem1, rem2, rem3;
    rem1 = sec % (D * T * T);
    rem2 = rem1 % (T * T);
    rem3 = rem2 % T;
    cout << sec << " seconds = " << sec / D / T / T  << " days, "
         << rem1 / T / T << " hours, "
         << rem2  / T << " minutes, "
         << rem3 << " seconds"
         << endl;
    return 0;
}

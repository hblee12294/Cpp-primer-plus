#include <iostream>
int Trans = 220;

int main()
{
    using namespace std;

    cout << "Enter a distance in long: ";
    double d_long;
    cin >> d_long;
    cout << "It equals to " << d_long * Trans << " yards." << endl;
    return 0;
}

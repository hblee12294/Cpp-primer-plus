#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sum has " << sam << " dollars and sue has " << sue << " dollars deposited." << endl;
    cout << "Add $1 to each amount." << endl;
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and sue has " << sue << " dollars deposited.\nPoor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and sue has " << sue << " dollars deposited." << endl;
    cout << "Take $1 from each amount." << endl;
    sam -= 1;
    sue -= 1;
    cout << "Sam has " << sam << " dollars and sue has " << sue << " dollars deposited.\nLucky Sue!" << endl;
    return 0;
}

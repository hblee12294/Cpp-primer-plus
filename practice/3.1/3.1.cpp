#include <iostream>
const int Tran = 12;

int main()
{
    using namespace std;
    cout << "Enter your height in inch: ";
    int height;
    cin >> height;

    cout << "You are " << height % Tran << " foot " << height / Tran << " inches tall." << endl;
    return 0;
}

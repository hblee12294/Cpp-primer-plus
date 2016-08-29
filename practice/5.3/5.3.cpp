#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter a number(0 to quit): ";
    int t;
    cin >> t;

    int sum = 0;
    while(t!=0)
    {
        sum +=t;
        cout << "For now, the sum = " << sum << endl;
        cout << "Add another number to the sum: ";
        cin >> t;
    }

    cout << "Done!\n";
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct car
{
    string producer;
    int year;
};

int main()
{
    cout << "How many cars do you wish to catalog? ";
    int n;
    cin >> n;
    cin.get();

    car *p = new car[n];
    for(int i = 0; i < n; ++i)
    {
        cout << "Car #" << i + 1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin, p[i].producer);
        cout << "Please enter the year made: ";
        cin >> p[i].year;
        cin.get();
    }

    cout << "Here is your collection:\n";
    for(int i = 0; i < n; ++i)
        cout << p[i].year << " " << p[i].producer << endl;

    delete [] p;
    return 0;
}

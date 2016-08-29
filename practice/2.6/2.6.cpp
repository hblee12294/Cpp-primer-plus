#include <iostream>

double converse(double years);

int main()
{
    using namespace std;
    cout << "Enter the number of light years: ";
    double lyears;
    cin >> lyears;
    cout << lyears << " light years = " << converse(lyears) << " astronomical units." << endl;
    return 0;
}

double converse(double years)
{
    return years * 63240;
}

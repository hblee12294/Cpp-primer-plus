#include <iostream>

int main()
{
    using namespace std;

    cout << "Please enter your income this year: ";
    long income;
    double tax = 0;
    while(cin >> income && income > 0)
    {
        switch(income / 5000)
        {
            case 0  : break;
            case 1  :
            case 2  : tax = (income - 5000) * 0.1; break;
            case 3  :
            case 4  :
            case 5  :
            case 6  : tax = 10000 * 0.1 + (income - 15000) * 0.15; break;
            default : tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
        }
        cout << "The tax you should pay is " << tax << " tvarp.\n";
        cout << "Next income: ";
    }
    cout << "Bye!\n";
    return 0;
}

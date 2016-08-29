#include <iostream>

int factorial(int n);

int main()
{
    using namespace std;

    cout << "Enter a number (q to quit): ";
    int number;
    while(cin >> number)
    {
        cout << number << "! = "
             << factorial(number) << endl;

        cout << "Next number: ";
    }

    return 0;
}

int factorial(int n)
{
    int fac = 1;
    if(n > 0)
    {
        fac = n * factorial(n-1);
    }

    return fac;
}

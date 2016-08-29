#include <iostream>

double cal(double x, double y);

int main()
{
    using namespace std;

    cout << "Enter two numbers(0 to quit): ";
    double a, b;
    cin >> a >> b;
    while(a != 0 && b != 0)
    {
        cout << "Harmonic mean: " << cal(a, b) << endl;
        cout << "Next two numbers: ";
        cin >> a >> b;
    }
    cout << "Bye!\n";
    return 0;
}

double cal(double x, double y)
{
    return 2.0 * x * y / (x + y);
}

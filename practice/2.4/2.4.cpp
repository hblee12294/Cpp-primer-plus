#include <iostream>
int Months = 12;

int main()
{
    using namespace std;
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "There's total " << age * Months << " months in your life." << endl;
    return 0;
}

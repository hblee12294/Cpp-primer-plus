//∫Õ4.1∏„∑¥¡À

#include <iostream>

int main()
{
    using namespace std;

    cout << "What's your first name? ";
    char fname[40];
    cin.get(fname, 40).get();

    cout << "What's your last name? ";
    char lname[40];
    cin.get(lname, 40).get();

    cout << "What's your letter grade do you deserve? ";
    char grad;
    cin >> grad;

    cout << "What's your age? ";
    int age;
    cin >> age;

    cout << "Name: " << lname << ", " << fname << endl;
    cout << "Grade: " << grad << endl;
    cout << "Age: " << age << endl;

    return 0;
}

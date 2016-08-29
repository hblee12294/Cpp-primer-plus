#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "What's your first name? ";
    string fname;
    getline(cin, fname);

    cout << "What's your last name? ";
    string lname;
    getline(cin, lname);

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

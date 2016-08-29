#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter your first name: ";
    string fname;
    getline(cin, fname);

    cout << "Enter your last name: ";
    string lname;
    getline(cin, lname);

    string name;
    name = lname + ", " +fname;
    cout << "Here's the information in a single string: " << name << endl;

    return 0;
}

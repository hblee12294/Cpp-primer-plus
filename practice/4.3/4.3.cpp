#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    cout << "Enter your first name: ";
    char fname[20];
    cin >> fname;

    cout << "Enter your last name: ";
    char lname[20];
    cin >> lname;

    char name[50];
    strcpy(name, strcat(fname, ", "));
    strcat(name, lname);

    cout << "Here's the information in a single string: ";
    cout << name << endl;

    return 0;
}

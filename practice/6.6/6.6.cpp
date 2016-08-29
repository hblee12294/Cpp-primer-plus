#include <iostream>
#include <string>
using namespace std;

struct donor
{
    string name;
    double amount;
};

int main()
{
    donor *p = new donor[20];
    donor temp = {"none", 0};
    cout << "Enter donor's name and amount (enter 'quit' to stop)\n";
    cout << "     name  : ";
    getline(cin, temp.name);
    int i;
    for(i = 0; i < 20 && temp.name != "quit"; ++i)
    {
        cout << "     amount: ";
        cin >> temp.amount;
        cin.get();

        p[i].name = temp.name;
        p[i].amount = temp.amount;

        cout << "Next name  : ";
        getline(cin, temp.name);
    }

    cout << "\nGrand Patrons\n";
    int flag = 0;
    for(int j = 0; j < i; ++j)
    {
        if(p[j].amount > 10000)
        {
            cout << p[j].name << endl;
            flag = 1;
        }
    }
    if(flag == 0) cout << "none\n";

    cout << "\nPatrons\n";
    flag = 0;
    for(int j = 0; j < i; ++j)
    {
        if(p[j].amount <= 10000)
        {
            cout << p[j].name << endl;
            flag = 1;
        }
    }
    if(flag == 0) cout << "none\n";

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct exp
{
    double amount[Seasons];
};

void fill(exp *expen);
void show(const exp *expen);

int main()
{
    exp expenses;
    fill(&expenses);
    show(&expenses);
    return 0;
}

void fill(exp *expen)
{
    for(int i = 0; i < Seasons; ++i)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*expen).amount[i];
    }
}

void show(const exp *expen)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; ++i)
    {
        cout << *(Snames + i) << ": $" << (*expen).amount[i] << endl;
        total += (*expen).amount[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

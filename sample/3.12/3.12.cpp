#include <iostream>

int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pound = lbs % Lbs_per_stn;
    cout << lbs << " pounds are " << stone << " stone, " << pound << " pounds(s)." << endl;
    return 0;
}

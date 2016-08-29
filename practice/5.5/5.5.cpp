#include <iostream>
#include <string>
const int M = 12;

int main()
{
    using namespace std;
    string month[M] =
    {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    cout << "Enter the sale of each month:\n";
    int sale[M];
    int sum = 0;
    for(int i= 0; i < M; ++i)
    {
        cout << month[i] << ": ";
        cin >> sale[i];
        sum += sale[i];
    }
    cout << "In this year,the total sale is " << sum << endl;

    return 0;
}

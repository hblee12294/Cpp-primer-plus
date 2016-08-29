#include <iostream>
#include <string>
const int M = 12;
const int Y = 3;

int main()
{
    using namespace std;
    string month[M] =
    {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    cout << "Enter the sale of each month in 3 years:\n";
    int sale[Y][M];
    int y_sum[Y] = {0, 0, 0};
    for(int j = 0; j < Y; ++j)
    {
        cout << "The " << j + 1 << " year.\n";

        for(int i= 0; i < M; ++i)
        {
            cout << month[i] << ": ";
            cin >> sale[j][i];
            y_sum[j] += sale[j][i];
        }
    }

    for(int i = 0; i < Y; ++i)
        cout << "The sale of " << i + 1 << " year is " << y_sum[i] << endl;
    int sum = 0;
    for(int i = 0; i < Y; ++i)
        sum += y_sum[i];
    cout << "In this year,the total sale is " << sum << endl;

    return 0;
}

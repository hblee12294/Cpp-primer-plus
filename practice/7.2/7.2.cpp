#include <iostream>
const int Size = 10;

int input(double score[], int limit);
void show_score(const double score[], int limit);
double average(const double score[], int limit);

using namespace std;

int main()
{
    cout << "Enter your golf scores ( to quit):\n";
    double s[Size];
    int n = input(s, Size);
    show_score(s, n);

    cout << "The average of your " << n << " scores is "
         << average(s, n) << endl;

    return 0;
}

int input(double score[], int limit)
{
    int i = 0;

    cout << "#1: ";
    while(i < limit && cin >> score[i])
    {
        ++i;
        if(i == 10) break;
        cout << "#" << i + 1 << ": ";
    }

    return i;         //返回i是因为终止前的最后一次输入q是fail的，因此正好多加了一次i，所以不用再加一次i
}

void show_score(const double score[], int limit)
{
    cout << "Check the scores you entered:\n";
    for(int i = 0 ; i < limit; ++i)
        cout << score[i] << " ";
    cout << endl;
}

double average(const double score[], int limit)
{
    double sum = 0;
    for(int i = 0; i < limit; ++i)
        sum += score[i];

    return sum / limit;
}

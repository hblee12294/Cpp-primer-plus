#include <iostream>

int main()
{
    using namespace std;
    cout << "The Amazing Accounto will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter five values:\n";
    double numbers;
    double sum = 0.0;
    for(int i = 1; i <= 5; i++)
    {
        cout << "Value " << i << ": ";
        cin >> numbers;
        sum +=numbers;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "The Amazing Accounto bids you adieu!\n";
    return 0;
}

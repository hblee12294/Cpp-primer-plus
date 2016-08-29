#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter two integers (the smaller enters first): ";
    int i, j;
    cin >> i >> j;

    int sum = 0;
    for(i += 1;i < j; i++)
        sum += i;
    cout << "the sum of numbers between which you entered = " << sum << endl;
    return 0;
}

#include <iostream>

int main()
{
    using namespace std;
    //cout.setf(ios_base::fixed, ios_base::floatfield);

    cout << "Enter the world's population: ";
    long long ppl;
    cin >> ppl;
    cout << "Enter the population of the US: ";
    long long usppl;
    cin >> usppl;

    cout << "The population of the US is " << (double (usppl) / ppl) * 100 << "% of the world population." << endl;
    return 0;
}

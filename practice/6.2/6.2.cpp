#include <iostream>
#include <array>

int main()
{
    using namespace std;

    cout << "Please enter no more than 10 donations (non-numb to quit):\n";
    array <double, 10> donation;
    int i = 0;
    double sum = 0;
    while(cin >> donation[i] && i < 10)
    {
        sum += donation[i];
        ++i;
    }
    double avr = sum / i;
    cout << avr << " = average donation\n";

    int count = 0;
    for( i = 0; i < 10 && donation[i] != '\0'; ++i)
    {
        if(donation[i] > avr)
            ++count;
    }
    cout << count << " donations larger than average\n";

    return 0;
}

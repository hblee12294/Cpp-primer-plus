#include <iostream>

int main()
{
    using namespace std;

    int count = 0;
    char ch;
    while (cin.get(ch) && ch != '$')
        ++count;
    cout << "Next ch is " << ch << endl;
    cout << "Total " << count << " ch.\n";

    return 0;
}

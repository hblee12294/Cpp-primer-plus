#include <iostream>

int main()
{
    using namespace std;
    int n;

    cout << "Enter numbers in the range 1-10 to find may favorite number\n";
    do
    {
        cin >> n;
    }while(n != 6);
    cout << "Yes, 6 is my favorite number.\n";
    return 0;
}

#include <iostream>

void showtime(int h, int m);

int main()
{
    using namespace std;
    cout << "Enter the number of hours: ";
    int hours;
    cin >> hours;
    cout << "Enter the number of minuets: ";
    int minuets;
    cin >> minuets;
    showtime(hours,minuets);
    return 0;
}

void showtime(int h, int m)
{
    std::cout << "Time: " << h << ":" << m << std::endl;
}

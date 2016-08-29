#include <iostream>
void start();
void ends();

using namespace std;

int main()
{
    start();
    start();
    ends();
    ends();
    return 0;
}

void start()
{
    cout << "Three blind mice" << endl;
}

void ends()
{
    cout << "See how they run" << endl;
}

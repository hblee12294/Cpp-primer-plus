#include <iostream>
#include <cstring>
#include <new>

const int BUF = 512;
char buffer[BUF];

struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    using namespace std;
    chaff *pt = new (buffer) chaff[2];

    for(int i = 0; i < 2; ++i)
    {
        cout << "#" << i + 1 << "\ndross: ";
        char temp[20] = "null";
        while(cin.get(temp, 20).get() && !strcmp(temp, ""))
            cout << "You enter a blank line, enter again:\n";
        strcpy(pt[i].dross, temp);

        cout << "slag: ";
        cin >> pt[i].slag;
        cin.get();
    }

    for(int i = 0; i < 2; ++i)
    {
        cout << pt[i].dross << '\t' << pt[i].slag << endl;
    }

    return 0;
}

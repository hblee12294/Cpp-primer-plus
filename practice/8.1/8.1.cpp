#include <iostream>
int COUNT = 0;

void print(const char *pt, int n = 0);

int main()
{
    using namespace std;
    char str[40] = "It's a stupid program.";

    print(str);
    print(str,3);
    print(str,100);
    print(str);
    print(str,64);
    print(str,-16);

    return 0;
}

void print(const char *pt, int n)
{
    using namespace std;
    int c = COUNT;

    if(n == 0)
        cout << pt;
    else
        while(c--) cout << pt << " ";
    cout << endl;

    COUNT++;
}

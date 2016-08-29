#include <iostream>
const int ArSize = 20;
struct bop
{
    char fullname[ArSize];
    char title[ArSize];
    char bopname[ArSize];
    int preference;
};
void showmanu();

using namespace std;

int main()
{
    bop mem[5] =
    {
        {"Wimp Macho", "Manager", "Crazy Beep", 1},
        {"Raki Rhodes", "Junior Programmer", "Lowkey Boy", 2},
        {"Celia Laiter", "Assistant", "MIPS", 3},
        {"Hoppy Hipman", "Tester", "LOOPY", 2},
        {"Pat Hand", "Quality Checker", "Mop", 1}
    };

    showmanu();
    cout << "Enter your choice: ";
    char ch;
    cin.get(ch).get();
    while(ch != 'q')
    {
        switch(ch)
        {
            case 'a' : for(int i = 0; i < 5; ++i) cout << mem[i].fullname << endl; break;
            case 'b' : for(int i = 0; i < 5; ++i) cout << mem[i].title << endl; break;
            case 'c' : for(int i = 0; i < 5; ++i) cout << mem[i].bopname << endl; break;
            case 'd' : for(int i = 0; i < 5; ++i) switch(mem[i].preference)
            {
                case 1  : cout << mem[i].fullname << endl; break;
                case 2  : cout << mem[i].title << endl; break;
                case 3  : cout << mem[i].bopname << endl; break;
            }; break;
            default  : cout << "Please enter from a, b, c, d, q!\n";
        }
        cout << "Next choice: ";
        cin.get(ch).get();
    }

    cout << "Bye!\n";
    return 0;
}

void showmanu()
{
    cout << "Benevolent Order of Programmers Report\n"
            "a. display by name     b. display by title\n"
            "c. display by bopname  d. display by preference\n"
            "q. quit\n";
}

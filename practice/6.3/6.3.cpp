#include <iostream>
void showmanu();

using namespace std;

int main()
{
    showmanu();
    char ch;
    int flag = 1;
    cin.get(ch);
    while(flag)
    {
        switch(ch)
        {
            case 'c'    : cout << "Beetle is not a carnivore.\n"; flag = 0; break;
            case 'p'    : cout << "To be a pianist is sucks.\n"; flag = 0; break;
            case 't'    : cout << "A maple is a tree.\n"; flag = 0; break;
            case 'g'    : cout << "The boring game will kill you.\n"; flag = 0; break;
            default     : cout << "Please enter a c, p, t, or g: ";
        }
        cin.get(ch);
    }

    return 0;
}

void showmanu()
{
    cout << "Please enter one of the following choices:\n"
         << "c) carnivore   p) pianist" << endl
         << "t) tree        g) game" << endl;
}

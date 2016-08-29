#include <iostream>
#include "person.h"
using std::endl;
using std::cout;

int main()
{
 //   Person jack("Jone", "Jack");
 //   jack.Show();
 //   cout << endl;

    Gunslinger butcher("Butcher", "Hunter", 5.5, 20);
    butcher.Show();
    cout << endl;

    PokerPlayer jack("Jone", "Jack");
    jack.Show();
    cout << endl;

    BadDude roger("Henry", "Roger", 6.7, 14);
    roger.Show();

    return 0;
}

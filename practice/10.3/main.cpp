#include <iostream>
#include "golf.h"

int main()
{
    using std::cout;
    using std::endl;

    cout << "Here is Ann's info:\n";
    Golf ann("Ann Birdfree", 24);
    ann.showgolf();
    cout << endl;

    cout << "Now, enter Andy's info\n";
    Golf andy;
    andy.setgolf();
    andy.showgolf();
    cout << endl;

    cout << "Modify Andy's handicap\n";
    andy.hcmodify(10);
    andy.showgolf();

    return 0;
}

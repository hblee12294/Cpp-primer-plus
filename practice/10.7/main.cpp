#include <iostream>
#include "prog.h"

int main()
{
    using std::cout;

    cout << "Default item:\n";
    Plorg def;
    def.show();

    cout << "Another item:\n";
    Plorg item("Junmlbo", 100);
    item.show();

    cout << "Update CI:\n";
    item.update(25);
    item.show();

    return 0;
}

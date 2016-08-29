#include <iostream>
#include "move.h"

int main()
{
    using std::cout;
    using std::endl;

    cout << "Start walking:\n";
    Move mv;
    mv.showmove();

    cout << "Add first move:\n";
    Move move1(23, 84);
    mv = mv.add(move1);
    mv.showmove();

    cout << "Add second move:\n";
    Move move2(90, 1);
    mv = mv.add(move2);
    mv.showmove();

    return 0;

}

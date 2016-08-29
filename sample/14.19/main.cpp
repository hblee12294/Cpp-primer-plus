#include <iostream>
#include "pairs.h"

int main()
{
    using std::cout;
    using std::endl;
    using std::string;
    Pair<string, int> ratings[4] =
    {
        Pair<string, int>("The purpled duck", 5),
        Pair<string, int>("Jaquie's frisco al", 4),
        Pair<string, int>("Cafe souffle", 5),
        Pair<string, int>("Bertie", 3)
    };

    int joints = sizeof(ratings) / sizeof(Pair<string, int>);
    cout << "Rating:\t Eatery\n";
    for (int i =0; i < joints; ++i)
        cout << ratings[i].second() << ":\t"
             << ratings[i].first() << endl;
    cout << "Oops! Revised rating:\n";
    ratings[3].first() = "Bertiee's Fab";
    ratings[3].second() = 6;
    cout << ratings[3].second() << ":\t"
         << ratings[3].first() << endl;
    return 0;
}

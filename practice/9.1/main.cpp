#include <iostream>
#include "golf.h"

int main()
{
    using namespace std;

    cout << "Enter the Ann's info with the first version\n";
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    cout << "Next, Andy with the second version\n";
    golf andy;
    setgolf(andy);
    showgolf(andy);

    cout << "Modify Andy's handicap\n";
    handicap(andy, 10);
    showgolf(andy);

    return 0;
}

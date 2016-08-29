#include <iostream>
#include "tv_remote.h"

int main()
{
    using std::cout;

    Tv s42;
    Remote grey;

    cout << "Initial settings for 42\" TV:\n";
    s42.settings();
    s42.buzz(grey);
    cout << std::endl;

    s42.onoff();
    s42.chanup();
    cout << "\nAdjusted settings for 42\" TV:\n";
    s42.settings();

    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\n42\" settings after using remote:\n";
    s42.settings();

    s42.buzz(grey);
    cout << "\nYou answer is wrong!\n";
    s42.intereact(grey);
    s42.settings();

    return 0;
}

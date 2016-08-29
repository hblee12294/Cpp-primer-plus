#include <iostream>
struct inflatable
{
    char name[20];
    float volum;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",
        1.88,
        29.99
    };

    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };

    cout << "Expend your guest list with " << guest.name;
    cout << " and " << pal.name << endl;
    cout << "You have both for $";
    cout << guest.price + pal.price << endl;

    return 0;
}

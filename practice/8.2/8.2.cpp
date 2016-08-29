#include <iostream>
#include <cstring>
using namespace std;
const int ArSize = 50;

struct CandyBar
{
    char name[ArSize];
    double weight;
    int calorie;
};

void item_enter(CandyBar &item, char *nm = "Millennium", double wt = 2.85, int cl = 350);
void show_stock(CandyBar &item);

int main()
{
    CandyBar brands[3];

    cout << "Items entering ..." << endl;
    item_enter(brands[0]);
    item_enter(brands[1], "Big rabbit", 2.5, 300);
    item_enter(brands[2], "Snickers", 5, 780);
    cout << "Done!" << endl;

    cout << "Stock list:" << endl;
    for(int i = 0; i < 3; ++i)
        show_stock(brands[i]);

    return 0;
}

void item_enter(CandyBar &item, char *nm, double wt, int cl)
{
    strcpy(item.name, nm);
    item.weight = wt;
    item.calorie = cl;
}

void show_stock(CandyBar &item)
{
    cout << item.name << '\t'
         << item.weight << '\t'
         << item.calorie << endl;
}

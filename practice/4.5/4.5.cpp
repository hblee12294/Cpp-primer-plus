#include <iostream>

struct CandyBar
{
    char brand[30];
    float weight;
    int calorie;
};

int main()
{
    using namespace std;

    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "Info of this candy:\n";
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calorie << endl;

    return 0;
}

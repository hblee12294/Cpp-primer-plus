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

    CandyBar snack[3] =
    {
        {"Mocha Munch", 2.3, 350},
        {"Cola booo", 5.6, 240},
        {"Aroma", 4.4, 250}
    };

    cout << "Info of three candy:\n";
    cout << "Brand: " << snack[0].brand << endl;
    cout << "Weight: " << snack[0].weight << endl;
    cout << "Calorie: " << snack[0].calorie << endl << endl;

    cout << "Brand: " << snack[1].brand << endl;
    cout << "Weight: " << snack[1].weight << endl;
    cout << "Calorie: " << snack[1].calorie << endl << endl;

    cout << "Brand: " << snack[2].brand << endl;
    cout << "Weight: " << snack[2].weight << endl;
    cout << "Calorie: " << snack[2].calorie << endl << endl;
    return 0;
}

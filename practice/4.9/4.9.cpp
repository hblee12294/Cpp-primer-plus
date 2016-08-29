#include <iostream>
#include <cstring>

struct CandyBar
{
    char brand[30];
    float weight;
    int calorie;
};

int main()
{
    using namespace std;

    CandyBar *p = new CandyBar[3];

    strcpy(p[0].brand, "Mocha Munch");
    p[0].weight = 2.3;
    p[0].calorie = 350;

    strcpy(p[1].brand, "Cola booo");
    p[1].weight = 5.6;
    p[1].calorie = 240;

    strcpy(p[2].brand, "Aroma");
    p[2].weight = 4.4;
    p[2].calorie = 250;

    cout << "Info of three candy:\n";
    cout << "Brand: " << p[0].brand << endl;
    cout << "Weight: " << p[0].weight << endl;
    cout << "Calorie: " << p[0].calorie << endl << endl;

    cout << "Brand: " << p[1].brand << endl;
    cout << "Weight: " << p[1].weight << endl;
    cout << "Calorie: " << p[1].calorie << endl << endl;

    cout << "Brand: " << p[2].brand << endl;
    cout << "Weight: " << p[2].weight << endl;
    cout << "Calorie: " << p[2].calorie << endl << endl;
    return 0;
}

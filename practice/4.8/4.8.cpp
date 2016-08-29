#include <iostream>
#include <string>

struct Pizza
{
    std::string belong;
    int diameter;
    float weight;
};

int main()
{
    using namespace std;
    Pizza *p = new Pizza;

    cout << "Enter the diameter of this pizza: ";
    cin >> p->diameter;
    cin.get();

    cout << "Enter the company this pizza belong to: ";
    getline(cin, p->belong);

    cout << "Enter the weight of this pizza: ";
    cin >> p->weight;

    cout << "Conform info about your pizza:\n";
    cout << "Company: " << p->belong << endl;
    cout << "Diameter: " << p->diameter << endl;
    cout << "Weight: " << p->weight << endl;

    return 0;
}

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
    Pizza piece;

    cout << "Enter the company this pizza belong to: ";
    getline(cin, piece.belong);

    cout << "Enter the diameter of this pizza: ";
    cin >> piece.diameter;

    cout << "Enter the weight of this pizza: ";
    cin >> piece.weight;

    cout << "Conform info about your pizza:\n";
    cout << "Company: " << piece.belong << endl;
    cout << "Diameter: " << piece.diameter << endl;
    cout << "Weight: " << piece.weight << endl;

    return 0;
}

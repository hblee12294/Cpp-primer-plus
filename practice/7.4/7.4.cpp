#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double total_f, total_s, choice_f, choice_s;

    cout << "Enter the total number of choices from field area and\n"
         << "the number of picks allowed: ";
    cin >> total_f >> choice_f;

    cout << "Enter the total number of choices from special area and\n"
         << "the number of picks allowed: ";
    cin >> total_s >> choice_s;

    cout << "You have one chance in ";
    cout << probability(total_f, choice_f) * probability(total_s, choice_s)
         << " of winning\n";

    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for(n = numbers, p = picks; p > 0; n--, p--)
        result *= n / p;

    return result;
}

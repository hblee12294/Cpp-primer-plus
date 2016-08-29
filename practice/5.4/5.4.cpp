#include <iostream>
float Int_Rate1 = 0.1;
float Int_Rate2 = 0.05;

int main()
{
    using namespace std;

    cout << "Enter the initial money Daphne invests: ";
    float val_d;
    cin >> val_d;

    cout << "Enter the initial money Cleo invests: ";
    float val_c;
    cin >> val_c;

    int year = 0;
    float cap_d = val_d;
    float cap_c = val_c;

    while((cap_d += Int_Rate1 * val_d) >= (cap_c += Int_Rate2 * cap_c))
        ++year;

    cout << "In " << year + 1 << " years, the capital of Cleo will surpass that of Daphne.\n";
    cout << "The capital of Daphne:\t" << cap_d << endl;
    cout << "The capitak of Cleo:\t" << cap_c << endl;
    return 0;
}

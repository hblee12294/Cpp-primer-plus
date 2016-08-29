#include <iostream>
const float L_PER_G = 4.5;
const float MI_PER_KM = 0.6214;
int main()
{
    using namespace std;
    cout << "Enter driving distance in KM and gasoline in Liter: ";
    float km, lit;
    cin >> km >> lit;

    cout << "Your car uses " << (km / lit) * 100 << " L in Euro style, "
         << (km * MI_PER_KM) / (lit / L_PER_G) << " Gallon in US style"
         << endl;
    return 0;
}

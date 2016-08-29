#include <iostream>
const int F_I_CONV = 12;
const float I_M_CONV = 0.0254;
const float K_P_CONV = 2.2;

int main()
{
    using namespace std;
    cout << "Enter your height in foot part and inch part: ";
    int foot,inch;
    cin >> foot >> inch;
    cout << "Then, enter your weight in pond: ";
    float weight;
    cin >> weight;

    cout << "\nLet's confirm your data" << endl;
    float h;
    h = (foot * F_I_CONV + inch) * I_M_CONV;
    cout << "Height: " << h << " m" << endl;
    float w;
    w = weight / K_P_CONV;
    cout << "Weight: " << w << " kg" << endl << endl;

    cout << "So, your BMI = " << w / (h * h) << endl;
    return 0;
}

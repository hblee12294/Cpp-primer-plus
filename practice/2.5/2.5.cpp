#include <iostream>
float C_to_F(float);

int main()
{
    using namespace std;
    cout << "Enter a Celsius value: ";
    float cel;
    cin >> cel;
    cout << cel << " degrees Celsius is " << C_to_F(cel) << " degrees Fahrenheit." << endl;
    return 0;
}

float C_to_F(float c)
{
    float fah;
    fah = 1.8*c + 32.0;
    return fah;
}

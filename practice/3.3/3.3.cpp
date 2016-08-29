#include <iostream>
const int FAC = 60;

int main()
{
    using namespace std;
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First enter the degrees: ";
    float deg;
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    float min_arc;
    cin >> min_arc;
    cout << "Finally, enter the seconds of arc: ";
    float sec_arc;
    cin >> sec_arc;

    cout << deg << " degrees, " << min_arc << " minutes, " << sec_arc << " seconds = "
         << deg + min_arc / FAC + sec_arc / (FAC * FAC) << " degrees." <<endl;
    return 0;
}

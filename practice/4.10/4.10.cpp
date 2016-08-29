#include <iostream>
#include <array>

int main()
{
    using namespace std;
    array<float, 3> score;

    cout << "Enter your 3 scores in second: " << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << "#" << i + 1 << ": ";
        cin >> score[i];
    }

    cout << "The average score of 3 times in the 40-meter dash: "
         << (score[0] + score[1] + score[2]) / 3 << "s.\n";

    return 0;
}

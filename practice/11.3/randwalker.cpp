#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int N;
    int n = 0;
    double sum = 0;
    double minstep = 1000000;
    double maxstep = 0;

    cout << "First, enter times you want to test: ";
    cin >> N;

    cout << "Enter target distance (q to quit): ";
    while (cin >> target )
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep)) break;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            ++steps;
        }

        maxstep = maxstep > result.magval() ? maxstep : result.magval();
        minstep = minstep < result.magval() ? minstep : result.magval();
        sum += result.magval();

        steps = 0;
        result.reset(0.0, 0.0);
        if (++n == N) break;
        cout << "Enter target distance (q to quit): ";
    }

    cout << "In " << N << " tests, the highest step = " << maxstep
         << ",\nthe fewest step = " << minstep << ",\naverage steps = "
         << sum / N << endl;
    cout << "Bye\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}

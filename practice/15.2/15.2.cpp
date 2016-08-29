#include <iostream>
#include <exception>
#include <stdexcept>
#include <cmath>
using namespace std;

class bad_hmean : public std::logic_error
{
public:
    double v1;
    double v2;
    explicit bad_hmean(double a = 0, double b = 0, const char *s = "Error in hmean().\n")
                        : logic_error(s), v1(a), v2(b) {}
    ~bad_hmean() throw() {}
};

class bad_gmean : public std::logic_error
{
public:
    double v1;
    double v2;
    explicit bad_gmean(double a, double b = 0, const char *s = "Error in gmean().\n")
                        : logic_error(s), v1(a), v2(b) {}
    ~bad_gmean() throw() {}
};

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try
        {
            z= hmean(x,y);
            cout << "Harmonic mean of " << x << " and " << y
                 << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                 << " is " << gmean(x,y) << endl;
            cout << "Enter next set of numbers <q to quit> : \n";
        }
        catch (bad_hmean &bg)
        {
            cout << bg.what();
            cout << "Try again.\n";
            continue;
        }
        catch (bad_gmean &hg)
        {
            cout << hg.what();
            cout << "Sorry, you don't get to play any more.\n";
            break;
        }
    }
    cout << "Bye.\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean();
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a,b);
    return std::sqrt(a * b);
}

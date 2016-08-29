#include <iostream>
#include <initializer_list>

template<typename T>
T average_list(std::initializer_list<T> lis)
{
    T sum;
    int i = 0;
    for (auto p = lis.begin(); p != lis.end(); ++p, ++i)
        sum += *p;
    return sum / i;
}

int main()
{
    using namespace std;
    auto q = average_list({15.4, 10.7, 9.0});
    cout << q << endl;
    cout << average_list({20, 30, 19, 32, 24}) << endl;
    auto ad = average_list<double>({'A', 7, 65.33});
    cout << ad << endl;
    return 0;
}

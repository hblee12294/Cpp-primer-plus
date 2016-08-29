#include <iostream>
#include "sales.h"

using namespace std;

int main()
{
    using namespace SALES;

    cout << "Initial with constructor\n";
    double arr[4] = {234, 472, 833, 163};
    Sales sale1(arr);
    sale1.showSales();
    cout << endl;

    cout << "Initial with interaction version\n";
    Sales sale2;
    sale1.setSales();
    sale1.showSales();

    return 0;
}

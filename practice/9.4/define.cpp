#include <iostream>
#include "sales.h"

namespace SALES
{
    using std::cin;
    using std::cout;
    using std::endl;

    void setSales(Sales &s, const double ar[], int n)
    {
        for(int i = 0; i < n; ++i)
            s.sales[i] = ar[i];

        double max_temp = s.sales[0];
        double min_temp = s.sales[0];
        double sum = s.sales[0];

        for(int i =1 ; i < n; ++i)
        {
            if(s.sales[i] > max_temp) max_temp = s.sales[i];
            if(s.sales[i] < min_temp) min_temp = s.sales[i];
            sum += s.sales[i];
        }

        s.average = sum / n;
        s.min = min_temp;
        s.max = max_temp;
    }

    void setSales(Sales &s)
    {
        cout << "Enter 4 quarters sales: ";
        cin >> s.sales[0] >> s.sales[1] >> s.sales[2] >> s.sales[3];

        double max_temp = s.sales[0];
        double min_temp = s.sales[0];
        double sum = s.sales[0];

        for(int i = 1; i < 4; ++i)
        {
            if(s.sales[i] > max_temp) max_temp = s.sales[i];
            if(s.sales[i] < min_temp) min_temp = s.sales[i];
            sum += s.sales[i];
        }

        s.average = sum / 4;
        s.min = min_temp;
        s.max = max_temp;
    }

    void showSales(const Sales &s)
    {
        for(int i = 0; i < 4; ++i)
            cout << "sales: " << s.sales[i] << '\t';
        cout << "\naverage = " << s.average << endl;
        cout << "min = " << s.min << endl;
        cout << "max = " << s.max << endl;
    }
}

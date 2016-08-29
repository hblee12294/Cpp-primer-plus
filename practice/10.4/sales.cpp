#include <iostream>
#include "sales.h"

namespace SALES
{
    Sales::Sales()
    {
        for(int i = 0; i < QUARTERS; ++i)
            sales[i] = 0.0;
        average = 0.0;
        max = 0.0;
        min = 0.0;
    }

    Sales::Sales(const double sale[])
    {
        for (int i = 0; i < QUARTERS; ++i)
            sales[i] = sale[i];

        double max_temp = sale[0];
        double min_temp = sale[0];
        double sum = sale[0];

        for(int i =1 ; i < QUARTERS; ++i)
        {
            if(sales[i] > max_temp) max_temp = sales[i];
            if(sales[i] < min_temp) min_temp = sales[i];
            sum += sales[i];
        }

        average = sum / QUARTERS;
        min = min_temp;
        max = max_temp;
    }

    void Sales::setSales()
    {
        using std::cout;
        using std::cin;

        cout << "Enter sales of 4 quarters:\n";
        double temp_sale[QUARTERS];
        for (int i = 0; i < QUARTERS; ++i)
        {
            cout << " #" << i + 1 << ": ";
            cin >> temp_sale[i];
        }

        *this = Sales(temp_sale);
    }

    void Sales::showSales() const
    {
        using std::cout;
        using std::endl;

        for(int i = 0; i < 4; ++i)
            cout << "sales: " << sales[i] << '\t';
        cout << "\naverage = " << average << endl;
        cout << "min = " << min << endl;
        cout << "max = " << max << endl;
    }

}

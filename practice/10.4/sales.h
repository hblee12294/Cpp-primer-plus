#ifndef SALES_H_INCLUDED
#define SALES_H_INCLUDED

namespace SALES
{
    class Sales
    {
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
     public:
        Sales();
        Sales(const double sale[]);
        ~Sales(){}
        void setSales();
        void showSales() const;
    };
}

#endif // SALES_H_INCLUDED

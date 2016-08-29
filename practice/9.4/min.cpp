#include <iostream>
#include "sales.h"

int main()
{
    using namespace SALES;
    Sales sale1;
    double sale_quarters[QUARTERS] = {234, 645, 468, 946};
    setSales(sale1, sale_quarters, 4);
    showSales(sale1);

    Sales sale2;
    setSales(sale2);
    showSales(sale2);

    return 0;
}

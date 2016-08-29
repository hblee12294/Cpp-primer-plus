#include <iostream>
const int ArSize = 10;

double *Fill_array(double *pt, int max);
void Show_array(const double *begin, const double *end);
void Reverse_array(double *begin, double *end);

using namespace std;

int main()
{
    cout << "Enter no more than " << ArSize << " numbers (q to quit):\n";

    double numbers[ArSize];
    double *end_arr = Fill_array(numbers, ArSize);

    cout << "Now, the array is:\n";
    Show_array(numbers, end_arr);

    Reverse_array(numbers, end_arr);
    cout << "After reversing the whole array, it is:\n";
    Show_array(numbers, end_arr);

    Reverse_array(numbers+1, end_arr -1);
    cout << "Except for the first and last number, the reversed array is:\n";
    Show_array(numbers, end_arr);

    cout << "------over\n";

    return 0;
}

double *Fill_array(double *pt, int max)
{
    int i = 0;
    cout << "#1: ";
    while(i < max && cin >> *pt)
    {
        ++i;
        ++pt;
        if(i == max) break;
        cout << "#" << i + 1 << ": ";
    }

    return pt;
}

void Show_array(const double *begin, const double *end)
{
    const double *ppt;
    for(ppt = begin; ppt < end; ++ppt)
        cout << *ppt << " ";
    cout << endl;
}

void Reverse_array(double *begin, double *end)
{
    double temp;
    --end;
    for(; begin <= end; ++begin, --end)
    {
        temp = *begin;
        *begin = *end;
        *end = temp;
    }
}

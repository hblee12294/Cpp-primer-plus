#include <iostream>
const int ArSize = 10;

int Fill_array(double arr[], int max);
void Show_array(const double arr[], int n);
void Reverse_array(double arr[], int n);

using namespace std;

int main()
{
    cout << "Enter no more than " << ArSize << " numbers (q to quit):\n";

    double numbers[ArSize];
    int size = Fill_array(numbers, ArSize);

    cout << "Now, the array is:\n";
    Show_array(numbers, size);

    Reverse_array(numbers, size);
    cout << "After reversing the whole array, it is:\n";
    Show_array(numbers, size);

    Reverse_array(numbers+1, size - 2);
    cout << "Except for the first and last number, the reversed array is:\n";
    Show_array(numbers, size);

    cout << "------over\n";

    return 0;
}

int Fill_array(double arr[], int max)
{
    int i = 0;
    cout << "#1: ";
    while(i < max && cin >> arr[i])
    {
        ++i;
        if(i == max) break;
        cout << "#" << i + 1 << ": ";
    }

    return i;
}

void Show_array(const double arr[], int n)
{
    for(int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void Reverse_array(double arr[], int n)
{
    double temp;
    int i;
    for(i = 0; i <= n/2; ++i)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

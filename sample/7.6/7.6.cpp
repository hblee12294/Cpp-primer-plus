#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);

int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    cout << cookies << " = array address, ";
    cout << sizeof cookies << " = size of cookies\n";

    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, 3);
    cout << "First 3 eaters ate: " << sum << endl;
    sum = sum_arr(cookies + 4, 4);
    cout << "Last 4 eaters ate: " << sum << endl;
    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;
    std::cout << arr << " = arr, ";
    std::cout << sizeof arr << " = size of arr\n";

    for(int i = 0; i < n; ++i)
        total += arr[i];
    return total;
}

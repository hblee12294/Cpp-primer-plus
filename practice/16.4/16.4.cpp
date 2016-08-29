#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using std::cout;
using std::list;

int reduce(int ar[], int n);
void Show(int i) { std::cout << i << " "; }

int main()
{
    int arr[10] = {3, 3, 5, 2, 3, 5, 9, 8, 6, 4};
    list<int> vec(arr, arr + 10);
    cout << "Original array is:\n";
    for_each(vec.begin(), vec.end(), Show);

    cout << "\nAfter using the reduce() function:\n";
    int left;
    left = reduce(arr, 10);
    cout << "\nThere's only " << left << " int left.\n";

    return 0;
}

int reduce(int ar[], int n)
{
    list<int> infunc(ar, ar + n);
    infunc.sort();
    infunc.unique();
    for_each(infunc.begin(), infunc.end(), Show);

    return infunc.size();
}

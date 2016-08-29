#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

template <class T>
int reduce(T ar[], int n)
{
    sort(ar, ar + n);
    const auto iter_end = unique(ar, ar + n);
    return distance(ar, iter_end);
}

int main()
{
    long ar[] = {1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
    copy(ar, ar + sizeof(ar)/sizeof(ar[0]), ostream_iterator<int>(cout, " "));
    cout << endl;
    int ar_size = reduce(ar, sizeof(ar)/sizeof(ar[0]));
    cout << "Totally " << ar_size << " longs left.\n";
    copy(ar, ar + sizeof(ar)/sizeof(ar[0]), ostream_iterator<int>(cout, " "));
    cout << endl << endl;

    string ar_str[] = {"hello", "the", "who", "who", "hello"};
    copy(ar_str, ar_str + sizeof(ar_str)/sizeof(ar_str[0]), ostream_iterator<string>(cout, " "));
    cout << endl;
    int ar_str_size = reduce(ar_str, sizeof(ar_str)/sizeof(ar_str[0]));
    cout << "There's " << ar_str_size << " strings left.\n";
    copy(ar_str, ar_str + sizeof(ar_str) / sizeof(ar_str[0]), ostream_iterator<string>(cout, " "));
    cout << endl;

    return 0;



}

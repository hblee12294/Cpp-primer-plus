#include <iostream>
template <typename T>
T max5(T arr[]);

int main()
{
    using namespace std;

    int arr1[5] = {1, 2, 3, 4, 5};
    float arr2[5] = {2.5, 6.7, 9.4, 0.3, 2.2};

    cout << "The max number is: " << max5(arr1) << endl;
    cout << "The max number is: " << max5(arr2) << endl;

    return 0;
}

template <typename T>
T max5(T arr[])
{
    T max = arr[0];
    for(int i = 1; i < 5; ++i)
        if(arr[i] > max) max = arr[i];

    return max;
}

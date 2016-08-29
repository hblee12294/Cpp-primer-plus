#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T arr[], int n);
template <> char *maxn(char *arr[], int n);

int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    double arr2[4] = {3.56, 6.74, 3.07, 10.10};
    char *arr3[5] =
    {
        "normal",
        "excellent",
        "mediocre",
        "outstanding",
        "stupid"
    };

    cout << maxn(arr1, 6) << endl;
    cout << maxn(arr2, 4) << endl;
    cout << maxn(arr3, 5) << " " << (void *)maxn(arr3, 5)<< endl;

    return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
    T max = arr[0];
    for(int i = 1; i < n; ++i)
        if(arr[i] > max) max = arr[i];
    return max;
}

template <> char *maxn(char *arr[], int n)
{
    char *max = *arr;
    for(int i = 1; i < n; ++i)
        if(strlen(max) < strlen(*(arr+i))) max = arr[i];
    return max;
}

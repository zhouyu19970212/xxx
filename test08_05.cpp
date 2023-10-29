#include <iostream>
using namespace std;

template<class T>
T maxn(const T arr[5]);

int main()
{
    int arr[5] = {0, -1, 2, 9, -99};
    int max_value = maxn(arr);
    cout << "int max: " << max_value << endl;
    double arr1[5] = {0.0, 0.1, -0.002, 6.9, 99.0};
    double max_value1 = maxn(arr1);
    cout << "double max: " << max_value1 << endl;
    return 0;
}

template<class T>
T maxn(const T arr[5])
{
    T max_element = LONG_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max_element)
            max_element = arr[i];
    }
    return max_element;
}
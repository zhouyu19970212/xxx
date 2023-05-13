#include <iostream>
using namespace std;
int Fill_array(double[], int);
void Show_array(double[], int);
void reverse_array(double[], int);
int main()
{
    double arr[10] = {0};
    int cnt = Fill_array(arr, 10);
    cout << "cnt = " << cnt << endl;
    Show_array(arr, 10);
    reverse_array(arr, 10);
    Show_array(arr, 10);
    return 0;
}
int Fill_array(double arr[], int size)
{
    cout << "input a num to fill this array" << endl;
    int i;
    double tmp;
    for (i = 0; i < size; i++)
    {
        cin >> tmp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n');
            break;
        }
        else
        {
            arr[i] = tmp;
        }
    }
    return i;
}

void Show_array(double arr[], int size)
{
    cout << "array: ";
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse_array(double arr[], int size)
{
    int tmp;
    for (int i = 0; i < size / 2; i++)
    {
        tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
}
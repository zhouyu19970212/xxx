#include <iostream>
using namespace std;
int recurse(int);
int main()
{
    int num;
    cin >> num;
    int res = recurse(num);
    cout << "res = " << res << endl;
    return 0;
}
int recurse(int num)
{
    if (num <= 0)
        return 0;
    cout << "layer: " << num << endl;
    if (num == 1)
        return num;
    int _num = num;
    int res = recurse(--_num);
    return res * num;
}
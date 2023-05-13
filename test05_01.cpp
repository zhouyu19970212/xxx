#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int res = (a + b) * (b - a + 1) / 2;
    cout << "res = " << res << endl;
    int res1 = 0;
    for (int i = a; i <= b; i++)
    {
      res1 = i + res1;
    }
    cout << "res1 = " << res1 << endl;
}
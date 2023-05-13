#include <iostream>
#include <string>
using namespace std;
int recurse(int start, int end);
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int res = recurse(a, b);
    cout << "res = " << res << endl;
}

int recurse(int start, int end)
{
  int res = 0;
  if (start > end)
  {
    return res;
  }
  if (start == end)
  {
    return start;
  }
  res = recurse(start + 1, end);
  res = res + start;
  return res;
}

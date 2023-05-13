#include <iostream>
#include <string>
using namespace std;
static int res = 0;
void func(int num);
int main()
{
  int a;
  while(true)
  {
    cout << "please input a num: " << endl;
    cin >> a;
    if (a == 0)
    {
      break;
    }
    func(a);
  }
}
void func(int num)
{
  res = res + num;
  cout << "now the sum of all the numbers is " << res << endl;
}
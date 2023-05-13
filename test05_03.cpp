#include <iostream>
#include <string>
using namespace std;
int main()
{
  int Daphne_base = 100;
  int Cleo_base = 100;
  int year = 0;
  while (true)
  {
    year++;
    Daphne_base = 100 * 0.1 + Daphne_base;
    Cleo_base = Cleo_base * 0.05 + Cleo_base;
    if (Daphne_base <= Cleo_base)
    {
      cout << "year = " << year << endl;
      break;
    }
  }
  

}
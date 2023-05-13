#include <iostream>
#include <string>
using namespace std;
struct pizza
{
  string company_name;
  int radius;
  double weight;
};
int main()
{
    struct pizza _pizza;
    cout << "please input company's name: " << endl;
    getline(cin, _pizza.company_name);
    cout << "please input radius: " << endl;
    cin >> _pizza.radius;
    cout << "please input weight: " << endl;
    cin >> _pizza.weight;
    cout << "company's name: " << _pizza.company_name
    << "; radius: " << _pizza.radius
    << "; weight: " << _pizza.weight; 
    return 0;
}
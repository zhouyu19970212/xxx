#include <iostream>
#include <string>
using namespace std;
struct CandyBar 
{
  string brand;
  double weight;
  int calorie;  
};
int main()
{
    struct CandyBar sandy = {"Mocha Munch", 2.3, 350};
    cout << "brand: " << sandy.brand << " weight: " << sandy.weight
    << " calorie: " << sandy.calorie;
    return 0;
}
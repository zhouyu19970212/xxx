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
    CandyBar * sandy = new CandyBar[3];
    for(int i = 0; i < 3; i++)
    {
      (sandy[i]).brand = "None";
      sandy[i].weight = 0.0;
      sandy[i].calorie = 0;
      cout << "brand: " << sandy[i].brand 
      << " weight: " << sandy[i].weight
      << " calorie: " << sandy[i].calorie << endl;
    }
    delete [] sandy;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

struct car 
{
  string producter;
  int year;
};
int main()
{
  int car_num;
  cout << "how many car?" << endl;
  cin >> car_num;
  car * car_array = new car[car_num];
  for (int i = 0; i < car_num; i++) 
  {
    cout << "input the producter of a car: " << endl;
    // 吸收enter键
    cin.get();
    getline(cin, car_array[i].producter);
    cout << "input the year of a car: " << endl;
    cin >> car_array[i].year;
  }
  for (int i = 0; i < car_num; i++)
  {
    cout << "the producter of car[" << i << "] is: "
    << car_array[i].producter << endl;
    cout << "the year of car[" << i << "] is: "
    << car_array[i].year << endl;
  }
  return 0;
}
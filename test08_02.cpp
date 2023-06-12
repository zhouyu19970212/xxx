#include <iostream>
using namespace std;

struct CandyBar
{
    char * name;
    double weight;
    int calorie;
};

void func(CandyBar & candybar,
          char * name = "Millennium",
          double weight = 2.85,
          int calorie = 350);
void show(const CandyBar & candybar);


int main()
{
    CandyBar candybar = {"aa", 0.00, 0};
    show(candybar);
    cout << "----------------" << endl;
    func(candybar);
    show(candybar);
    return 0;
}

void func(CandyBar & candybar, char * name, double weight, int calorie)
{
    candybar.name = name;
    candybar.weight = weight;
    candybar.calorie = calorie;
}

void show(const CandyBar & candybar)
{
    cout << "name = " << candybar.name << endl;
    cout << "weight = " << candybar.weight << endl;
    cout << "calorie = " << candybar.calorie << endl;
}
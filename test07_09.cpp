#include <iostream>
using namespace std;
double add(double x, double y);
double calculate(double x, double y, double (*pf) (double a, double b));

int main()
{
    double res = calculate(2.5, 10.4, add);
    cout << "res = " << res << endl;
    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double calculate(double x, double y, double (*pf) (double a, double b))
{
    return (*pf) (x, y);
}
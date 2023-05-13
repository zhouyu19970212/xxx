#include <iostream>
using namespace std;
double conculate_mean(double, double);
int main()
{
    double first_num, second_num;
    cout << "please input first number: " << endl;
    cin >> first_num;
    cout << "please input second number: " << endl;
    cin >> second_num;
    double res = conculate_mean(first_num, second_num);
    cout << "res = " << res << endl;
    return 0;
}
double conculate_mean(double first_num, double second_num)
{
    double mean = 2.0 * first_num * second_num / (first_num + second_num);
    return mean;
}
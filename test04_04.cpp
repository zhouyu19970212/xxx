#include <iostream>
#include <string>
using namespace std;
int main()
{
    string first_name;
    string last_name;
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;

    // 逗号+空格+’\0’
    string name = first_name + ", " + last_name;
    cout << "Here's the information in a single string: " << name;
    return 0;
}
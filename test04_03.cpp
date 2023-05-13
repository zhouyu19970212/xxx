#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char first_name[10];
    char last_name[10];
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;

    // 逗号+空格+’\0’
    char * name = new char[strlen(first_name) + strlen(last_name) + 3];
    strcpy(name, first_name);
    char sign[3] = ", ";
    strcat(name, sign);
    strcat(name, last_name);
    cout << "Here's the information in a single string: " << name;
    return 0;
}
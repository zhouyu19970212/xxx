#include <iostream>
using namespace std;
int main()
{
    char first_name[10];
    char last_name[10];
    int age = 0;
    char grade;
    cout << "What is your first name? ";
    cin.getline(first_name, 10);
    cout << "What is your last name? ";
    cin.getline(last_name, 10);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
}
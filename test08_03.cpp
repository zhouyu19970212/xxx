#include <iostream>
#include <string>
using namespace std;

void func(string & str);

int main()
{
    string str = "aa  woa A, w12";
    cout << str << endl;
    func(str);
    cout << str << endl;
    return 0;
}

void func(string & str)
{
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
}
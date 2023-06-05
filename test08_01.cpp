#include <iostream>
using namespace std;

void func(const char * str);
void func(const char * str, int & cnt);

int main()
{
    int cnt = 0;
    char str[40] = "iloveu";
    cout << "-------" << "one para" << "-------" << endl;
    func(str);
    cout << "-------" << "two para" << "-------" << endl;
    func(str, cnt);
    func(str, cnt);
    func(str, cnt);
    return 0;
}

void func(const char * str)
{
    cout << str << endl;
}

void func(const char * str, int & cnt)
{
    cnt++;
    cout << str << endl;
    cout << "cnt: " << cnt << endl;
}
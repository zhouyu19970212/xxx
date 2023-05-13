#include <iostream>
using namespace std;
bool error_check(char c);
bool choise_func(char c);
int main()
{
    char c;
    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore          p) pianist" << endl;
    cout << "t) tree               g) game" << endl;
    cin.get(c).get();
    while (true)
    {
        bool flag = choise_func(c);
        if (flag) break;
        cout << "Please enter a c, p, t or g: ";
        cin.get(c).get();
    }
    return 0;
}
bool choise_func(char c)
{
    if (!error_check(c)) return false;
    switch (c)
    {
    case 'c':
        cout << "cccc" << endl;
        break;
    case 'p':
        cout << "pppp" << endl;
        break;
    case 't':
        cout << "tttt" << endl;
        break;
    case 'g':
        cout << "gggg" << endl;
        break;
    }
    return true;
}
bool error_check(char c)
{
    if ((c != 'c') && (c != 'p') && (c != 't') && (c != 'g'))
    {
        return false;
    }
    return true;
}
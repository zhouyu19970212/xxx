#include <iostream>
using namespace std;
bool isDigital(char word);
int main()
{
    const int SIZE = 10;
    double donation[SIZE];
    int times = 10;
    while (times >= 1)
    {
        cout << "Enter a num: " << endl;
        char word = cin.get();
        if (!isDigital(word))
        {
            break;
        }
        donation[times--] = double(word);
    }
    return 0;
}
bool isDigital(char word)
{
    if ((word < INT_MIN) || (word > INT_MAX))
        return false;
    return true;
}
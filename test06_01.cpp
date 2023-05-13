#include <iostream>
using namespace std;

int main()
{
    char word;
    cout << "Enter a word: (end of @)";
    while ((word = cin.get()) != '@')
    {
        if ((word < 'A') || (word > 'Z' && word < 'a') || (word > 'z'))
            continue;
        if (word >= 65 && word <= 90)
            word = word + 32;
        else
            word = word - 32;
        cout << "word is " << word << endl;
    }
    return 0;
}
#include <iostream>
#include <string>
#include <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const { return a; }
    T2 second() const { return b; }
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) {}
    Pair() {}
};

template<class T1, class T2>
T1 & Pair<T1, T2>::second()
{
    return b;
}

int main()
{
    using std::cout;
    using std::endl;
    using std::string;
    Pair<string, int> ratings[4] = 
    {
        Pair<string, int>("The Purple Duke", 5);
        Pair<string, int>("xxx", 4);
        Pair<string, int>("aaa", 3);
        Pair<string, int>("bbbb", 2);
    };

    int joints = sizeof(ratings) / sizeof(Pair<string, int>);
    cout << "Ratings:\t Eatery\n";
    for (int i = 0; i < joints; i++)
    {
        cout << ratings[i].second() << ":\t" << ratings[i].first() << endl;
    }

    return 0;
}
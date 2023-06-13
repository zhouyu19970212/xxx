#include <iostream>
#include <cstring>
#include "golf.h"
using namespace std;
void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    cout << "please enter fullname:" << endl;
    cin.getline(g.fullname, Len);
    if (strlen(g.fullname) == 0)
    {
        return 0;
    }
    else
    {
        cout << "please enter handicap: " << endl;
        cin >> g.handicap;
        cin.get();
        return 1;
    }
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    cout << "fullname : " << g.fullname << ", handicap : " << g.handicap << endl;
}
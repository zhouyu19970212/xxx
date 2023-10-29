#include "person.h"
#include <cstring>
#include <iostream>

Person::Person(const string & ln, const char * fn)
{
    lname = ln;
    strcpy(fname, fn);
}

void Person::show() const
{
    using namespace std;
    cout << "lname: " << lname << ", fname: " << fname << endl;
}

void Person::FormalShow() const
{
    using namespace std;
    cout << "name: " << fname << " " << lname << endl;
}
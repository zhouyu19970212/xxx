#include <iostream>
using namespace std;

const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);
int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}
int getinfo(student pa[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the name of students: ";
        cin >> pa[i].fullname;
        cout << "Enter the hobbies of students: ";
        cin >> pa[i].hobby;
        cout << "Enter the ooplevel of students: ";
        cin >> pa[i].ooplevel;
        
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n');
            break;
        }
        return i;
    }
}

void display1(student st)
{
    cout << "Name: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "Ooplevel: " << st.ooplevel << endl;
}

void display2(const student * st)
{
    cout << "Name: " << st->fullname << endl;
    cout << "Hobby: " << st->hobby << endl;
    cout << "Ooplevel: " << st->ooplevel << endl;
}

void display3(const student st[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << st[i].fullname << endl;
        cout << "Hobby: " << st[i].hobby << endl;
        cout << "Ooplevel: " << st[i].ooplevel << endl;
    }
}
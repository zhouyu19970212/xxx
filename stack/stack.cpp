#include "stack.h"
#include <iostream>
Stack::Stack()
{
    top = 0;
}

bool Stack::isempty()const
{
    return top == 0;
}

bool Stack::isfull()const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    using namespace std;
    if (top < MAX)
    {
        items[top++] = item;
        item->payment += item->payment;
        cout << "payment:" << item->payment << endl;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}
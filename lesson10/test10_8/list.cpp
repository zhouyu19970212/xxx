#include "list.h"

List::List() 
{
    top = 0;
}

void List::add(item & e)
{
    list[top++] = e;
}

bool List::isempty() const
{
    return top == 0;
}

bool List::isfull() const
{
    return top == MAX;
}

bool List::amend(const int top, item & e)
{
    if (top <= MAX - 1 && top >= 0)
    {
        list[top] = e;
    }
    else
        return false;
}

#ifndef LIST_H_
#define LIST_H_

typedef int item;

class List
{
private:
    enum 
    {
        MAX = 10
    };
    item list[MAX];
    int top;
public:
    List();
    void add(item &);
    bool isempty() const;
    bool isfull() const;
    bool amend(const int top, item & e); 
};

#endif
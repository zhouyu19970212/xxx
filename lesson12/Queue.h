#ifndef QUEUE_H_
#define QUEUE_H_
#include <iostream>

class Customer
{
private:
    long arrive;
    int processtime;
public:
    Customer() { arrive = processtime = 0; }
    void set(long when);
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};

typedef Customer Item;

class Queue
{
private:
// class scope definitions
    // Node is a nested structure definition local to this class
    struct Node
    {
        /* data */
        Item item; 
        struct Node * next;
    };
    enum {Q_SISE = 10};
// private class number"
    Node * front;
    Node * rear;
    int items;
    const int qsize;
    Queue(const Queue & q) : qsize(0) {}
    Queue & operator=(const Queue & q) { return *this; }
public:
    Queue(int qs = Q_SISE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
};

#endif
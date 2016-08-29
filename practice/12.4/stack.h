#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};
    Item *pitems;
    int size;
    int top;
public:
    Stack(int n = MAX);
    Stack(const Stack &st);
    ~Stack();
    int showsize() const { return size; }
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &tem);
    bool pop(Item &item);
    Stack &operator = (const Stack &st);
    friend std::ostream &operator << (std::ostream &os, const Stack &st);
};

#endif // STACK_H_INCLUDED

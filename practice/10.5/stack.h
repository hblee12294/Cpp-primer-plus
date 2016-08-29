#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
    enum {MAX = 10};
    Item items[MAX];
    double sum;
    int top;
public:
    Stack();
    bool isemptty();
    bool isfull();
    bool push(const Item &item);
    bool pop(Item &item);
    void showstock();
};

#endif // STACK_H_INCLUDED

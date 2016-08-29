#include <iostream>
#include <cstring>
#include "stack.h"
Stack::Stack()
{
    top = 0;
    sum = 0.0;
}

bool Stack::isemptty()
{
    return top == 0;
}

bool Stack::isfull()
{
    return top == MAX;
}

bool Stack::push(const Item &item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item &item)
{
    if (top > 0)
    {
        strcpy(item.fullname, items[--top].fullname);
        item.payment = items[top].payment;
        sum += item.payment;
        return true;
    }
    else
        return false;
}

void Stack::showstock()
{
    std::cout << "The sum number of the stack is " << sum << std::endl;
}

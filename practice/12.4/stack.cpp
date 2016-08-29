#include <iostream>
#include "stack.h"

Stack::Stack(int n)
{
    pitems = new Item [n];
    size = n;
    top = 0;
}

Stack::Stack(const Stack &st)
{
    delete [] pitems;

    size = st.size;
    top = st.top;
    pitems = new Item [size];
    for (int i = 0; i < size; ++i)
        *(pitems + i) = *(st.pitems + i);
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item &item)
{
    if (top < MAX)
    {
        pitems[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item &item)
{
    if (top > 0)
    {
        item = pitems[--top];
        return true;
    }
    else
        return false;
}

Stack &Stack::operator = (const Stack &s)
{
    size = s.size;
    top = s.top;
    pitems = new Item [size];
    for (int i = 0; i < size; ++i)
        pitems[i] = s.pitems[i];
    return *this;
}

std::ostream &operator << (std::ostream &os, const Stack &st)
{
    for (int i = 0; i < st.top; ++i)
        std::cout << i + 1 << ": " << (st.pitems)[i] << std::endl;
}

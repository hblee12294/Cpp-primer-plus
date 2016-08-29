#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef int Item;

class List
{
    static const unsigned Max = 4;
    Item lists[Max];
    int size;
public:
    List(const Item arr[] = NULL, int n = 0);
    bool isfull() const;
    bool isempty() const;
    bool append(const Item &item);
    void visit(void (*pf) (Item &item));
};

#endif // LIST_H_INCLUDED

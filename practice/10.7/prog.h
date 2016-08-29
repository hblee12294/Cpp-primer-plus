#ifndef PROG_H_INCLUDED
#define PROG_H_INCLUDED

class Plorg
{
    enum {Len = 20};
    char name[Len];
    int ci;
public:
    Plorg(char *nm = "Plorga", int c = 50);
    ~Plorg();
    void update(const int c);
    void show() const;
};

#endif // PROG_H_INCLUDED

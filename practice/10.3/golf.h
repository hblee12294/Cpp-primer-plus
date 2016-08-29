#ifndef GOLF_H_INCLUDED
#define GOLF_H_INCLUDED

class Golf
{
    enum {Len = 40};
    char fullname[Len];
    int handicap;
public:
    Golf();
    Golf(const char *name, const int hc);
    ~Golf() {}
    int setgolf();
    void hcmodify(int hc);
    void showgolf() const;
};

#endif // GOLF_H_INCLUDED

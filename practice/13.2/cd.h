#ifndef CD_H_INCLUDED
#define CD_H_INCLUDED

class Cd
{
private:
    char *performance;
    char *label;
    int selections;
    double playtime;
public:
    Cd(char *s1 = "", char *s2 = "", int n = 0, double x = 0.0);
    Cd(const Cd &d);
    virtual ~Cd();
    virtual void Report() const;
    Cd &operator = (const Cd &d);
};

class Classic : public Cd
{
private:
    char * hit;
public:
    Classic(char *ht = "", char *s1 = "", char *s2 = "" , int n = 0, double x = 0.0);
    Classic(const Classic &cls);
    Classic(char *ht, const Cd &d);
    ~Classic();
    virtual void Report() const;
    Classic &operator = (const Classic &cls);
};

#endif // CD_H_INCLUDED

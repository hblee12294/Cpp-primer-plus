#ifndef CD_H_INCLUDED
#define CD_H_INCLUDED

class Cd
{
private:
    enum {LIM_P = 50, LIM_L = 20};
    char performance[LIM_P];
    char label[LIM_L];
    int selections;
    double playtime;
public:
    Cd(char *sl, char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd &operator = (const Cd &d);
};

class Classic : public Cd
{
private:
    enum {LIM_H = 70};
    char hit[70];
public:
    Classic(char *ht, char *s1, char *s2, int n, double x);
    Classic(char *ht, const Cd &cls);
    Classic(const Classic &cls);
    Classic();
    ~Classic();
    virtual void Report() const;
//    Classic &operator = (const Classic &cls);
};

#endif // CD_H_INCLUDED

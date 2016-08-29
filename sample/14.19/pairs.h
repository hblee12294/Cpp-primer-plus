#ifndef PAIRS_H_INCLUDED
#define PAIRS_H_INCLUDED

template <class T1, class T2>

class Pair
{
private:
    T1 a;
    T2 b;
public:
    Pair(const T1 &aval, const T2 &bval) : a(aval), b(bval) {}
    Pair() {}
    T1 &first();
    T2 &second();
    T1 first() const { return a;}
    T2 second() const { return b;}
};

template <class T1, class T2>
T1 &Pair<T1,T2>::first()
{
    return a;
}

template <class T1, class T2>
T2 &Pair<T1,T2>::second()
{
    return b;
}
#endif // PAIRS_H_INCLUDED

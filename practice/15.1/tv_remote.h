#ifndef TV_REMOTE_H_INCLUDED
#define TV_REMOTE_H_INCLUDED

class Remote;

class Tv
{
    friend class Remote;
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
public:
    enum State{Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};

    Tv(int s = Off, int mc = 125) : state(s), volume(5),
        maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff();
    bool ison() const;
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode();
    void set_input();
    void settings() const;
    void buzz(Remote &r);
    void intereact(Remote &r) const;
};

class Remote
{
    friend class Tv;
private:
    int mode;
    int buzz_state;
public:
    Remote(int m = Tv::TV, int bs = Tv::Off) : mode(m), buzz_state(bs) {}
    Tv::State check_mode() const;
    bool volup(Tv &t);
    bool voldown(Tv &t);
    void chanup(Tv &t);
    void chandown(Tv &t);
    void set_chan(Tv &t, int c);
    void set_mode(Tv &t);
    void set_input(Tv &t);
    void speaker() const;
};


#endif // TV_REMOTE_H_INCLUDED

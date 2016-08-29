#include <iostream>
#include "tv_remote.h"

//Tv methods
void Tv::onoff()
{
    state = (state == On)? Off : On;
}

bool Tv::ison() const
{
    return state == On;
}

bool Tv::volup()
{
    if (volume < MaxVal)
    {
        volume++;
        return true;
    }
    else
        return false;
}

bool Tv::voldown()
{
    if (volume > MinVal)
    {
        volume--;
        return true;
    }
    else
        return false;
}

void Tv::chanup()
{
    if (channel < maxchannel)
        channel++;
    else
        channel = 1;
}

void Tv::chandown()
{
    if (channel > 1)
        channel--;
    else
        channel = maxchannel;
}

void Tv::set_mode()
{
    mode = (mode = Antenna)? Cable : Antenna;
}

void Tv::set_input()
{
    input = (input == TV)? DVD : TV;
}

void Tv::settings() const
{
    using std::cout;
    using std::endl;
    cout << "TV is " << (state == On? "On" : "Off") << endl;
    if (state == On)
    {
        cout << "Volume setting = " << volume << endl;
        cout << "Channel setting = " << channel << endl;
        cout << "Mode = " << (mode == Antenna? "Antenna" : "Cable") << endl;
        cout << "Input = " << (input == TV? "TV" : "DVD") << endl;
    }
}

void Tv::buzz(Remote &r)
{
    if (state == On)
        r.buzz_state = (r.buzz_state == On)? Off : On;
    else
        std::cout << "Please turn on your TV!";
}

void Tv::intereact(Remote &r) const
{
    r.speaker();
}

//Remote methods
Tv::State Remote::check_mode() const
{
    return (Tv::State) mode;
}

bool Remote::volup(Tv &t)
{
    t.volup();
}

bool Remote::voldown(Tv &t)
{
    t.voldown();
}

void Remote::chanup(Tv &t)
{
    t.chanup();
}

void Remote::chandown(Tv &t)
{
    t.chandown();
}

void Remote::set_chan(Tv &t, int c)
{
    t.channel = c;
}

void Remote::set_mode(Tv &t)
{
    t.set_mode();
}

void Remote::set_input(Tv &t)
{
    t.set_input();
}

void Remote::speaker() const
{
    std::cout << "Zzzzzzzzz...remote is buzzing.\n";
}


//Remote methods;

#include <iostream>
#include "person.h"
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;

void Person::Show()
{
    cout << "Name: "
         << lname << " " << fname << endl;
}

//Gunslinger
void Gunslinger::Show()
{
    Person::Show();
    cout << "Draw Time: " << draw_time << endl
         << "Notches: " << notch << endl;
}

//PokerPlayer
int PokerPlayer::Draw()
{
    std::srand(std::time(0));
    return std::rand() % 52;
}

void PokerPlayer::Show()
{
    Person::Show();
    cout << "Draw: " << Draw()  << endl;
}

//BadDude
double BadDude::Gdraw() const
{
    return Gunslinger::Draw();
}

int BadDude::Cdraw()
{
    return PokerPlayer::Draw();
}

void BadDude::Show()
{
    Person::Show();
    cout << "Draw Time: " << Gunslinger::Draw() << endl;
    cout << "The last card is " << PokerPlayer::Draw() << endl;
}

#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show_value(const box ent);
void cal_volume(box *ent);

int main()
{
    using namespace std;

    box entity = {"Samsonite", 75, 20, 35};

    cout << "You have bought a " << entity.maker << "!\n";
    cal_volume(&entity);
    show_value(entity);

    return 0;
}

void cal_volume(box *ent)
{
    ent->volume = ent->height * ent->length * ent->width;
}

void show_value(const box ent)
{
    std::cout << "Well, it's " << ent.height << " cm high, "
              << ent.width << "cm wide, "
              << ent.length << "cm long.\n";
    std::cout << ent.volume / 1000 << "L is big enough for you.\n";
}
